ATM Management System
----------------------

Overview

This ATM Management System is built using C++ and demonstrates the use of Object-Oriented Programming (OOP) principles to simulate the core functionalities of an ATM. The system includes user registration, login, balance checking, withdrawal, deposit, PIN change, and a forgot PIN recovery feature.

This project simulates an ATM interface where users can interact with the system using their ATM ID (username) and PIN.

-----------------------------------------------------------------------------------------------------------------------

Note: This is our 1st project in the 2nd semester, developed by two members: Shivam Kumar and Tannu Priya.

-----------------------------------------------------------------------
Features

User Authentication: Secure login with ATM ID (username) and PIN.
Balance Inquiry: View available balance in the account.
Cash Withdrawal: Withdraw funds with balance verification.
Deposit Funds: Deposit money into the account.
Change PIN: Update your account PIN for security.
Forgot PIN: Retrieve your PIN by entering your ATM ID (username).
Registration: Create a new ATM account with initial balance and details.

---------------------------------------------------------------------
Technologies Used

Language: C++
Libraries: iostream, fstream, stdlib.h, Windows.h
Concepts: Object-Oriented Programming (OOP), File Handling

---------------------------------------------------------------------
How to Run the Project

Clone the Repository:
You can clone the repository to your local machine using:
git clone 
Compile the Code:


-----------------------------------------------------------
File Structure

ATM-Management-System/
├── atm_system.cpp          # Main program and ATM logic
├── README.md               # Project documentation
└── LICENSE                 # License file (if any)

------------------------------------------------------------
Code Structure

1. LoginPage Class
Handles user login, registration, PIN changes, and forgot PIN functionalities.
The class interacts with text files to store and retrieve user data.
2. Functions
login(): Allows the user to log in using their ATM ID and PIN.
registr(): Registers a new user and creates an account.
forgot(): Helps the user retrieve their PIN if they forget it.

---------------------------------------------------------------
Sample Code

Here’s a brief look at how the login() function works:

void login() {
    int count = 0, ch, bal, withd, dep;
    string user, pass, u, p, nF, dir;
    system("cls");
    cout << "Please enter the following details\n";
    cout << "ATM ID (or) USERNAME: ";
    cin >> user;
    cout << "\nEnter PIN: ";
    cin >> pass;

    ifstream input;
    dir = user + ".txt";
    input.open(dir.c_str());

    while (input >> u >> p >> nF >> bal) {
        if (u == user && p == pass) {
            count = 1;
            system("cls");
        }
    }
    input.close();

    if (count == 1) {
        cout << "\n\nPlease wait.....";
        Sleep(3000);
        system("cls");
        cout << "\nHello " << nF << " ATM Id: " << user << endl;
        // Additional options like withdrawal, deposit, view balance, etc.
    } else {
        cout << "\nLOGIN ERROR\nPlease check your ATM ID (or) username and PIN\n";
    }
}

-------------------------------------------------------------------------------------
How the ATM System Works

Login: The user is asked to enter their ATM ID (username) and PIN. Upon successful login, the user is presented with various options like withdrawal, deposit, balance inquiry, and PIN change.
Registration: If the user does not have an ATM account, they can register by providing a username, PIN, first name, last name, and initial balance.
Forgot PIN: If the user forgets their PIN, they can search for it using their ATM ID (username). If the account is found, the system displays the PIN.

------------------------------------------------------------------------------------------


Example Run

Welcome Screen
-----------------------------------------------------------------------------------------------
       |-- WELCOME TO OUR ATM MANAGEMENT SYSTEM --|
-----------------------------------------------------------------------------------------------
This Program is created by SHIVAM KUMAR & TANNU PRIYA.
-----------------------------------------------------------------------------------------------
*******************        MENU        *******************************
1.LOGIN (Through ATM ID)
2.REGISTER YOUR ATM CARD (For First Time Only)
3.FORGOT PIN
4.Exit
Enter your choice:
After Login
Hello John! ATM Id: user123

             LOGIN SUCCESS

1. Withdrawal
2. Deposit
3. View Balance
4. Change Pin
5. Exit

Enter Your Choice: 

-----------------------------------------------------------------------

Acknowledgments

Shivam Kumar & Tannu Priya for building and maintaining this project.
This project was inspired by real-world ATM systems to simulate banking operations.
Issues and Feedback


