#include "mainwindow.h"    // Include the main window header file

#include <QApplication>    // Include the QApplication class for the Qt application

// Main function: entry point of the application
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);    // Create a QApplication object to manage application-wide resources

    MainWindow w;                  // Create a MainWindow object, which is the main GUI window
    w.show();                      // Show the main window

    return a.exec();               // Enter the main event loop and wait for user interactions
}
