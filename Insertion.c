#include<stdio.h>

void Input(int *P, int N) {
    int i;
    for(i=0;i<N;i++) {
        scanf("%d",&P[i]);
    }
}

void Insert(int *P, int N, int E, int l) {
    int i;
    for(i=N;i>l-1;i--) {
        P[i]=P[i-1];
    }
    P[l]=E;
}

void Display(int *P, int N) {
    int i;
    for(i=0;i<N;i++) {
        printf("%d ",P[i]);
    }
}

int main() {
    int n=0,a[50],e,pos;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    printf("Enter the elements of Array: ");
    Input(a,n);
    printf("Enter the element you want to insert: ");
    scanf("%d",&e);
    printf("Enter the position at which you want to insert: ");
    scanf("%d",&pos);
    Insert(a,n,e,pos);
    n=n+1;
    printf("New Array: ");
    Display(a,n);

    return 0;
}