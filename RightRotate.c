//Program to rotate the elements of an array to the right side by k times

#include<stdio.h>

void Input(int *P, int N) {
    int i;
    for(i=0;i<N;i++) {
        scanf("%d",&P[i]);
    }
}

void RotateOnce(int *P, int N) {
    int i,l;
    l=P[N-1];
    for(i=N-1;i>0;i--) {
        P[i]=P[i-1];
    }
    P[0]=l;
}

void RotatekTimes(int *P, int N, int K) {
    int i;
    for(i=0;i<K;i++) {
        RotateOnce(P,N);
    }
}

void Display(int *P, int N) {
    int i;
    for(i=0;i<N;i++) {
        printf("%d ",P[i]);
    }
}

int main() {
    int n=0,a[50],k;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    printf("Enter the elements of Array: ");
    Input(a,n);
    printf("Enter how many times you want to rotate right: ");
    scanf("%d",&k);
    RotatekTimes(a,n,k);
    printf("New Array: ");
    Display(a,n);

    return 0;
}