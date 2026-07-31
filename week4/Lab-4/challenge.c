#include <stdio.h>

int main(void)
{
    int choice;
    float balance;
    float amount;

    balance = 0;
    while (1)
    {
        printf("====== ATM MENU ======\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Current Balance: %.2f\n", balance);
        }
        else if (choice == 2)
        {
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance = balance + amount;
        }
        else if (choice == 3)
        {
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if (amount > balance)
            {
                printf("Insufficient balance.\n");
            }
            else
            {
                balance = balance - amount;
                printf("Withdrawal successful.\n");
            }
        }
        else if (choice == 4)
        {
            printf("Thank you for using the ATM.\n");
            break;
        }
        else
        {
            printf("Invalid option, please try again.\n");
        }
    }
    return (0);
}