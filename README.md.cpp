# C++ LoginandRegistration System

## Description

This C++ project is a simple login system that allows users to log in, register, and retrieve their password if forgotten. The system uses a text file (`records.txt`) to store user credentials.

## Features

- **Login**: Allows existing users to log in using their username and password.
- **Registration**: Allows new users to register by creating a new username and password.
- **Forgot Password**: Allows users to retrieve their password by entering their username.

## Files

- `register.cpp`: The main source code file containing the login system implementation.
- `records.txt`: The file where user credentials are stored. (This file is created and updated by the program.)

## Compilation and Execution

1. **Compile** the program using a C++ compiler. You can use `g++` for this purpose:
   ```bash
   g++ register.cpp -o login_system

