#include <stdio.h>
#include <math.h>

int main()
{
    float x1,y1;
    float x2,y2;
    float sub1, sub2, sumAll = 0;
    printf("Input the first point | X and Y \n");
    scanf("%f %f",&x1,&y1);
    printf("Input the second point | X2 and Y2 \n");
    scanf("%f %f",&x2,&y2);
    
    
    sub1 = (x2 - x1) * (x2 - x1);
    sub2 = (y2 - y1) * (y2 - y1);
    sumAll = sub1 + sub2;
    
    float rz = sqrt(sumAll);
    
    printf("%0.4f",rz);
    

    return 0;
}