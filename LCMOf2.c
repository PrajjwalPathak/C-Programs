//Program to find LCM of 2 numbers

#include<stdio.h>

int lcm(int a, int b) {
    int max;
    if(a==0 || b==0) {
        return 0;
    }
    else {
        max = (a>b)?a:b;
        while(1) {
            if(max%a==0  && max%b==0) {
                return max;
            }
            max++;
        }
    }
}

int main() {
    int a, b, l=1;
    printf("Enter 2 numbers to find LCM: ");
    scanf("%d %d",&a,&b);
    l = lcm(a,b);
    printf("LCM = %d",l);
}