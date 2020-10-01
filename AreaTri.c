#include<stdio.h>
#include<math.h>

void main()
{
    float a,b,c,area,s;
    printf("Enter the length of the sides: ");
    scanf("%f %f %f",&a,&b,&c);
    if (a+b > c && b+c > a && c+a > b)
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area is %f", area) ;  
}