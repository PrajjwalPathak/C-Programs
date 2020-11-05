//Program to find the pth power of a number

#include<stdio.h>

int main() {

    int b,p,i,r=0;
    printf("Enter base: ");
    scanf("%d",&b);
    printf("Enter Power: ");
    scanf("%d",&p);
    r=b;
    for(i=2;i<=p;i++) {
        r=r*b;
    }
    printf("Result: %d",r);
    
    return 0;
}