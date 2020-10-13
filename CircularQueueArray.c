//Program to demonstrate Circular Queue Array

#include<stdio.h>
#include<stdlib.h>

# define MAX 5       //As per question given

//Queue Structure 
struct Cqueue {
    int front;
    int rear;
    int cqueue_arr[MAX];
    void (*enqueue)(int, struct CQueue*);
    void (*dequeue)(struct CQueue*);
    void (*display)(struct Cqueue*);
};

//insert function
void enqueue(int item, struct CQueue *cq) {

    if((cq->front == 0 && cq->rear == MAX-1) || (cq->front == cq->rear+1)) {

        printf("Warning!! Queue Overflow\n");
        return;
    }

    if(cq->front == -1) {

        cq->front = 0;
        cq->rear = 0;
    }
    else {

        if(cq->rear == MAX-1) {
            cq->rear = 0;
        }
            
        else {
            cq->rear = cq->rear+1;
        }
    }

    cq->cqueue_arr[cq->rear] = item ;
}

//deleting function
void dequeue(struct CQueue *cq) {

    if(cq->front == -1) {

        printf("Warning!! Queue Underflow\n");
        return ;
    }
    
    printf("Element deleted from queue is : %d\n",cq->cqueue_arr[cq->front]);
    
    if(cq->front == cq->rear) {

        cq->front = -1;
        cq->rear=-1;
    }
    
    else {

        if(cq->front == MAX-1)
            cq->front = 0;
        else
            cq->front = cq->front+1;
    }
}

//display function
void display(struct CQueue *cq) {

    int front_pos = cq->front, rear_pos = cq->rear;
    if(cq->front == -1) {

        printf("\nOops! Queue is empty\n");
        return;
    }
   
    printf("\nQueue elements are :\n");
    if( front_pos <= rear_pos ) {
         while(front_pos <= rear_pos)
            {
                printf("%d ",cq->cqueue_arr[front_pos]);
                front_pos++;
            }
    }
       
    else {

        while(front_pos <= MAX-1) {

            printf("%d ",cq->cqueue_arr[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        while(front_pos <= rear_pos) {

            printf("%d ",cq->cqueue_arr[front_pos]);
            front_pos++;
        }
    }

    printf("\n");
}

//main function begins 
int main() {

    int item = 0, choice = 0;
    struct CQueue cq;  //For circular queue structure instance

    //Assigning the functions to the structure 
    cq.enqueue = enqueue;
    cq.dequeue = dequeue;
    cq.display = display;

    //Intializing the front and rear
    cq.front = -1;
    cq.rear = -1;

    //execution loop
    while(1) {

        printf("\nThe options available for execution are listed...:\n");
        printf("1. Enqueue  2. Dequeue  3.Display  4.Quit\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);
        switch(choice) {
            
            case 1 :
                    printf("Input the element for insertion in queue : ");
                    scanf("%d", &item);
                    cq.enqueue(item, &cq);
                break;
            case 2 :
                    cq.dequeue(&cq);
                break;
            case 3:
                    cq.display(&cq);
                break;
            case 4:
                    printf("\nExiting...bye bye!!\n");
                break;
            default:
                    printf("\nInvalid choice!..Try again\n");
        }
    }

    return 0;

}