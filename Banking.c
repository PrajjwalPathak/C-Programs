//Program for a banking system

#include<stdio.h>
#include<stdlib.h>

int main() {
    float bal=100000,interest,amount;
    float p,r,t; //For Simple Interest
    char inp = '0';
    while (inp != 10000) {
        printf("\n$$$$$$$$$$$$$$$$$$$$\n1. Deposit Amount\n2. Withdraw Amount\n3. Calculate Interest\n4. View Balance\n(Type X to exit)\n$$$$$$$$$$$$$$$$$$$$\n\n");
        scanf(" %c", &inp);
        switch (inp) {
            case '1':
                printf("Enter Amount: ");
                scanf("%f", &amount);
                bal = bal + amount;
                break;
            case '2':
                printf("Enter Amount: ");
                scanf("%f", &amount);
                bal = bal - amount;
                break;
            case '3':
                printf("Enter principal,rate and time period: ");
                scanf("%f %f %f",&p,&r,&t);
                interest = (p*r*t)/100;
                printf("Interest is %f\n", interest);
                break;
            case '4':
                printf("Balance: %f\n", bal);
                break;
            case 'X':
                printf("Exiting...");
                exit(0);
                break;
            default: 
                printf("Invalid Input\n");
                break;
        }
    }

    return 0;
}