//Program to calculate the sum of natural numbers till n 

#include <stdio.h>

int main() {

    int n,i,Sum=0;
    printf("Enter n to find sum of n natural numbers:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++) {
        Sum = Sum + i;
    }
    printf("Sum is %d",Sum);
    
    return 0;
}