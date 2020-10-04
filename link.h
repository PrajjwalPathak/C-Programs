//Custom header file


#include<stdio.h>
#include<stdlib.h>

/*----------------------------------------------------
------------------------------------------------------
------------------------------------------------------
Below contains the definations of the linked stack ADT
------------------------------------------------------
------------------------------------------------------
-----------------------------------------------------*/


//Declaring structure for the linked node
struct stack
{
    int cond;   //To see the condition present
    struct stack *ptr;
}*top,*top1,*temp;  //declaring structure objects as pointers

int ele_num = 0; //for counting the number of elements

//Declaring the functions needed for linked lists for stack
int TopElement();
void Push(int data);
void Pop();
void Check();
void Display();
void Free();
void Number();
void New();

//This function is to get the top element
int TopElement()
{
    return(top->cond);
}

//This function is to insert element into stack
void Push(int data)
{
    if (top == NULL)
    {
        top =(struct stack *)malloc(1*sizeof(struct stack));  //dynamically assigning memory
        top->ptr = NULL;
        top->cond = data;
    }
    else
    {
        temp =(struct stack *)malloc(1*sizeof(struct stack));  //dynamically assigning memory
        temp->ptr = top;
        temp->cond = data;
        top = temp;
    }
    ele_num++;
    printf("\nSuccessfully entered the element.\n");
}

//This function is to delete the element into stack
void Pop()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nOops! How can you Pop from empty stack!\n");
        return;
    }
    else
        top1 = top1->ptr;
    printf("\nThe Popped value is : %d\n", top->cond);
    free(top);
    top = top1;
    ele_num--;
}

//This function is to check wheather the stack is emoty or not
void Check()
{
    if (top == NULL)
        printf("\nHeck! The Stack is empty!\n");
    else
        printf("\nYour stack is not empty having -  %d elements\n", ele_num);
}

//This function is to display the function
void Display()
{
    top1 = top;
 
    if (top1 == NULL)
    {
        printf("\nGreat job! We have nothing to display, enjoy!! :)\n");
        return;//for returing NULL
    }
 
    while (top1 != NULL)  //To display all elements
    {
        printf("%d ", top1->cond);
        top1 = top1->ptr;
    }
}

//This function is to destroy all the elements
void Free()
{
    top1 = top;
 
    while (top1 != NULL)
    {
        top1 = top->ptr;
        free(top);
        top = top1;
        top1 = top1->ptr;
    }
    free(top1);
    top = NULL;
 
    printf("\nOh no!..You have destroyed the full stack, not a developer though ;)\n");
    ele_num = 0;
}

//This function is to print the numbers of elements or nodes
void Number()
{
    printf("\nNumber of elements in stack(nodes) : %d", ele_num);
}

//This function is to create or initilize a new function
void New()
{
    top = NULL; //initilizing
}
 
 
/*----------------------------------------------------
------------------------------------------------------
------------------------------------------------------
Below contains the definations of the linked Queue ADT
------------------------------------------------------
------------------------------------------------------
-----------------------------------------------------*/

//structure for the linked queue
struct queue
{
    int status;   //for the status in the linked queue
    struct queue *ptr;    
}*front,*rear,*temp1,*front1;
 
int FrontElement();
void Enqueue(int var);
void Dequeue();
void CheckEmpty();
void DisplayQ();
void Init();
void QueueSize();
 
int count = 0;    //For the counting the number of the elements

//This function will return the front element
int FrontElement()
{
    if ((front != NULL) && (rear != NULL))
        return(front->status);
    else
        return 0;
}

//For inserting element in the linked queue
void Enqueue(int var)
{
    if (rear == NULL)
    {
        rear = (struct queue *)malloc(1*sizeof(struct queue));   //dynamically allocating memory
        rear->ptr = NULL;
        rear->status = var;
        front = rear;
    }
    else
    {
        temp1=(struct queue *)malloc(1*sizeof(struct queue));   //dynamically allocating memory
        rear->ptr = temp1;
        temp1->status = var;
        temp1->ptr = NULL;
 
        rear = temp1;
    }
    count++;
    printf("\nSuccessfully entered the element.\n");
}

//For deleting elements from the queue
void Dequeue()
{
    front1 = front;
 
    if (front1 == NULL)
    {
        printf("\nOops! How can you Pop from empty queue!\n");
        return;
    }
    else
        if (front1->ptr != NULL)
        {
            front1 = front1->ptr;
            printf("\nThe Dequed value is : %d\n", front->status);
            free(front);
            front = front1;
        }
        else
        {
            printf("\nThe Dequed value is : %d\n", front->status);
            free(front);
            front = NULL;
            rear = NULL;
        }
        count--;
}

//To check if the linked queue is empty or not
void CheckEmpty()
{
     if ((front == NULL) && (rear == NULL))
        printf("\nHeck! The Stack is empty!\n");
    else
       printf("\nCongrats the queue is not empty, but you can make it :|\n");
}

//To display all the elements of the queue
void DisplayQ()
{
    front1 = front;
 
    if ((front1 == NULL) && (rear == NULL))
    {
        printf("\nGreat job! We have nothing to display, enjoy!! :)\n");
        return;
    }
    while (front1 != rear)
    {
        printf("%d ", front1->status);
        front1 = front1->ptr;
    }
    if (front1 == rear)
        printf("%d", front1->status);
} 

//Just to initialize the linked queue first node
void Init()
{
    front = rear = NULL;
}
 
//For the queue-size
void QueueSize()
{
    printf("\nThe Queue size is : %d", count);
}
 



 

