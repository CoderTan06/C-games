//Simple ATM simulation - TS
#include <stdio.h>

int main() {
    char atmName[50];
    char atmUsername[50];
    char accountID[50];
    char choice;
    int balance = 0;
    int pin = 0;
    int accountExists = 0; // 0 = no account, 1 = account exists

    printf("Welcome to the ATM Simulation Center!\n");
    printf("Please enter the ATM name: ");
    scanf("%s", atmName);

    printf("Please enter your username: ");
    scanf("%s", atmUsername);

    printf("Please enter your PIN: ");
    scanf("%d", &pin);

    printf("Thank you, %s! You have successfully logged in to the %s ATM.\n", atmUsername, atmName);
    printf("\n");

    printf("ATM CENTRE RULES!\n");
    printf("1. Please do not share your PIN with anyone.\n");
    printf("2. Deposits above 10,000 will make the ATM suspicious.\n");
    printf("3. If you try to withdraw more than you have, the ATM will judge you silently.\n");
    printf("4. You can logout at any time by selecting the logout option.\n\n");

    printf("MENU \n");
    printf("[C] Create Account \n");
    printf("[D] Delete Account \n");
    printf("[B] Check Balance \n");
    printf("[P] Deposit Money \n");
    printf("[W] Withdraw Money \n");
    printf("[E] Exit ATM \n\n");

    while (1) {
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch (choice) {

            // CREATE ACCOUNT
            case 'C':
            case 'c':
                if (accountExists == 1) {
                    printf("An account already exists! Delete it first.\n");
                } else {
                    printf("Enter an account ID to create: ");
                    scanf("%s", accountID);
                    accountExists = 1;
                    balance = 0;
                    printf("Account '%s' created successfully!\n", accountID);
                }
                break;

            // DELETE ACCOUNT
            case 'D':
            case 'd':
                if (accountExists == 0) {
                    printf("No account exists to delete.\n");
                } else {
                    accountExists = 0;
                    printf("Account deleted successfully!\n");
                }
                break;

            // CHECK BALANCE
            case 'B':
            case 'b':
                if (accountExists == 0) {
                    printf("You don't have an account yet!\n");
                } else {
                    printf("Your current balance is: $%d\n", balance);
                }
                break;

            // DEPOSIT MONEY
            case 'P':
            case 'p': {
                if (accountExists == 0) {
                    printf("Create an account first!\n");
                    break;
                }
                int deposit;
                printf("Enter the amount to deposit: $");
                scanf("%d", &deposit);

                if (deposit > 10000) {
                    printf("Suspicious activity detected. Deposit rejected.\n");
                } else {
                    balance += deposit;
                    printf("Deposit successful! Your new balance is: $%d\n", balance);
                }
                break;
            }

            // WITHDRAW MONEY
            case 'W':
            case 'w': {
                if (accountExists == 0) {
                    printf("Create an account first!\n");
                    break;
                }
                int withdraw;
                printf("Enter the amount to withdraw: $");
                scanf("%d", &withdraw);

                if (withdraw > balance) {
                    printf("Insufficient funds! You cannot withdraw imaginary money.\n");
                } else if (withdraw > 5000) {
                    printf("Calm down! You cannot withdraw more than 5000 at once.\n");
                } else {
                    balance -= withdraw;
                    printf("Withdrawal successful! Your new balance is: $%d\n", balance);
                }
                break;
            }

            // EXIT ATM
            case 'E':
            case 'e':
                printf("Thank you for using the %s ATM. Goodbye!\n", atmName);
                return 0;

            // INVALID CHOICE
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
//End of program
