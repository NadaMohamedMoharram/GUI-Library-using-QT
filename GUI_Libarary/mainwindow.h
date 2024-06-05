
#ifndef MAINWINDOW_H        // Include guard to prevent multiple inclusions
#define MAINWINDOW_H

#include <QMainWindow>      // Base class for creating main window applications
#include "momento.h"        // Custom class for saving and restoring states
#include <QObject>          // Base class for all Qt objects
#include<QJsonObject>       // Class for handling JSON objects
#include<QJsonArray>        // Class for handling JSON arrays
#include<QJsonDocument>     // Class for handling JSON documents
#include<QFile>             // Class for file handling
#include<QVector>           // Class for dynamic array handling
#include<QDebug>            // Class for debugging output

QT_BEGIN_NAMESPACE
namespace Ui {              // Begin Qt namespace for UI elements
class MainWindow;           // Forward declaration of MainWindow class
}
QT_END_NAMESPACE

// MainWindow class declaration inheriting from QMainWindow
class MainWindow : public QMainWindow
{
    Q_OBJECT                // Macro enabling Qt's meta-object features

public:
    MainWindow(QWidget *parent = nullptr); // Constructor with optional parent widget
    ~MainWindow();                         // Destructor
    void saveBooks(const QJsonArray &booksArray); // Method to save books
    void loadBooks();                            // Method to load books

private slots:           // Slots section for handling events

    void on_Login_Button_clicked();     // Slot for login button click
    void on_Store_Button_clicked();     // Slot for store button click
    void on_Restore_Button_clicked();   // Slot for restore button click
    void on_Remove_Button_clicked();    // Slot for remove button click
    void on_search_Button_clicked();    // Slot for search button click (user)
    void on_search_Button_Admin_clicked(); // Slot for search button click (admin)
    void on_Add_Button_Admin_clicked(); // Slot for add button click (admin)
    void on_clear_Button_user_clicked();// Slot for clear button click (user)
    void on_clear_Button_Admin_clicked(); // Slot for clear button click (admin)
    void on_Exit_Button_admin_clicked();// Slot for exit button click (admin)
    void on_Exit_Button_user_clicked(); // Slot for exit button click (user)
    void on_Remove_Button_Admin_clicked(); // Slot for remove button click (admin)
    void on_Filter_comboBox_user_activated(int index); // Slot for filter combobox activation (user)
    void on_Filter_comboBox_Admin_activated(int index); // Slot for filter combobox activation (admin)
    void on_Start_WelcomeButton_clicked(); // Slot for start welcome button click

private:
    Ui::MainWindow *ui;        // Pointer to UI elements
    QVector<Memento> savedStates; // Vector to store saved states (mementos)
    QJsonArray books;            // JSON array to store books
};

#endif // MAINWINDOW_H     // End of include guard
