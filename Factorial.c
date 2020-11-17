//Program to calculate the factorial of a number

#include<stdio.h>

int main() {
    int n,i;
    long int f=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        f=f*i;
    }
    printf("Factorial is %d",f);
    
    return 0;
}