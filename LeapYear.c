//Program to tell if the year is a Leap Year or not

#include<stdio.h>

int main() {

    int year;
    printf("Enter a year: ");
    scanf("%d",&year);
    if(year%4==0) {
        if(year%100==0) {
            if(year%400==0) {
                printf("It is a Leap Year");
            }
            else {
            printf("It is not a Leap Year");
            }
        }
        else {
            printf("It is a Leap Year");
        }
    }
    else {
        printf("It is not a Leap Year");
    }
    return 0;
}