Login and Registration System in C++
This is a simple C++ Login and Registration System that allows users to register with a username and password, and later log in using those credentials. It uses basic file handling to store and retrieve user data.

Features
User Registration:
1. Stores the username and password in a .txt file inside a user/ directory.
2. Automatically creates a new file for each registered user.

User Login:
1. Reads and verifies credentials from the respective user's file.
2. Grants access if username and password match.

Menu-driven Interface:
Console-based user-friendly interaction loop with choices:
1 → Register
2 → Login
3 → Exit

How It Works
When registering, the program:
Prompts for a username and password.
Saves the credentials in a file named username.txt under the user/ folder.

When logging in:
It reads the stored file for the entered username.
Checks if the password matches.
The system will continue running in a loop until the user chooses to exit.

