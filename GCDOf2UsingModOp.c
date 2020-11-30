//Program to find the GCD of two numbers

#include<stdio.h>

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int main() {
    int a,b,hcf;
    printf("Enter two numbers to find its GCD: ");
    scanf("%d %d",&a,&b);
    hcf=gcd(a,b);
    printf("HCF = %d",hcf);
}