#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *next;
} *first = NULL;

void create(int a[], int size) {
	struct node *temp, *last;
	int i;
	first = (struct node*) malloc(sizeof(struct node));
	first->data = a[0];
	first->next = NULL;
	last = first;
	for (i = 1; i < size; i++) {
		temp = (struct node*) malloc(sizeof(struct node));
		temp->data = a[i];
		temp->next = NULL;
		last->next = temp;
		last = temp;
	}
	
}

void print_list(struct node *p) {
	int pos = 0;
	while (p) {
		printf("%d, ", p->data);
		p=p->next;
	}
}

void setup_list() {
	int i, size;
	printf("\nEnter size of Array: ");
	scanf("%d", &size);
	int arr[size];
	printf("\nEnter %d elements:", size);
	for (i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}
	create(arr, size);
}

void main() {
    int arr[] = {4, 5, 6, 7, 9};
    create(arr, 5);
    print_list(first);
}
