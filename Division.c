#include<stdio.h>
int main() {
    int D,d;
    float q,r;
    printf("Enter a number to find its quotient and remainder: ");
    scanf("%d",&D);
    printf("Enter the divisor: ");
    scanf("%d",&d);
    if(d==0)
    {
     printf("Division not possible");
    }
     else
    {
    q=D/d;
    r=D%d;
    printf("\nQuotient: %f",q);
    printf("\nRemainder: %f",r);
    }
    return 0;
}
