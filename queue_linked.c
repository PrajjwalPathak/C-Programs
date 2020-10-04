#include "link.h"

//main function begins
int main()
{
    printf("\n\n------------------------------------\n");
    printf("Queue ADT using a singly linked list\n");
    printf("------------------------------------\n");

    int number, op, front_element;   //for number insertion, option and front element stored

    printf("\nPlease enter the options you want to execute: ");

    Init();

    while (1)
    {
        //menu
        printf("\t(1) Enqueue");
        printf("\t(2) Dequeue");
        printf("\t(3) Check Front element ");
        printf("\t(4) Check empty ");
        printf("\t(5) Display List");
        printf("\t(6) Queue Size  ");
        printf("\t(7) Exit :(");

        printf("\nOptions: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("\nPlease enter the number to be entered: ");
            scanf("%d", &number);
            Enqueue(number);
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            front_element = FrontElement();
            if (front_element != 0)
                printf("Front element : %d", front_element);
            else
                printf("\nHey! I think there is no front element!!");
            break;
        case 4:
            CheckEmpty();
            break;
        case 5:
            DisplayQ();
            break;
        case 6:
            QueueSize();
            break;
        case 7:
            printf("\nBye bye..:(\n----------------\n\n");
            exit(0);
            break;  //for better coding practice
        default:
            printf("\nHey! you like to enter wrong keys, :D...Try again!");
            break;
        }

        printf("\n\nPlease enter a option again: ");
    }
    return 0;
}