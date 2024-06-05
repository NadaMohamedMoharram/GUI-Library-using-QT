# Library Management System

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
-The system uses the Memento design pattern to save and restore the last logged-in user's credentials.

## JSON Database
Books are stored in a JSON file (book_db.json), making it easy to manage and update the collection.

## Installation

1. Clone the repository:
   ```sh
   git clone <repository_url>
   cd LibraryManagementSystem
