//Program to apply arithmatic operations on two numbers

#include<stdio.h>
int main() {
    float a,b,c;
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    c=a+b;
    printf("\nAddition: %f",c);
    c=a-b;
    printf("\nSubtraction: %f",c);
    c=a*b;
    printf("\nMultiplication: %f",c);
    if(b==0)
    {
    printf("Division by zero Not possible");
    }
    else
    {
    c=a/b;
    printf("\nDivision: %f",c);
    }
    return 0;
}
