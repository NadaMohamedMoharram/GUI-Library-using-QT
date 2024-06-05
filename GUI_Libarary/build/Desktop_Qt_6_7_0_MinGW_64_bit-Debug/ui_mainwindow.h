/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QGroupBox *Library;
    QTabWidget *Login_Wedgit;
    QWidget *Login;
    QPushButton *Login_Button;
    QLineEdit *lineEdit_username;
    QLabel *label_username;
    QLabel *label_password;
    QLineEdit *lineEdit_password;
    QPushButton *Store_Button;
    QPushButton *Restore_Button;
    QPushButton *Remove_Button;
    QLabel *label_Login;
    QListWidget *listWidget_login;
    QWidget *Admin;
    QPushButton *search_Button_Admin;
    QLineEdit *lineEdit_Title_Admin;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_Category_Admin;
    QLineEdit *lineEdit_Ticket_Admin;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_Auther_Admin;
    QLineEdit *lineEdit_Barcode_Admin;
    QLabel *label_10;
    QPushButton *Add_Button_Admin;
    QLabel *label_11;
    QPushButton *Remove_Button_Admin;
    QLineEdit *lineEdit_Remove_Barcode_Admin;
    QPushButton *Exit_Button_admin;
    QComboBox *Filter_comboBox_Admin;
    QLabel *label_5;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *AdminBookListWidget;
    QPushButton *clear_Button_Admin;
    QWidget *User;
    QLabel *label;
    QLineEdit *lineEdit_Title;
    QPushButton *search_Button;
    QPushButton *Exit_Button_user;
    QLabel *label_2;
    QComboBox *Filter_comboBox_user;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QListWidget *bookListWidget;
    QPushButton *clear_Button_user;
    QWidget *tab;
    QLabel *label_image1;
    QLabel *label_19;
    QLabel *label_20;
    QPushButton *Start_WelcomeButton;
    QLabel *label_21;
    QLabel *label_22;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(626, 565);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        Library = new QGroupBox(centralwidget);
        Library->setObjectName("Library");
        Library->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 193, 7, 255), stop:1 rgba(255, 255, 255, 255));"));
        Login_Wedgit = new QTabWidget(Library);
        Login_Wedgit->setObjectName("Login_Wedgit");
        Login_Wedgit->setGeometry(QRect(30, 40, 551, 431));
        Login_Wedgit->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(0, 0, 47, 255), stop:1 rgba(255, 255, 255, 255));"));
        Login = new QWidget();
        Login->setObjectName("Login");
        Login_Button = new QPushButton(Login);
        Login_Button->setObjectName("Login_Button");
        Login_Button->setGeometry(QRect(30, 100, 481, 31));
        Login_Button->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"font: 16pt \"Segoe MDL2 Assets\";\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_username = new QLineEdit(Login);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(170, 20, 191, 24));
        lineEdit_username->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_username = new QLabel(Login);
        label_username->setObjectName("label_username");
        label_username->setGeometry(QRect(20, 20, 141, 20));
        label_username->setStyleSheet(QString::fromUtf8("font: 900 italic 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_password = new QLabel(Login);
        label_password->setObjectName("label_password");
        label_password->setGeometry(QRect(20, 50, 131, 20));
        label_password->setStyleSheet(QString::fromUtf8("font: 900 italic 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_password = new QLineEdit(Login);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(170, 50, 191, 24));
        lineEdit_password->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        Store_Button = new QPushButton(Login);
        Store_Button->setObjectName("Store_Button");
        Store_Button->setGeometry(QRect(30, 160, 481, 31));
        Store_Button->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.335196 rgba(255, 135, 16, 255), stop:0.815642 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"font: 700 13pt \"Segoe UI\";"));
        Restore_Button = new QPushButton(Login);
        Restore_Button->setObjectName("Restore_Button");
        Restore_Button->setGeometry(QRect(30, 200, 481, 31));
        Restore_Button->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.335196 rgba(255, 135, 16, 255), stop:0.815642 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"font: 700 13pt \"Segoe UI\";"));
        Remove_Button = new QPushButton(Login);
        Remove_Button->setObjectName("Remove_Button");
        Remove_Button->setGeometry(QRect(30, 240, 481, 31));
        Remove_Button->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.335196 rgba(255, 135, 16, 255), stop:0.815642 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"font: 700 13pt \"Segoe UI\";"));
        label_Login = new QLabel(Login);
        label_Login->setObjectName("label_Login");
        label_Login->setGeometry(QRect(20, 280, 181, 111));
        listWidget_login = new QListWidget(Login);
        listWidget_login->setObjectName("listWidget_login");
        listWidget_login->setGeometry(QRect(260, 280, 251, 111));
        listWidget_login->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        Login_Wedgit->addTab(Login, QString());
        Admin = new QWidget();
        Admin->setObjectName("Admin");
        search_Button_Admin = new QPushButton(Admin);
        search_Button_Admin->setObjectName("search_Button_Admin");
        search_Button_Admin->setGeometry(QRect(20, 70, 211, 24));
        search_Button_Admin->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"font: 16pt \"Segoe MDL2 Assets\";\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_Title_Admin = new QLineEdit(Admin);
        lineEdit_Title_Admin->setObjectName("lineEdit_Title_Admin");
        lineEdit_Title_Admin->setGeometry(QRect(110, 10, 113, 24));
        lineEdit_Title_Admin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_6 = new QLabel(Admin);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 91, 16));
        label_6->setStyleSheet(QString::fromUtf8("font: 900 italic 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_7 = new QLabel(Admin);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(20, 150, 121, 20));
        label_7->setStyleSheet(QString::fromUtf8("font: 900 italic 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_Category_Admin = new QLineEdit(Admin);
        lineEdit_Category_Admin->setObjectName("lineEdit_Category_Admin");
        lineEdit_Category_Admin->setGeometry(QRect(120, 150, 113, 24));
        lineEdit_Category_Admin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        lineEdit_Ticket_Admin = new QLineEdit(Admin);
        lineEdit_Ticket_Admin->setObjectName("lineEdit_Ticket_Admin");
        lineEdit_Ticket_Admin->setGeometry(QRect(120, 120, 113, 24));
        lineEdit_Ticket_Admin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_8 = new QLabel(Admin);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(20, 120, 81, 16));
        label_8->setStyleSheet(QString::fromUtf8("font: 900 italic 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_9 = new QLabel(Admin);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, 210, 81, 16));
        label_9->setStyleSheet(QString::fromUtf8("font: 900 italic 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_Auther_Admin = new QLineEdit(Admin);
        lineEdit_Auther_Admin->setObjectName("lineEdit_Auther_Admin");
        lineEdit_Auther_Admin->setGeometry(QRect(120, 210, 113, 24));
        lineEdit_Auther_Admin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        lineEdit_Barcode_Admin = new QLineEdit(Admin);
        lineEdit_Barcode_Admin->setObjectName("lineEdit_Barcode_Admin");
        lineEdit_Barcode_Admin->setGeometry(QRect(120, 180, 113, 24));
        lineEdit_Barcode_Admin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_10 = new QLabel(Admin);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 180, 101, 16));
        label_10->setStyleSheet(QString::fromUtf8("font: 900 italic 10pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        Add_Button_Admin = new QPushButton(Admin);
        Add_Button_Admin->setObjectName("Add_Button_Admin");
        Add_Button_Admin->setGeometry(QRect(20, 240, 211, 24));
        Add_Button_Admin->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"font: 16pt \"Segoe MDL2 Assets\";\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        label_11 = new QLabel(Admin);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 330, 111, 16));
        label_11->setStyleSheet(QString::fromUtf8("font: 900 italic 11pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        Remove_Button_Admin = new QPushButton(Admin);
        Remove_Button_Admin->setObjectName("Remove_Button_Admin");
        Remove_Button_Admin->setGeometry(QRect(20, 360, 211, 24));
        Remove_Button_Admin->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"font: 16pt \"Segoe MDL2 Assets\";\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_Remove_Barcode_Admin = new QLineEdit(Admin);
        lineEdit_Remove_Barcode_Admin->setObjectName("lineEdit_Remove_Barcode_Admin");
        lineEdit_Remove_Barcode_Admin->setGeometry(QRect(130, 330, 101, 24));
        lineEdit_Remove_Barcode_Admin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        Exit_Button_admin = new QPushButton(Admin);
        Exit_Button_admin->setObjectName("Exit_Button_admin");
        Exit_Button_admin->setGeometry(QRect(440, 370, 80, 24));
        Exit_Button_admin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.335196 rgba(255, 135, 16, 255), stop:0.815642 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"font: 700 11pt \"Segoe UI\";"));
        Filter_comboBox_Admin = new QComboBox(Admin);
        Filter_comboBox_Admin->setObjectName("Filter_comboBox_Admin");
        Filter_comboBox_Admin->setGeometry(QRect(110, 40, 111, 24));
        Filter_comboBox_Admin->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        Filter_comboBox_Admin->setEditable(false);
        label_5 = new QLabel(Admin);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 40, 91, 16));
        label_5->setStyleSheet(QString::fromUtf8("font: 900 italic 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(Admin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(248, 22, 271, 331));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        AdminBookListWidget = new QListWidget(layoutWidget);
        AdminBookListWidget->setObjectName("AdminBookListWidget");
        AdminBookListWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));

        verticalLayout->addWidget(AdminBookListWidget);

        clear_Button_Admin = new QPushButton(layoutWidget);
        clear_Button_Admin->setObjectName("clear_Button_Admin");
        clear_Button_Admin->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(clear_Button_Admin);

        Login_Wedgit->addTab(Admin, QString());
        User = new QWidget();
        User->setObjectName("User");
        label = new QLabel(User);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 111, 16));
        label->setStyleSheet(QString::fromUtf8("font: 900 italic 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        lineEdit_Title = new QLineEdit(User);
        lineEdit_Title->setObjectName("lineEdit_Title");
        lineEdit_Title->setGeometry(QRect(140, 30, 241, 31));
        lineEdit_Title->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        search_Button = new QPushButton(User);
        search_Button->setObjectName("search_Button");
        search_Button->setGeometry(QRect(140, 110, 251, 24));
        search_Button->setStyleSheet(QString::fromUtf8("background-color: qradialgradient(spread:pad, cx:0.5, cy:0.5, radius:0.5, fx:0.5, fy:0.5, stop:0 rgba(0, 0, 0, 0), stop:0.52 rgba(0, 0, 0, 0), stop:0.565 rgba(82, 121, 76, 33), stop:0.65 rgba(159, 235, 148, 64), stop:0.721925 rgba(255, 238, 150, 129), stop:0.77 rgba(255, 128, 128, 204), stop:0.89 rgba(191, 128, 255, 64), stop:1 rgba(0, 0, 0, 0));\n"
"font: 16pt \"Segoe MDL2 Assets\";\n"
"font: 700 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        Exit_Button_user = new QPushButton(User);
        Exit_Button_user->setObjectName("Exit_Button_user");
        Exit_Button_user->setGeometry(QRect(469, 363, 61, 31));
        Exit_Button_user->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0.335196 rgba(255, 135, 16, 255), stop:0.815642 rgba(235, 148, 61, 255), stop:0.98 rgba(0, 0, 0, 255), stop:1 rgba(0, 0, 0, 0));\n"
"font: 700 11pt \"Segoe UI\";"));
        label_2 = new QLabel(User);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 70, 91, 16));
        label_2->setStyleSheet(QString::fromUtf8("font: 900 italic 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));
        Filter_comboBox_user = new QComboBox(User);
        Filter_comboBox_user->setObjectName("Filter_comboBox_user");
        Filter_comboBox_user->setGeometry(QRect(140, 70, 241, 31));
        Filter_comboBox_user->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        Filter_comboBox_user->setEditable(false);
        layoutWidget1 = new QWidget(User);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(36, 141, 491, 211));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        bookListWidget = new QListWidget(layoutWidget1);
        bookListWidget->setObjectName("bookListWidget");
        bookListWidget->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));

        verticalLayout_2->addWidget(bookListWidget);

        clear_Button_user = new QPushButton(layoutWidget1);
        clear_Button_user->setObjectName("clear_Button_user");
        clear_Button_user->setStyleSheet(QString::fromUtf8("font: 900 12pt \"Segoe UI\";\n"
"color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(clear_Button_user);

        Login_Wedgit->addTab(User, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        label_image1 = new QLabel(tab);
        label_image1->setObjectName("label_image1");
        label_image1->setGeometry(QRect(0, 0, 361, 401));
        label_image1->setPixmap(QPixmap(QString::fromUtf8("../Wordpress-Guides-Subject-600x628-1.png")));
        label_image1->setScaledContents(true);
        label_19 = new QLabel(tab);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(370, 0, 121, 71));
        label_19->setStyleSheet(QString::fromUtf8("font: 700 25pt \"Segoe Script\";\n"
"color: rgb(255, 180, 0);"));
        label_20 = new QLabel(tab);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(400, 50, 141, 71));
        label_20->setStyleSheet(QString::fromUtf8("font: 700 25pt \"Segoe Script\";\n"
"color: rgb(255, 180, 0);"));
        Start_WelcomeButton = new QPushButton(tab);
        Start_WelcomeButton->setObjectName("Start_WelcomeButton");
        Start_WelcomeButton->setGeometry(QRect(390, 220, 131, 51));
        Start_WelcomeButton->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:1, y1:1, x2:1, y2:1, stop:0 rgba(255, 255, 255, 255), stop:1 rgba(255, 255, 255, 255));\n"
"color: rgb(255, 170, 0);\n"
"font: 900 italic 20pt \"Segoe UI\";\n"
"border-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(255, 170, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_21 = new QLabel(tab);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(370, 100, 141, 71));
        label_21->setStyleSheet(QString::fromUtf8("font: 700 25pt \"Segoe Script\";\n"
"color: rgb(255, 180, 0);"));
        label_22 = new QLabel(tab);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(370, 370, 101, 31));
        label_22->setStyleSheet(QString::fromUtf8("font: 700 16pt \"Segoe Script\";\n"
"color: rgb(255, 180, 0);"));
        Login_Wedgit->addTab(tab, QString());

        gridLayout->addWidget(Library, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 626, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Login_Wedgit->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Library->setTitle(QCoreApplication::translate("MainWindow", "Library", nullptr));
        Login_Button->setText(QCoreApplication::translate("MainWindow", "Login ", nullptr));
        label_username->setText(QCoreApplication::translate("MainWindow", "Enter username:", nullptr));
        label_password->setText(QCoreApplication::translate("MainWindow", "Enter password:", nullptr));
        Store_Button->setText(QCoreApplication::translate("MainWindow", "Store", nullptr));
        Restore_Button->setText(QCoreApplication::translate("MainWindow", "Restore", nullptr));
        Remove_Button->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        label_Login->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        Login_Wedgit->setTabText(Login_Wedgit->indexOf(Login), QCoreApplication::translate("MainWindow", "Login", nullptr));
        search_Button_Admin->setText(QCoreApplication::translate("MainWindow", "search", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Enter title", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Enter Category", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Enter Title", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Enter Auther", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Enter Barecode", nullptr));
        Add_Button_Admin->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Enter Barecode", nullptr));
        Remove_Button_Admin->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        Exit_Button_admin->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        Filter_comboBox_Admin->setCurrentText(QString());
        Filter_comboBox_Admin->setProperty("bb", QVariant(QString()));
        Filter_comboBox_Admin->setProperty("mm", QVariant(QString()));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter Filter", nullptr));
        clear_Button_Admin->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Login_Wedgit->setTabText(Login_Wedgit->indexOf(Admin), QCoreApplication::translate("MainWindow", "Admin", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Enter title", nullptr));
        search_Button->setText(QCoreApplication::translate("MainWindow", "search", nullptr));
        Exit_Button_user->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Enter Filter", nullptr));
        Filter_comboBox_user->setCurrentText(QString());
        Filter_comboBox_user->setProperty("bb", QVariant(QString()));
        Filter_comboBox_user->setProperty("mm", QVariant(QString()));
        clear_Button_user->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        Login_Wedgit->setTabText(Login_Wedgit->indexOf(User), QCoreApplication::translate("MainWindow", "User", nullptr));
        label_image1->setText(QString());
        label_19->setText(QCoreApplication::translate("MainWindow", "ITIDA", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "Library", nullptr));
        Start_WelcomeButton->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "System", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "By/Nada", nullptr));
        Login_Wedgit->setTabText(Login_Wedgit->indexOf(tab), QCoreApplication::translate("MainWindow", "Welcome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
