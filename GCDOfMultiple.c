//Program to find the GCD of multiple numbers

#include<stdio.h>

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

int gcdmultiple(int a[], int n) {
    int i;
    for(i=0;i<n-1;i++) {
        a[i+1] = gcd(a[i],a[i+1]);
    }
    return a[n-1];
}

int main() {
    int i,n,hcf;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    hcf=gcdmultiple(a,n);
    printf("HCF = %d",hcf);
    
    return 0;
}