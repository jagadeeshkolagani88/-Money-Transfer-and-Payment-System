💰 Money Transfer & Payment System
Abstract

This project is a C-based Money Transfer & Payment System that uses file handling to store and manage customer accounts and transactions.
The system allows users to create accounts, view balances, transfer money, make payments, check transaction history, and delete accounts using a binary data file.

Features
1. Create Account

Adds a new customer bank account.

Stores details such as Account Number, Name, Balance.

Saves data in accounts.dat.

2. View All Accounts

Displays all account details in a table.

Shows: Account Number, Name, Current Balance.

3. Search Account by Number

Searches the binary file for a specific bank account.

Displays full details if found.

4. Money Transfer

Transfers money from one account to another.

Validates account numbers and available balance.

Updates both accounts in the binary file.

5. Make Payment

Deducts payment amount from a customer's balance.

Used for bill payments, recharge, subscriptions, etc.

6. Delete Account

Removes an account using its Account Number.

Copies remaining accounts to a temporary file and replaces the original.

7. Exit

Closes the program.

How It Works

The program uses a struct Account to represent each bank account:

struct Account {
    int accNo;
    char name[50];
    float balance;
};


All account data is stored in binary form in accounts.dat using fwrite() and fread().

A menu-driven interface allows continuous usage until the user exits.

Running the Program
1. Compile the code
gcc money_transfer.c -o money

2. Run the executable:
./money

Files Used
accounts.dat

Stores all customer account records in binary format.

temp.dat

Used for safely deleting an account.

Output Photos
Main Menu

(Replace with your screenshot)
<img width="229" height="266" alt="Screenshot 2025-11-25 193142" src="https://github.com/user-attachments/assets/94e5c9d0-954a-4b29-b513-0d6530293e4e" />


Create Account
<img width="225" height="257" alt="Screenshot 2025-11-25 193206" src="https://github.com/user-attachments/assets/91db62fd-c9ed-4a17-a968-d23f512eff3e" />

View Accounts
<img width="368" height="243" alt="Screenshot 2025-11-25 193217" src="https://github.com/user-attachments/assets/7bf8d4f0-452e-4e9a-9b0a-9363372e8094" />

Search Account
<img width="255" height="261" alt="Screenshot 2025-11-25 193230" src="https://github.com/user-attachments/assets/34d40d54-8dfb-43a8-91cf-09d06dc9b027" />

Money Transfer
<img width="233" height="220" alt="Screenshot 2025-11-25 193314" src="https://github.com/user-attachments/assets/7cea1d3c-a3fe-4123-bab9-4fa8ee399ece" />

Make Payment
<img width="233" height="220" alt="Screenshot 2025-11-25 193314" src="https://github.com/user-attachments/assets/d3705a6a-32ea-4020-a325-0ee869080aec" />

Delete Account
<img width="387" height="219" alt="Screenshot 2025-11-25 193327" src="https://github.com/user-attachments/assets/67d3616b-c1a5-42df-a5f2-2305cac15802" />

Exit Account

<img width="386" height="181" alt="Screenshot 2025-11-25 193346" src="https://github.com/user-attachments/assets/f675b2dc-912e-4699-a582-27816fce7ab2" />

