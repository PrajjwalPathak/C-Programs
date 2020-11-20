//Program to generate multiplication table

#include<stdio.h>

int main() {
    int n, i, p;
    printf("Enter a number for multiplication table: ");
    scanf("%d",&n);
    for(i=1;i<11;i++) {
        p=n*i;
        printf("%d x %d = %d\n",n,i,p);
    }
    return 0;
}