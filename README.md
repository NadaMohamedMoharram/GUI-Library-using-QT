# Library Management System
![image](https://github.com/NadaMohamedMoharram/GUI-Library-using-QT/assets/120272090/8643dd32-97b8-4151-8669-5233ff7c79b1)

## Overview

This Library Management System allows users to manage a collection of books. It supports adding, searching, filtering, and removing books. The system has two types of users: Admin and User. Admins have full access, while Users can only search and filter books.

## Features

- **Admin Capabilities:**
  - Add new books
  - Remove books
  - Search for specific books by title
  - Filter books by category
- **User Capabilities:**
  - Search for specific books by title
  - Filter books by category

## Book Information

Each book in the system has the following details:
- Title
- Author
- Category
- Barcode

## User Management

The system supports two types of users, stored in a SQLite database:
- Admin (username: `admin`, password: `adminpass`)
- User (username: `user`, password: `userpass`)

## Memento Pattern
The system uses the Memento design pattern to save and restore the last logged-in user's credentials.

## JSON Database
Books are stored in a JSON file (book_db.json), making it easy to manage and update the collection.

## Usage
- **Login:**
  - Enter your username and password to login.
  - Admins can add, search, filter, and remove books.
  - Users can only search and filter books.

- **Add a New Book (Admin Only):**
  - Enter the book's title, author, category, and barcode.

- **Remove a Book (Admin Only):**
  - Enter the title of the book to remove it from the collection.

- **Search for a Book:**
  - Enter the title of the book to search for it in the collection.

- **Filter by Category:**
  - Enter the category to filter and view books in that category.

## Installation

1. Clone the repository:
   ```sh
   git clone <repository_url>
   cd LibraryManagementSystem
