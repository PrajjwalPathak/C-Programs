//Program to demonstrate Bubble Sort Algorithm

#include <stdio.h>

int main() {

    int array[100], num, i, j, swap;
    printf("Enter number of elements: ");
    scanf("%d", &num);
    printf("Enter %d integers: ", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &array[i]);
    }

    for (i = 0 ; i < num - 1; i++) {
    	for (j = 0 ; j < num - i - 1; j++) {
      		if (array[j] > array[j+1]) {
       			swap = array[j];
        		array[j] = array[j+1];
        		array[j+1] = swap;
      		}
		}
	}
  	printf("Sorted list: ");

  	for (i = 0; i < num; i++) {
		printf("%d ", array[i]);
	}

  return 0;
}
