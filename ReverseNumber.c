//Program to find the reverse of a number

#include<stdio.h>

int reverse(int n) {
    int rem, temp = 0;
    while(n!=0) {
        rem = n%10;
        temp = temp*10 + rem;
        n /=10;
    }
    return temp;
}

int main() {

    int n,r;
    printf("Enter Number: ");
    scanf("%d",&n);
    r = reverse(n);
    printf("Reversed Number: %d",r);
    
    return 0;
}