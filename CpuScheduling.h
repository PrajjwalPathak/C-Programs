#include<stdio.h>
#include<stdlib.h>

# define MAX 10           //as per question

int cqueue_arr[MAX];
int front = -1;         //intializing front and rear
int rear = -1;

//inserting function
void enqueue(int item)
{
    if((front == 0 && rear == MAX-1) || (front == rear+1))
    {
        printf("Warning!! Excess processes have been assigned!");   //Normally this would be never be executed but kept for better conduct
        return;
    }
    if(front == -1)
    {
        front = 0;
        rear = 0;
    }
    else
    {
        if(rear == MAX-1)
            rear = 0;
        else
        rear = rear+1;
    }
    cqueue_arr[rear] = item ;
}

//deleting function
int dequeue()
{
    if(front == -1)
    {
        printf("Warning!! No proccess left for Cpu scheduling");          //Normally this would be never be executed but kept for better conduct
        exit(0);
    }
    printf("The process(time) dequeued for execution is : %d",cqueue_arr[front]);      //printing the dequeued element
    int del = cqueue_arr[front];
    if(front == rear)
    {
        front = -1;
        rear=-1;
    }
    else
    {
        if(front == MAX-1)
            front = 0;
        else
            front = front+1;
    }
    return del;
}

//display function
int display()
{
    int front_pos = front,rear_pos = rear;
    if(front == -1)
    {
        printf("\n\nSuccessfully completed all the process without error...\n");      //final completion of scheduled
        return -1;
    }
    printf("\n");
    if( front_pos <= rear_pos )
        while(front_pos <= rear_pos)
            {
                printf("%d ",cqueue_arr[front_pos]);
                front_pos++;
            }
    else
    {
        while(front_pos <= MAX-1)
        {
            printf("%d ",cqueue_arr[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        while(front_pos <= rear_pos)
        {
            printf("%d ",cqueue_arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
    return 0;
}