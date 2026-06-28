#include <stdio.h>
#include <string.h>

struct BankAccount {
    int account_number;
    char name[50];
    float balance;
};

int main() {
    struct BankAccount account;
    int is_created = 0;
    int choice;
    float amount;

    do {
        printf("\n--- Bank Account System ---\n");
        printf("1. Create New Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (is_created == 0) {
                    printf("Enter Account Number: ");
                    scanf("%d", &account.account_number);
                    printf("Enter Account Holder Name: ");
                    scanf(" %[^\n]s", account.name);
                    printf("Enter Initial Deposit Amount: ");
                    scanf("%f", &account.balance);
                    is_created = 1;
                    printf("Account created successfully!\n");
                } else {
                    printf("Account already exists!\n");
                }
                break;

            case 2:
                if (is_created == 1) {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    if (amount > 0) {
                        account.balance += amount;
                        printf("$%.2f deposited successfully.\n", amount);
                    } else {
                        printf("Invalid amount.\n");
                    }
                } else {
                    printf("Please create an account first!\n");
                }
                break;

            case 3:
                if (is_created == 1) {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    if (amount > account.balance) {
                        printf("Insufficient balance!\n");
                    } else if (amount > 0) {
                        account.balance -= amount;
                        printf("$%.2f withdrawn successfully.\n", amount);
                    } else {
                        printf("Invalid amount.\n");
                    }
                } else {
                    printf("Please create an account first!\n");
                }
                break;

            case 4:
                if (is_created == 1) {
                    printf("\n--- Account Details ---\n");
                    printf("Account Number: %d\n", account.account_number);
                    printf("Account Holder: %s\n", account.name);
                    printf("Current Balance: $%.2f\n", account.balance);
                } else {
                    printf("No active account found. Please create one.\n");
                }
                break;

            case 5:
                printf("Thank you for using our banking system. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}