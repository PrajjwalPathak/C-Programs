//Program to find the quotient and the remainder after dividing two numbers

#include<stdio.h>

int main() {
    int D,d;
    float q,r;
    printf("Enter the Dividend : ");
    scanf("%d",&D);
    printf("Enter the divisor : ");
    scanf("%d",&d);
    if(d==0) {
        printf("Division not possible");
    }
     else {
        q=D/d;
        r=D%d;
        printf("\nQuotient: %0.2f",q);
        printf("\nRemainder: %0.2f",r);
    }

    return 0;
}
