#include "link.h"
 
int main()
{
    printf("\n\n------------------------------------\n");
    printf("Stack ADT using a singly linked list\n");
    printf("------------------------------------\n");
    

    int number, op, upper;   //number for insertion, op for option selection, upper to store the return element

    printf("\nPlease enter the options you want to execute: ");
 
    New();                     //Intializing
 
    while (1)
    {
        printf("\t(1) Push");
        printf("\t(2) Pop   ");
        printf("\t(3) Top   ");
        printf("\t(4) Check empty");
        printf("\t(5) Display list");
        printf("\t(6) Node Count ");
        printf("\t(7) Destroy Stack ");
        printf("\t(8) Exit :(   \n");

        printf("Option: ");
        scanf("%d", &op);
 
        switch (op)
        {
        case 1:
            printf("\nPlease enter the number to be entered: ");
            scanf("%d", &number);
            Push(number);                          //Insertion
            break;
        case 2:
            Pop();                                  //Deletion
            break;
        case 3:
            if (top == NULL)                                    //To check top integer
                printf("Oops! No elements present here!");                         
            else
            {
                upper = TopElement();
                printf("\nThe top element is : %d\n", number);
            }
            break;
        case 4:
            Check();                                        //Check stack is empty or not
            break;
        case 5:
            Display();                                        //For displaying stack elements
        case 6:
            Number();                                        //For Displaying the number of number of elements
            break;
        case 7:
            Free();                                          //Deleting the whole stack
            break;
        case 8:
            printf("\nBye bye..:(\n----------------\n\n");
            exit(0);                                        //Exiting
            break;
        default :
            printf("\nHey! you like to enter wrong keys, :D...Try again!");
            break;
        }

        printf("\n\nPlease enter a option again: ");
    }  

    return 0;
}