#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int accNo;
    char name[50];
    float balance;
} Account;

Account acc[MAX];
int count = 0;

// Find account index
int find(int no) {
    for (int i = 0; i < count; i++)
        if (acc[i].accNo == no)
            return i;
    return -1;
}

void createAccount() {
    int no;
    printf("Enter Account Number: ");
    scanf("%d", &no);

    if (find(no) != -1) {
        printf("Account already exists!\n");
        return;
    }

    acc[count].accNo = no;

    printf("Enter Name: ");
    scanf(" %[^\n]", acc[count].name);

    printf("Enter Initial Balance: ");
    scanf("%f", &acc[count].balance);

    count++;
    printf("Account Created!\n");
}

void viewAccounts() {
    printf("\nAccNo   Name                Balance\n");
    printf("--------------------------------------\n");

    for (int i = 0; i < count; i++)
        printf("%d   %-20s %.2f\n",
               acc[i].accNo, acc[i].name, acc[i].balance);
}

void deposit() {
    int no, idx;
    float amt;

    printf("Enter Account Number: ");
    scanf("%d", &no);

    idx = find(no);
    if (idx == -1) { printf("Account not found!\n"); return; }

    printf("Enter Amount: ");
    scanf("%f", &amt);

    acc[idx].balance += amt;
    printf("Deposit Successful!\n");
}

void withdraw() {
    int no, idx;
    float amt;

    printf("Enter Account Number: ");
    scanf("%d", &no);

    idx = find(no);
    if (idx == -1) { printf("Account not found!\n"); return; }

    printf("Amount to withdraw: ");
    scanf("%f", &amt);

    if (acc[idx].balance < amt) {
        printf("Insufficient balance!\n");
        return;
    }

    acc[idx].balance -= amt;
    printf("Withdrawal Successful!\n");
}

void transfer() {
    int from, to, iFrom, iTo;
    float amt;

    printf("Sender Acc No: ");
    scanf("%d", &from);
    printf("Receiver Acc No: ");
    scanf("%d", &to);

    iFrom = find(from);
    iTo = find(to);

    if (iFrom == -1 || iTo == -1) {
        printf("One account not found!\n");
        return;
    }

    printf("Enter Amount: ");
    scanf("%f", &amt);

    if (acc[iFrom].balance < amt) {
        printf("Not enough balance!\n");
        return;
    }

    acc[iFrom].balance -= amt;
    acc[iTo].balance += amt;

    printf("Transfer Successful!\n");
}

int main() {
    int ch;

    do {
        printf("\n==== MONEY SYSTEM (ARRAY VERSION) ====\n");
        printf("1. Create Account\n");
        printf("2. View Accounts\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Transfer\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: createAccount(); break;
            case 2: viewAccounts(); break;
            case 3: deposit(); break;
            case 4: withdraw(); break;
            case 5: transfer(); break;
            case 6: printf("Goodbye!\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (ch != 6);

    return 0;
}
