#include<math.h>
#include <string.h>
#include "Stack.h"   //Custom Header file


char infix_string[SIZE], postfix_string[SIZE];  //For stroing Infix and Postfix separetely

//Checking stack empty function
int isEmpty(struct StackChar*);

//Precedance function to check the operators precedance
int precedence(char symbol);

//Function to convert infox to postfix
void infix_to_postfix();

//Function to check space
int check_space(char symbol);


/*------
main function
--------*/
int main()
{
    int count, length;
    char temp;

    printf("\nINPUT THE INFIX EXPRESSION : ");
    scanf("%s", infix_string);
    infix_to_postfix();
    printf("\nEQUIVALENT POSTFIX EXPRESSION : %s\n", postfix_string);
    return 0;
}


// Function to convert from infix to postfix
void infix_to_postfix()
{
    struct StackChar UserChar;
    UserChar.PushC=PushC;
    UserChar.PopC=PopC;
    UserChar.DisplayC=DisplayC;
    UserChar.Top=-1;
    unsigned int count, temp = 0;
    char next;
    char symbol;
    for(count = 0; count < strlen(infix_string); count++)
    {
        symbol = infix_string[count];   // Scanning the input expression
        if(!check_space(symbol))
        {
            switch(symbol)
            {
                case '(': UserChar.PushC(symbol,&UserChar);
                    break;
                case ')':
                        while((next = UserChar.PopC(&UserChar)) != '(')     // pop until '(' is encountered
                        {
                            postfix_string[temp++] = next;
                        }
                    break;
                case '+':
                case '-':
                case '*':
                case '/':
                case '%':
                case '^':
                        while(!isEmpty(&UserChar) && precedence(UserChar.Ar[UserChar.Top]) >= precedence(symbol))   // Check precedence and push the higher one
                            postfix_string[temp++] = UserChar.PopC(&UserChar);
                        UserChar.PushC(symbol,&UserChar);
                    break;
                default:
                    postfix_string[temp++] = symbol;
            }
        }
    }
    while(!isEmpty(&UserChar))
    {
        postfix_string[temp++] = UserChar.PopC(&UserChar);
    }
    postfix_string[temp] = '\0';  //Useful when using puts for printing the whole string(putting null at the end)
}

// Function to check precedence of operators
int precedence(char symbol)
{
    switch(symbol)
    {
        case '(': return 0;
        case '+':
        case '-':
                return 1;
        case '*':
        case '/':
        case '%':
                return 2;
        case '^':
                return 3;
        default:
                return 0;
    }
}

//Function to check space
int check_space(char symbol)
{
    if(symbol == '\t' || symbol == ' ' )
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

//Function to check if stack is empty or not
int isEmpty(struct StackChar *stack)
{
    if(stack->Top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
