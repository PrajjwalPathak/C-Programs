//Program to delete an element from an array

#include <stdio.h>
int main() {

   int array[100], position, c, n;

   printf("Enter number of elements in array: ");
   scanf("%d", &n);

   printf("Enter %d elements: ", n);

   for (c = 0; c < n; c++){
      scanf("%d", &array[c]);
   }
      

   printf("Enter the location where you wish to delete element: ");
   scanf("%d", &position);

   if (position >= n+1) {

      printf("Deletion not possible.");
   }
      
   else {

      for (c = position - 1; c < n - 1; c++)
         array[c] = array[c+1];

      printf("Resultant array: ");

      for (c = 0; c < n - 1; c++)
         printf("%d ", array[c]);
   }

   return 0;
}
