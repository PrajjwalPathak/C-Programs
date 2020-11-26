//Program to find the GCD of two numbers using divisibility test

#include<stdio.h>

int gcd(int a, int b) {
    int c, i, hcf;
    if(a==b) {
        hcf=a;
    }
    if(a>b) {
        c=b;
    }
    else {
        c=a;
    }
    for(i=1;i<=c;i++) {
        if(a%i==0 && b%i==0) {
            hcf=i;
        }
    }
    return hcf;
}

int main() {
    int a,b,hcf;
    printf("Enter two numbers to find its GCD: ");
    scanf("%d %d",&a,&b);
    hcf=gcd(a,b);
    printf("HCF = %d",hcf);
}