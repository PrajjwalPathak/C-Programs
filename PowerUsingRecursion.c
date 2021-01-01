//Program to find the pth power of a number using recursion

#include<stdio.h>

int power(int b, int p) {
    if (p!=0)
        return (b*power(b,p-1));
    else
        return 1;
}

int main() {

    int b,p,r=1;
    printf("Enter base: ");
    scanf("%d",&b);
    printf("Enter Power: ");
    scanf("%d",&p);
    r = power(b,p);
    printf("Result: %d",r);
    
    return 0;
}