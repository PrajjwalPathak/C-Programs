/*C program to implement int and char Stack ADT 
  By-Anurag Kar
  */
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10   //For stack size(as per question)


/*------
Integer stack
-------*/
//Declaring struct for the stack ADT
struct StackInt
{
    int Top;
    int Arr[SIZE];
    void (*Push)(int, struct StackInt*);
    void (*Pop)(struct StackInt*);
    void (*Display)(struct StackInt*);
};

//Push function to enter integer elements into stack
void Push(int Var, struct StackInt *stack)
{
    if(stack->Top == SIZE-1)
    {
        printf("Stack Overflow!!\n");
    }
    else
    {
        stack->Top=stack->Top+1;
        stack->Arr[stack->Top]=Var;
    }    
}

//Pop function to remove integer elements from the stack
void Pop(struct StackInt *stack)
{
    if(stack->Top==-1)
    {
        printf("Stack Underflow!!\n");
    }
    else
    {
        stack->Top=stack->Top-1;
    }    
}

//Display funtion to display the integer elements of the stack
void Display(struct StackInt *stack)
{
    if(stack->Top==-1)
    {
        printf("Sorry, User Stack is empty!\n");
    }
    else
    {
        for(int i=stack->Top; i>-1; --i)
        {
            printf("%d\n", stack->Arr[i]);
        }
    }    
}

/*------
Character Stack
-------*/
//Declaring struct for the stack ADT
struct StackChar
{
    int Top;
    char Ar[SIZE];
    void (*PushC)(char, struct StackChar*);
    void (*PopC)(struct StackChar*);
    void (*DisplayC)(struct StackChar*);
};

//Push function to enter integer elements into stack
void PushC(char Charac, struct StackChar *stack)
{
    if(stack->Top == SIZE-1)
    {
        printf("Stack Overflow!!\n");
    }
    else
    {
        stack->Top=stack->Top+1;
        stack->Ar[stack->Top]=Charac;
    }    
}

//Pop function to remove integer elements from the stack
void PopC(struct StackChar *stack)
{
    if(stack->Top==-1)
    {
        printf("Stack Underflow!!\n");
    }
    else
    {
        stack->Top=stack->Top-1;
    }    
}

//Display funtion to display the integer elements of the stack
void DisplayC(struct StackChar *stack)
{
    if(stack->Top==-1)
    {
        printf("Sorry, User Stack is empty!\n");
    }
    else
    {
        for(int i=stack->Top; i>-1; --i)
        {
            printf("%c\n", stack->Ar[i]);
        }
    }    
}


/*--------
main function
---------*/
int main()
{
    int Var=0; //For Variable for insertion
    char Charac;  //For character insertion
    struct StackInt UserInt;   //For integer struct
    struct StackChar UserChar;   //For character struct
    int op=0; //For Universal Options

    //Assigning the functions
    UserInt.Push=Push;
    UserInt.Pop=Pop;
    UserInt.Display=Display;
    UserChar.PushC=PushC;
    UserChar.PopC=PopC;
    UserChar.DisplayC=DisplayC;

    //Intializing Top
    UserInt.Top=-1;
    UserChar.Top=-1;

    
    while(1)
    {
        printf("\nInteger and Character Stack program\n");
        printf("1. Integer Stack\n2. Character Stack\n3.Exit :(\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1: while(1)
                    {        
                        printf("\nEnter the(number against which) option which you want to use: \n");
                        printf("1.Push(Enter elements)\n2.Pop(Remove elements)\n3.Display\n4.Exit\n");
                        scanf("%d",&op);
                        switch(op)
                        {
                            case 1:printf("Enter the interger to be pushed(Entered):");
                                   scanf("%d",&Var);
                                   UserInt.Push(Var, &UserInt);
                                break;
                            case 2:printf("The top element will be poped(removed)...\n");
                                   UserInt.Pop(&UserInt);
                                break;
                            case 3:printf("The Final integer Stack is :\n");
                                   UserInt.Display(&UserInt);
                                break;
                            case 4:printf("Exiting...");
                                   exit(0);
                            default: printf("Invalid input!....Try again.\n");
                                break;
                        }
                    }
                break;
            case 2: while(1)
                    {        
                        printf("\nEnter the(number against which) option which you want to use: \n");
                        printf("1. Push(Enter elements)\n2.Pop(Remove elements)\n3.Display\n4.Exit\n");
                        scanf("%d",&op);
                        switch(op)
                        {
                            case 1:printf("Enter the charracter to be pushed(Entered): ");
                                   getchar();  //to store the excess enter key pressed
                                   scanf("%c",&Charac);
                                   UserChar.PushC(Charac, &UserChar);
                                break;
                            case 2:printf("The top element will be poped(removed)...\n");
                                   UserChar.PopC(&UserChar);
                                break;
                            case 3:printf("The Final character Stack is :\n");
                                   UserChar.DisplayC(&UserChar);
                                break;
                            case 4:printf("Exiting...");
                                   exit(0);
                            default: printf("Invalid input!....Try again.\n");
                                break;
                        }
                    }
                break;
            case 3:printf("Bye Bye!!");
                   exit(0);
            default:printf("Invalid input!....Try again.\n");
                break;
        }
    }

    return 0;
}

/*-----
End of progrqam
------*/