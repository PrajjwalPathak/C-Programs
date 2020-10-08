//Program for Linear Search to search an element

#include<stdio.h>

void Input(int *P, int N) {
    int i;
    for(i=0;i<N;i++) {
        scanf("%d",&P[i]);
    }
}

int Search(int *P, int N, int E) {
    int i;
    for(i=0;i<N;i++) {
        if(*(P+i)==E) {
            return i;
        }
    }
    return -1;
}

int main() {
    
    int n=0,a[50],e,l;
    printf("Enter Array Size: ");
    scanf("%d",&n);
    printf("Enter the elements of Array: ");
    Input(a,n);
    printf("Enter the element you want to search: ");
    scanf("%d",&e);
    l=Search(a,n,e);
    if(l!=-1) {
        printf("Element found at position %d",l+1);
    }
    else {
        printf("Element not found");
    }

    return 0;
}

