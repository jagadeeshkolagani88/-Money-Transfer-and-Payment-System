Abstract

This project is a C-based Money Transfer and Payment System that uses file handling to store and manage customer account records. The system allows users to add accounts, view accounts, search accounts, update balances, transfer money, and delete accounts using a binary data file.

Features
1. Add Account

Adds a new customer account to the system.

Stores details such as Account Number, Name, and Balance.

Saves data in accounts.dat.

2. Display Accounts

Shows all stored accounts in a tabular format.

Reads from the binary file and displays: Account Number, Name, Balance.

3. Search Account by Account Number

Searches the binary file for a specific account using its Account Number.

Displays full account details if found.

4. Update Balance (Deposit / Withdraw)

Allows modifying the balance of an existing account.

Locates the account in the file and updates its record.

5. Transfer Money

Transfers a specified amount from one account to another.

Ensures sufficient balance before transferring.

Updates both records in the file.

6. Delete Account

Deletes an account using the Account Number.

Copies remaining accounts into a temporary file and replaces the original.

7. Exit

Closes the program.

How It Works

The program uses a struct Account to represent each customer record:

struct Account { 
    int accNo; 
    char name[50]; 
    float balance; 
};


Accounts are stored in a binary file (accounts.dat) using the fwrite() and fread() functions.

The menu-driven interface allows continuous interaction until the user chooses to exit.

Running the Program
1. Compile the code


Use any C compiler (e.g., GCC):

gcc moneytransfer.c -o moneytransfer

2. Run the executable
./moneytransfer

Files Used
accounts.dat

Stores all customer account records in binary form.

temp.dat

Temporary file used during record deletion.

Output Photos

1. create new account

<img width="229" height="266" alt="Screenshot 2025-11-25 193142" src="https://github.com/user-attachments/assets/772dd165-849d-4b42-84cc-d8c52c17c1e6" />

<img width="225" height="257" alt="Screenshot 2025-11-25 193206" src="https://github.com/user-attachments/assets/df1e4662-4f47-4778-99ea-c41dd293a7fe" />


2. vewi all accounts 

<img width="368" height="243" alt="Screenshot 2025-11-25 193217" src="https://github.com/user-attachments/assets/10bf45e4-e030-44d2-b817-4a7507305176" />



3. Search Account 

<img width="255" height="261" alt="Screenshot 2025-11-25 193230" src="https://github.com/user-attachments/assets/e10de15d-cdb2-4355-bc0d-c67954dd0891" />


4. deposit money 

<img width="232" height="211" alt="Screenshot 2025-11-25 193244" src="https://github.com/user-attachments/assets/7221b2fd-4873-4fa6-b92d-1e3488e64c97" />


5. withdraw money

   <img width="225" height="208" alt="Screenshot 2025-11-25 193259" src="https://github.com/user-attachments/assets/b6ed7c7a-eea8-420c-acb5-a99b436e2d90" />


6. Transfer Money

<img width="233" height="220" alt="Screenshot 2025-11-25 193314" src="https://github.com/user-attachments/assets/05e1c0a1-6af6-41d8-868c-4996125c58cf" />


7. Delete Account

<img width="387" height="219" alt="Screenshot 2025-11-25 193327" src="https://github.com/user-attachments/assets/3d330526-8556-4254-90a7-7f66cab28092" />


8. exit

<img width="386" height="181" alt="Screenshot 2025-11-25 193346" src="https://github.com/user-attachments/assets/39f3a892-a64a-4243-8735-b2dd44475902" />
   
