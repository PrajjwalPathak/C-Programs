#include<stdio.h>

void Input(int *P, int N) {
    int i;
    for(i=0;i<N;i++) {
        scanf("%d",&P[i]);
    }
}

void Delete(int *P, int N, int l) {
    int i;
    for(i=l-1;i<N-1;i++) {
        P[i]=P[i+1];
    }
}

void Display(int *P, int N) {
    int i;
    for(i=0;i<N-1;i++) {
        printf("%d ",P[i]);
    }
}

int main() {
    int n=0,a[50],pos;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    printf("Enter the elements of Array: ");
    Input(a,n);
    printf("Enter the position you want to delete: ");
    scanf("%d",&pos);
    Delete(a,n,pos);
    printf("New Array: ");
    Display(a,n);

    return 0;
}