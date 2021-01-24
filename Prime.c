//Program to find if a number is prime or not

#include<stdio.h>

int main() {
    int i,n,flag=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    if(n<0) {
        printf("Invalid - Write numbers greater than 0");
    }
    else if(n==0 || n==1) {
        printf("Not a Prime");
    }
    else if(n==2 || n==3) {
        printf("Prime");
    }
    else {
        for(i=2;i<=n/2;i++) {
            if(n%i==0) {
                flag=1;
                break;
            }
        }
        if(flag==0) {
            printf("Prime");
        }
        else {
            printf("Not a Prime");
        }
    }
    
    return 0;
}