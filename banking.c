#include <stdio.h>

int main()
{
    float deposit , withdraw , balance;
    char select , exit;
    printf("Hello World.\n");
    balance = 1000;
    while(1<2)
    {
        printf("Welcome to ATM , What do you wanna do with this?\nd for deposit\nw for withdraw\n0 for exit\n:");
        scanf("%c",&select);
        if(select == 'd')
        {
            printf("OK, You want to Deposit so..\nWhat the money do you wanna deposit :");
            scanf("%f",&deposit);
            balance = balance + deposit;
            printf("Now you have %.2f Baht\n",balance);
            continue;
        }
        else if(select == 'w')
        {
            printf("OK, You want to Withdraw so..\nWhat the money do you wanna withdraw :");
            scanf("%f",&withdraw);
            balance = balance - withdraw;
            printf("Now you have %.2f Baht\n",balance);
            continue;
        }
        else if(select == '0')
        {
            printf("Do you wanna exit?\n:");
            scanf("%c",&exit);
            if(exit == 'y')
            {
                printf("Press The Key to exit\n");
                break;
            }
            else if(exit == 'n')
            {
                printf("You're not ready to exit\n");
                continue;
            }
            else
            {
                printf("--ERROR--\n");
                continue;
            }
        }
        else
        {
            printf("--ERROR--\n");
        }
    }
    return 0;
}
