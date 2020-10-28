#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char value[100];
    char value_fix[100];

    //Input a value
    printf("Enter a word or phrase here: \n");
    scanf("%[^\n]", value);
    
    int j = 0;
    int i = 0;
    int tam = strlen(value);
    
    //Remove space
    for(j = 0; j < tam; j++)
    {
        while (value[i] == ' ' && i < tam) i++;

        if (i < tam)
            value_fix[j] = value[i++];
        else
        {
            value_fix[j] = 0;
            break;
        }
    }
    //Remove special characters
    for(i=0; value_fix[i]!='\0'; ++i)
    {
        while (!((value_fix[i]>='a'&&value_fix[i]<='z') || (value_fix[i]>='A'&&value_fix[i]<='Z' || value_fix[i]=='\0')))
        {
            for(j=i;value_fix[j]!='\0';++j)
            {
                value_fix[j]=value_fix[j+1];
            }
            value_fix[j]='\0';
        }
    }
    
    //lowercase the text
    for(i = 0; value_fix[i]; i++){
        value_fix[i] = tolower(value_fix[i]);
    }
    
    tam = strlen(value_fix);
    int max = tam-1;
    
    
    //Palindrome check
    int val = 1;
    for (i = 1; i < tam; i++)
        if (value_fix[i] != value_fix[max - i])
            val = 0;

    //Display the result       
    if (val)
        printf("Palindrome!");
    else
        printf("Not Palindrome.");

}

