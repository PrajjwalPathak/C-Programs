//Program to generate Fibonacci series of n elements

#include<stdio.h>

int main() {
    int n, i, t1=1, t2=1, t3=0;
    printf("Write a positive number to print Fibonaci series: ");
    scanf("%d",&n);
    if(n==1) {
        printf("%d",t1);
    }
    else if(n==2) {
        printf("%d %d ",t1,t2);
    }
    else {
        printf("%d %d ",t1,t2);
        for(i=2;i<n;i++) {
            t3=t1+t2;
            printf("%d ",t3);
            t1=t2;
            t2=t3;
        }
    }
    return 0;
}