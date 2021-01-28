//Program to create Linked List

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
}; 
typedef struct node Node;

Node *create(Node *start) {
    int c=1;
    Node *newNode=NULL, *previous=NULL;
    while(c!=0) {
        newNode=(Node *)malloc(sizeof(Node));
        printf("Enter data: ");
        scanf("%d",&newNode->data);
        newNode->next=NULL;
        if(start==NULL) {
            start=newNode;
        }
        else {
            previous->next=newNode;
        }
        previous=newNode;
        printf("Enter Choice: 1 to continue, 0 to stop");
        scanf("%d",&c);
    }
    return start;
}

void display(Node *start) {
    while(start!=NULL) {
        printf("%d",start->data);
        start=start->next;
    }
}

int main() {
    Node *start=NULL;
    start=create(start);
    display(start);
    return 0;
}

