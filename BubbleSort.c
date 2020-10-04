#include<stdio.h>
#include <stdbool.h>
/*
    Bubble Sort is a Sorting Algorithm you may possibly learn on your
    first Computer Science Semester

    It's space complexity is O(n^2)

    In this example we are going to test the worst case scenario for the 
    algorithm (The case where the array is ordered the wrong way)
*/
void bubbleSort(int array[], int size);
void swap(int *a, int *b);
void printArray(int array[], int size, bool sorted);

int main(){
    int array[] = {42, 23, 16, 15, 8, 4};
    int arraySize = sizeof(array)/sizeof(array[0]);
    printArray(array, arraySize, false);
    bubbleSort(array, arraySize);
    printArray(array, arraySize, true);

    return 0;
}

void bubbleSort(int array[], int size){
    for(int i=0; i < size - 1; i++){
        for(int j=0; j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                swap(&array[j], &array[j+1]);
            }
        }
    }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int array[], int size, bool sorted){
    if(sorted){
        printf("The array after being sorted: ");
    }else{
        printf("The array before being sorted: ");
    }
    for(int i=0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
