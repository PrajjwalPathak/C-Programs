//Program to find LCM of 2 numbers

#include<stdio.h>

int gcd(int a, int b) {
    if(a==0) {
        return b;
    }
    else {
        return gcd(b%a,a);
    }
}

int main() {
    int a, b, hcf=1, lcm=1;
    printf("Enter 2 numbers to find LCM: ");
    scanf("%d %d",&a,&b);
    hcf = gcd(a,b);
    lcm = a*b/hcf;
    printf("LCM = %d",lcm);
}