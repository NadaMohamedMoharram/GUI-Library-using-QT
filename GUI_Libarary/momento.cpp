#include "momento.h"   // Include the header file for the Memento class

// Constructor definition for the Memento class
Memento::Memento(const QString &username, const QString &password)
    : username(username), password(password) {}

// Method definition to get the username
QString Memento::getUsername() const {
    return username;
}

// Method definition to get the password
QString Memento::getPassword() const {
    return password;
}
