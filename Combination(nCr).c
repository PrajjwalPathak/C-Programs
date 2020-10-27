//Program to calculate nCr (Permutation & Combination)
#include<stdio.h>

int fact(int a)
{
    if(a==0 || a==1) {
        return 1;
    }
    else {
        return (fact(a-1)*a);
    }
    
}
int C(int n,int r) {

    int t1=fact(n);
    int t2=fact(n-r);
    int t3=fact(r);
    return t1/(t2*t3);
}
int main() {

    int n,r,answer;
    printf("Enter n and c of nCr of (Permutation & Combination): ");
    scanf("%d %d",&n,&r);
    if(n<r) {
        printf("Invalid (n must be greater than r)");
    }
    else {
        answer = C(n,r);
    printf("nCr = ");
    printf("%d",answer);
    }
    
    return 0;
}