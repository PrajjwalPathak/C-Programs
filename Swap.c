#include<stdio.h>
int main() {
    int a,b;
    printf("Enter first number to swap: ");
    scanf("%d",&a);
    printf("Enter second number to swap: ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swaping: \n");
    printf("a: %d  b: %d",a,b);

    return 0;
}