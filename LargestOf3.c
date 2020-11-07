//Program to find largest of 3 numbers

#include<stdio.h>

int main() {
    int a,b,c;
    printf("Enter 3 numbers to compare: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b) {
        if(a>c) {
            printf("%d is the largest number",a);
        }
        else {
            printf("%d is the largest number",c);
        }
    }
    else {
        if(b>c) {
            printf("%d is the largest number",b);
        }
        else {
            printf("%d is the largest number",c);
        }
    }
    return 0;
}