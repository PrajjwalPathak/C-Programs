//Program to swap two numbers

#include<stdio.h>

int main() {
    int a,b;
    printf("Enter the two number to swap: ");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swaping: \n");
    printf("a: %d  b: %d",a,b);

    return 0;
}
