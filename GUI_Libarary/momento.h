#ifndef MOMENTO_H        // Include guard to prevent multiple inclusions
#define MOMENTO_H

#include <QString>       // Include QString class for string handling

// Memento class declaration
class Memento
{
public:
    // Constructor to initialize Memento with username and password
    Memento(const QString &username, const QString &password);

    // Getter method to retrieve the username
    QString getUsername() const;

    // Getter method to retrieve the password
    QString getPassword() const;

private:
    // Private member variables to store username and password
    QString username;
    QString password;
};

#endif // MOMENTO_H      // End of include guard
