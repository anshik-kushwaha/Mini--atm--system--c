
#include <stdio.h>
#include <conio.h>

void main()
{
    int choice;
    float balance = 5000, amount;

    do
    {
        printf("\n===== MINI ATM SYSTEM =====");
        printf("\n1. Check Balance");
        printf("\n2. Deposit Money");
        printf("\n3. Withdraw Money");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nYour Balance is: %.2f", balance);
                break;

            case 2:
                printf("\nEnter Amount: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance = balance + amount;
                    printf("\nMoney Deposited Successfully!");
                }
                else
                    printf("\nInvalid Amount!");
                break;

            case 3:
                printf("\nEnter Amount: ");
                scanf("%f", &amount);

                if(amount > 0 && amount <= balance)
                {
                    balance = balance - amount;
                    printf("\nPlease Collect Your Money!");
                }
                else
                    printf("\nInsufficient Balance or Invalid Amount!");
                break;

            case 4:
                printf("\nThank You for Using Mini ATM!");
                break;

            default:
                printf("\nInvalid Choice!");
        }

    } while(choice != 4);

    getch();
}
