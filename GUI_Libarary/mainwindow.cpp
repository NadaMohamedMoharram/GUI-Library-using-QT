#include "mainwindow.h" // Including header file for the MainWindow class
#include "ui_mainwindow.h" // Including header file for the UI definition of MainWindow

/*---------------Library Includes--------------------------*/
#include<QPixmap> // Including QPixmap for handling images
#include <QMessageBox> // Including QMessageBox for displaying messages
#include <QProcess> // Including QProcess for system processes handling
#include <QDir> // Including QDir for handling directories
#include <QFileInfoList> // Including QFileInfoList for file information handling
#include<QFileDialog> // Including QFileDialog for file dialog handling
#include <QDesktopServices> // Including QDesktopServices for desktop services handling
#include <QUrl> // Including QUrl for handling URLs

/*---------------Files paths--------------------------*/
QString FilePath2="..\\..\\Library.json"; // Defining a file path
QString FilePath="..\\..\\LoginDB.json"; // Defining a file path
QString FilePath3="..\\..\\lib"; // Defining a directory path

/*------------------MainWindow Implementation-----------------------*/
MainWindow::MainWindow(QWidget *parent) // Constructor for the MainWindow class
    : QMainWindow(parent) // Calling the parent constructor
    , ui(new Ui::MainWindow) // Creating a new instance of the UI class
{
    ui->setupUi(this); // Setting up the UI

    QPixmap pix("D:\\ITIDA_Scholarship\\Task_Qt\\Exam\\Wordpress-Guides-Subject-600x628-1.png"); // Loading an image
    ui->label_image1->setPixmap(pix.scaled(500,800,Qt::KeepAspectRatio)); // Setting the image to a label

    QPixmap pix2("D:\\ITIDA_Scholarship\\Assignments\\OIP (2).jpg"); // Loading another image
    ui->label_Login->setPixmap(pix2.scaled(200,200,Qt::KeepAspectRatio)); // Setting the image to a label

    // Adding items to ComboBoxes
    ui->Filter_comboBox_user->addItem("None");
    ui->Filter_comboBox_user->addItem("Fantasy");
    ui->Filter_comboBox_user->addItem("Romance");
    ui->Filter_comboBox_user->addItem("Religion");
    ui->Filter_comboBox_user->addItem("Kids");

    ui->Filter_comboBox_Admin->addItem("None");
    ui->Filter_comboBox_Admin->addItem("Fantasy");
    ui->Filter_comboBox_Admin->addItem("Romance");
    ui->Filter_comboBox_Admin->addItem("Religion");
    ui->Filter_comboBox_Admin->addItem("Kids");
}

MainWindow::~MainWindow() // Destructor for the MainWindow class
{
    delete ui; // Deleting the UI instance
}

void MainWindow::on_Login_Button_clicked() // Slot for handling login button click
{
    QString username = ui->lineEdit_username->text(); // Getting username from line edit
    QString password = ui->lineEdit_password->text(); // Getting password from line edit

    QFile file(FilePath); // Creating QFile instance with file path
    if (!file.open(QIODevice::ReadOnly)) { // Opening file in read-only mode
        qInfo()<<"Could not open json file"<<Qt::endl; // Logging an error if file cannot be opened
        return; // Returning if file cannot be opened
    }

    QByteArray data = file.readAll(); // Reading all data from the file
    QJsonDocument doc(QJsonDocument::fromJson(data)); // Creating JSON document from the read data
    QJsonArray usersArray = doc.array(); // Extracting JSON array from the document

    bool loginSuccess = false; // Flag for login success
    bool isAdmin = false; // Flag for admin user
    bool isUser = false; // Flag for regular user

    for (const QJsonValue &value : usersArray) { // Looping through users array
        QJsonObject userObj = value.toObject(); // Extracting JSON object for each user

        qInfo()<<"userobj=>"<<userObj["UserName"].toString()<< Qt::endl; // Logging username
        qInfo()<<"Password=>"<<userObj["Password"].toString()<< Qt::endl; // Logging password

        // Checking if username and password match
        if (userObj["UserName"].toString() == username && userObj["Password"].toString() == password) {
            loginSuccess = true; // Setting login success flag to true
            isAdmin = (userObj["Auth"].toString() == "Admin"); // Checking if user is admin
            isUser = (userObj["Auth"].toString() == "User"); // Checking if user is regular user
            break; // Exiting loop if match found
        }
    }

    if (loginSuccess ) { // If login is successful
        if (isAdmin) // If user is admin
            ui->Login_Wedgit->setCurrentIndex(1); // Switching to admin page
        else if (isUser) // If user is regular user
            ui->Login_Wedgit->setCurrentIndex(2); // Switching to regular user page
    } else { // If login is unsuccessful
        qInfo()<< "Invalid username or password"<<Qt::endl; // Logging error message
        QMessageBox::critical(this, "Error", "Invalid username or password."); // Displaying error message
    }
}

void MainWindow::on_Store_Button_clicked() // Slot for handling store button click
{
    QString username = ui->lineEdit_username->text(); // Getting username from line edit
    QString password = ui->lineEdit_password->text(); // Getting password from line edit

    if (username.isEmpty() || password.isEmpty()) // If username or password is empty
        return; // Returning without storing

    // Creating Memento object with username and password
    Memento memento(username, password);
    savedStates.append(memento); // Appending memento to list of saved states
    qInfo()<< "State saved successfully"<<Qt::endl; // Logging success message
    ui->listWidget_login->addItem("State saved successfully"); // Adding success message to list widget
    ui->lineEdit_username->clear(); // Clearing username line edit
    ui->lineEdit_password->clear(); // Clearing password line edit
}

void MainWindow::on_Restore_Button_clicked() // Slot for handling restore button click
{
    ui->listWidget_login->clear(); // Clearing list widget

    if (savedStates.isEmpty()) // If no saved states available
        return; // Returning without restoring

    Memento lastState = savedStates.last(); // Retrieving last saved state
    ui->lineEdit_username->setText(lastState.getUsername()); // Setting username from last state
    ui->lineEdit_password->setText(lastState.getPassword()); // Setting password from last state
    ui->listWidget_login->addItem(lastState.getUsername()); // Adding username to list widget
    ui->listWidget_login->addItem(lastState.getPassword()); // Adding password to list widget
    qInfo()<< "State restored successfully"<<Qt::endl; // Logging success message
    ui->listWidget_login->addItem("State restored successfully"); // Adding success message to list widget
}

/****************************************************************************************/
void MainWindow::on_Remove_Button_clicked() // Slot for handling remove button click
{
    ui->listWidget_login->clear(); // Clearing list widget
    if (savedStates.isEmpty()) { // If no saved states available
        QMessageBox::warning(this, "Warning", "No saved states to remove"); // Displaying warning message
        return; // Returning without removing
    }

    savedStates.removeLast(); // Removing the last saved state
    qInfo()<< "Latest saved state removed"<<Qt::endl; // Logging removal
    ui->listWidget_login->addItem("Latest saved state removed"); // Adding removal message to list widget
    ui->lineEdit_username->clear(); // Clearing username line edit
    ui->lineEdit_password->clear(); // Clearing password line edit
}

void MainWindow::on_search_Button_clicked() // Slot for handling search button click
{
    QString searchTitle = ui->lineEdit_Title->text(); // Getting search title from line edit
    if (searchTitle.isEmpty()) { // If search title is empty
        qInfo()<<"Search title cannot be empty"<<Qt::endl; // Logging error message
        return; // Returning without searching
    }

    QFile file(FilePath2); // Creating QFile instance with file path
    if (!file.open(QIODevice::ReadOnly)) { // Opening file in read-only mode
        qInfo()<<"Could not open book json file"<<Qt::endl; // Logging error message
        return; // Returning without searching
    }

    QByteArray data = file.readAll(); // Reading all data from the file
    QJsonDocument doc(QJsonDocument::fromJson(data)); // Creating JSON document from the read data
    QJsonArray booksArray = doc.array(); // Extracting JSON array from the document
    ui->bookListWidget->clear(); // Clearing book list widget

    for (const QJsonValue &value : booksArray) { // Looping through books array
        QJsonObject bookObj = value.toObject(); // Extracting JSON object for each book
        if (bookObj["title"].toString().contains(searchTitle, Qt::CaseInsensitive)) { // Checking if title matches search title
            // Retrieving book details
            QString title = bookObj["title"].toString();
            QString author = bookObj["author"].toString();
            QString category = bookObj["category"].toString();
            QString barcode = bookObj["barcode"].toString();

            // Constructing book details string
            QString bookDetails = QString("Title: %1, Author: %2, Category: %3, Barcode: %4")
                                      .arg(title)
                                      .arg(author)
                                      .arg(category)
                                      .arg(barcode);

            // Adding book details to list widget
            ui->bookListWidget->addItem(bookDetails);

            /*********************************************************************/
            // Searching and opening a specific file
            QString specificFileName = barcode + ".txt"; // File name to search for
            QString directoryPath = FilePath3; // Directory path
            QDir directory(directoryPath);
            QFileInfoList fileList = directory.entryInfoList(QStringList() << specificFileName, QDir::Files);

            if (!fileList.isEmpty()) { // If file is found
                QString filePath = fileList.first().absoluteFilePath(); // Getting absolute file path
                QDesktopServices::openUrl(QUrl::fromLocalFile(filePath)); // Opening file
                qInfo() << "Opening file: " << filePath; // Logging file opening
            }
            /*********************************************************************/
        }
    }
}

void MainWindow::on_search_Button_Admin_clicked() // Slot for handling admin search button click
{
    QString searchTitle = ui->lineEdit_Title_Admin->text(); // Getting search title from line edit
    if (searchTitle.isEmpty()) { // If search title is empty
        qInfo()<<"Search title cannot be empty"<<Qt::endl; // Logging error message
        return; // Returning without searching
    }

    QFile file(FilePath2); // Creating QFile instance with file path
    if (!file.open(QIODevice::ReadOnly)) { // Opening file in read-only mode
        qInfo()<<"Could not open book json file"<<Qt::endl; // Logging error message
        return; // Returning without searching
    }

    QByteArray data = file.readAll(); // Reading all data from the file
    QJsonDocument doc(QJsonDocument::fromJson(data)); // Creating JSON document from the read data
    QJsonArray booksArray = doc.array(); // Extracting JSON array from the document
    ui->AdminBookListWidget->clear(); // Clearing admin book list widget

    for (const QJsonValue &value : booksArray) { // Looping through books array
        QJsonObject bookObj = value.toObject(); // Extracting JSON object for each book
        if (bookObj["title"].toString().contains(searchTitle, Qt::CaseInsensitive)) { // Checking if title matches search title
            // Retrieving book details
            QString title = bookObj["title"].toString();
            QString author = bookObj["author"].toString();
            QString category = bookObj["category"].toString();
            QString barcode = bookObj["barcode"].toString();

            // Constructing book details string
            QString bookDetails = QString("Title: %1, Author: %2, Category: %3, Barcode: %4")
                                      .arg(title)
                                      .arg(author)
                                      .arg(category)
                                      .arg(barcode);

            // Adding book details to admin list widget
            ui->AdminBookListWidget->addItem(bookDetails);

            /*********************************************************************/
            // Searching and opening a specific file
            QString specificFileName = barcode + ".txt"; // File name to search for
            QString directoryPath = FilePath3; // Directory path
            QDir directory(directoryPath);
            QFileInfoList fileList = directory.entryInfoList(QStringList() << specificFileName, QDir::Files);

            if (!fileList.isEmpty()) { // If file is found
                QString filePath = fileList.first().absoluteFilePath(); // Getting absolute file path
                QDesktopServices::openUrl(QUrl::fromLocalFile(filePath)); // Opening file
                qInfo() << "Opening file: " << filePath; // Logging file opening
            }
            /*********************************************************************/
        }
    }
}


/***********************************************************************************/
void MainWindow::on_Add_Button_Admin_clicked() // Slot for handling admin add button click
{
    QString title = ui->lineEdit_Ticket_Admin->text(); // Getting title from line edit
    QString author = ui->lineEdit_Auther_Admin->text(); // Getting author from line edit
    QString category = ui->lineEdit_Category_Admin->text(); // Getting category from line edit
    QString barcode = ui->lineEdit_Barcode_Admin->text(); // Getting barcode from line edit

    if (title.isEmpty() || author.isEmpty() || category.isEmpty() || barcode.isEmpty()) { // If any field is empty
        qInfo()<<"All fields must be filled out"<<Qt::endl; // Logging error message
        return; // Returning without adding
    }
    QFile file(FilePath2); // Creating QFile instance with file path
    if (!file.open(QIODevice::ReadOnly)) { // Opening file in read-only mode
        qInfo()<<"Could not open book json file"<<Qt::endl; // Logging error message
        return; // Returning without adding
    }
    QByteArray data = file.readAll(); // Reading all data from the file
    QJsonDocument doc(QJsonDocument::fromJson(data)); // Creating JSON document from the read data
    QJsonArray booksArray = doc.array(); // Extracting JSON array from the document

    QJsonObject newBook; // Creating a new JSON object for the new book
    newBook["title"] = title; // Adding title to the new book
    newBook["author"] = author; // Adding author to the new book
    newBook["category"] = category; // Adding category to the new book
    newBook["barcode"] = barcode; // Adding barcode to the new book

    booksArray.append(newBook); // Appending the new book to the array
    saveBooks(booksArray); // Saving the updated array to the file
    loadBooks(); // Reloading the books
    ui->lineEdit_Ticket_Admin->clear(); // Clearing title line edit
    ui->lineEdit_Auther_Admin->clear(); // Clearing author line edit
    ui->lineEdit_Category_Admin->clear(); // Clearing category line edit
    ui->lineEdit_Barcode_Admin->clear(); // Clearing barcode line edit
}

void MainWindow::saveBooks(const QJsonArray &booksArray) // Function to save books to file
{
    QFile file(FilePath2); // Creating QFile instance with file path
    if (!file.open(QIODevice::WriteOnly)) { // Opening file in write-only mode
        qInfo()<<"Could not open book json file"<<Qt::endl; // Logging error message
        return; // Returning without saving
    }
    QJsonDocument doc(booksArray); // Creating JSON document from the array
    file.write(doc.toJson()); // Writing JSON data to the file
}

void MainWindow::loadBooks() // Function to load books from file
{
    QFile file(FilePath2); // Creating QFile instance with file path
    if (!file.open(QIODevice::ReadOnly)) { // Opening file in read-only mode
        qInfo()<<"Could not open book json file"<<Qt::endl; // Logging error message
        return; // Returning without loading
    }
    QByteArray data = file.readAll(); // Reading all data from the file
    QJsonDocument doc(QJsonDocument::fromJson(data)); // Creating JSON document from the read data
    QJsonArray booksArray = doc.array(); // Extracting JSON array from the document

    ui->AdminBookListWidget->clear(); // Clearing admin book list widget

    QSet<QString> categories; // Creating a set to store unique categories

    for (const QJsonValue &value : booksArray) { // Looping through books array
        QJsonObject bookObj = value.toObject(); // Extracting JSON object for each book
        QString title = bookObj["title"].toString(); // Getting title of the book
        QString author = bookObj["author"].toString(); // Getting author of the book
        QString category = bookObj["category"].toString(); // Getting category of the book
        QString barcode = bookObj["barcode"].toString(); // Getting barcode of the book

        QString bookDetails = QString("Title: %1, Author: %2, Category: %3, Barcode: %4") // Constructing book details string
                                  .arg(title)
                                  .arg(author)
                                  .arg(category)
                                  .arg(barcode);

        ui->AdminBookListWidget->addItem(bookDetails); // Adding book details to admin book list widget
        categories.insert(category); // Adding category to the set
    }

    ui->Filter_comboBox_user->clear(); // Clearing user filter combo box
    ui->Filter_comboBox_user->addItem("None"); // Adding "None" option
    foreach (const QString &category, categories) { // Looping through categories
        ui->Filter_comboBox_user->addItem(category); // Adding category to the user filter combo box
    }

    ui->Filter_comboBox_Admin->clear(); // Clearing admin filter combo box
    ui->Filter_comboBox_Admin->addItem("None"); // Adding "None" option
    foreach (const QString &category, categories) { // Looping through categories
        ui->Filter_comboBox_Admin->addItem(category); // Adding category to the admin filter combo box
    }
}

/**************************************************************************************/
void MainWindow::on_clear_Button_user_clicked() // Slot for clearing the book list widget for the user
{
    ui->bookListWidget->clear(); // Clearing the book list widget
}

void MainWindow::on_clear_Button_Admin_clicked() // Slot for clearing the admin book list widget
{
    ui->AdminBookListWidget->clear(); // Clearing the admin book list widget
}

void MainWindow::on_Exit_Button_admin_clicked() // Slot for handling the exit button click for the admin
{
    ui->Login_Wedgit->setCurrentIndex(0); // Setting the current index to return to the login page
}

void MainWindow::on_Exit_Button_user_clicked() // Slot for handling the exit button click for the user
{
    ui->Login_Wedgit->setCurrentIndex(0); // Setting the current index to return to the login page
}

void MainWindow::on_Remove_Button_Admin_clicked() { // Slot for handling the remove button click for the admin
    QString barcode = ui->lineEdit_Remove_Barcode_Admin->text(); // Getting the barcode from the line edit
    if (barcode.isEmpty()) { // If barcode is empty
        qInfo() << "barcode cannot be empty" << Qt::endl; // Logging error message
        return; // Returning without further processing
    }

    QFile file(FilePath2); // Creating QFile instance with file path
    if (!file.open(QIODevice::ReadOnly)) { // Opening file in read-only mode
        qInfo() << "Could not open book json file" << Qt::endl; // Logging error message
        return; // Returning without further processing
    }

    QByteArray data = file.readAll(); // Reading all data from the file
    QJsonDocument doc(QJsonDocument::fromJson(data)); // Creating JSON document from the read data
    QJsonArray booksArray = doc.array(); // Extracting JSON array from the document

    bool bookFound = false; // Flag to indicate if book is found
    for (int i = 0; i < booksArray.size(); ++i) { // Looping through books array
        QJsonObject bookObj = booksArray[i].toObject(); // Extracting JSON object for each book
        if (bookObj["barcode"].toString() == barcode) { // If barcode matches
            booksArray.removeAt(i); // Removing the book
            bookFound = true; // Setting book found flag
            break; // Exiting loop
        }
    }

    if (bookFound) { // If book is found and removed
        saveBooks(booksArray); // Saving the updated books array
        loadBooks(); // Reloading the books
        ui->lineEdit_Remove_Barcode_Admin->clear(); // Clearing the barcode line edit
        qInfo() << "Book removed successfully" << Qt::endl; // Logging success message
    } else {
        qInfo() << "Book not found" << Qt::endl; // Logging error message if book not found
    }
}


void MainWindow::on_Filter_comboBox_user_activated(int index) // Slot for handling user filter combo box activation
{

    QString selectedCategory = ui->Filter_comboBox_user->currentText(); // Getting the selected category
    qInfo() << selectedCategory << Qt::endl; // Logging the selected category

    if (selectedCategory.isEmpty()) { // If category is empty
        qInfo() << "Category cannot be empty" << Qt::endl; // Logging error message
        return; // Returning without further processing
    }
    ui->bookListWidget->clear(); // Clearing the book list widget

    /*----------------------------------------------------------------------------------**/
    QFile file(FilePath2); // Creating QFile instance with file path
    if (!file.open(QIODevice::ReadOnly)) { // Opening file in read-only mode
        qInfo()<<"Could not open book json file"<<Qt::endl; // Logging error message
        return; // Returning without further processing
    }

    QByteArray data = file.readAll(); // Reading all data from the file
    QJsonDocument doc(QJsonDocument::fromJson(data)); // Creating JSON document from the read data
    QJsonArray booksArray = doc.array(); // Extracting JSON array from the document
    /*----------------------------------------------------------------------------------------*/

    for (const QJsonValue &value : booksArray) { // Looping through books array
        QJsonObject bookObj = value.toObject(); // Extracting JSON object for each book
        if (bookObj["category"].toString() == selectedCategory) { // If category matches selected category
            // Retrieving book details
            QString title = bookObj["title"].toString();
            QString author = bookObj["author"].toString();
            QString category = bookObj["category"].toString();
            QString barcode = bookObj["barcode"].toString();

            // Constructing book details string
            QString bookDetails = QString("Title: %1, Author: %2, Category: %3, Barcode: %4")
                                      .arg(title)
                                      .arg(author)
                                      .arg(category)
                                      .arg(barcode);

            ui->bookListWidget->addItem(bookDetails); // Adding book details to book list widget
        }
    }
}

void MainWindow::on_Filter_comboBox_Admin_activated(int index) // Slot for handling admin filter combo box activation
{

    QString selectedCategory = ui->Filter_comboBox_Admin->currentText(); // Getting the selected category
    qInfo() << selectedCategory << Qt::endl; // Logging the selected category

    if (selectedCategory.isEmpty()) { // If category is empty
        qInfo() << "Category cannot be empty" << Qt::endl; // Logging error message
        return; // Returning without further processing
    }
    ui->AdminBookListWidget->clear(); // Clearing the admin book list widget

    /*----------------------------------------------------------------------------------**/
    QFile file(FilePath2); // Creating QFile instance with file path
    if (!file.open(QIODevice::ReadOnly)) { // Opening file in read-only mode
        qInfo()<<"Could not open book json file"<<Qt::endl; // Logging error message
        return; // Returning without further processing
    }

    QByteArray data = file.readAll(); // Reading all data from the file
    QJsonDocument doc(QJsonDocument::fromJson(data)); // Creating JSON document from the read data
    QJsonArray booksArray = doc.array(); // Extracting JSON array from the document
    /*----------------------------------------------------------------------------------------*/

    for (const QJsonValue &value : booksArray) { // Looping through books array
        QJsonObject bookObj = value.toObject(); // Extracting JSON object for each book
        if (bookObj["category"].toString() == selectedCategory) { // If category matches selected category
            // Retrieving book details
            QString title = bookObj["title"].toString();
            QString author = bookObj["author"].toString();
            QString category = bookObj["category"].toString();
            QString barcode = bookObj["barcode"].toString();

            // Constructing book details string
            QString bookDetails = QString("Title: %1, Author: %2, Category: %3, Barcode: %4")
                                      .arg(title)
                                      .arg(author)
                                      .arg(category)
                                      .arg(barcode);

            ui->AdminBookListWidget->addItem(bookDetails); // Adding book details to admin book list widget
        }

    }
}

void MainWindow::on_Start_WelcomeButton_clicked() // Slot for handling the start welcome button click
{
    ui->Login_Wedgit->setCurrentIndex(0); // Setting the current index to return to the login page
}


