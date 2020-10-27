//Program to calculate the area of triangle

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,A,s;
    printf("Enter the length of the sides: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b > c && b+c > a && c+a > b) {
        s=(a+b+c)/2;
        A=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area is %f", A); 
    }
    else {
        printf("Invalid Triangle");
    }

return 0;        
}