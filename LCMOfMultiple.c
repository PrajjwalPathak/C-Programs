//Program to find the LCM of multiple numbers

#include<stdio.h>

using namespace std;

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

int lcmMultiple(int a[], int n) {
    int i;
    for(i=0;i<n-1;i++) {
        a[i+1] = lcm(a[i],a[i+1]);
    }
    return a[n-1];
}

int main() {
    int i,n,l;
    printf("Enter n: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter n numbers to find LCM: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    l=lcmMultiple(a,n);
    printf("LCM = %d",l);
    
    return 0;
}