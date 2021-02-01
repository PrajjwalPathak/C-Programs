#include<stdio.h>
#include<stdlib.h>

int flag=0;
int linear_search(int *a, int e, int  n) {
    int i;
    for(i=0;i<=n-1;i++) {
        if(*(a+i)==e) {
            flag = 1;
            break;
        }
    }
    return i;
}

void get_data(int *a, int n) {
    int i;
    printf("Enter the elements of the array: ");
    for(i=0;i<=n-1;i++) {
        scanf("%d",(a+i));
    }
}
 
int main() {
    int *a, pos=0 , n, e;
 
    printf("Enter the size of an array: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
 
    get_data(a,n);

    printf("Enter the number you want to search: ");
    scanf("%d",&e);

    pos=linear_search(a,e,n);
     
    if(flag==0)
        printf("Number not found\n");
    else
        printf("The number is found at position %d\n",pos+1);
 
    return 0;
}