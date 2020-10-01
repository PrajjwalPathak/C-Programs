#include<stdio.h>

int fact(int a)
{
    if(a==0 || a==1)
    {
        return 1;
    }
    else
    {
        return (fact(a-1)*a);
    }
    
}
int c(int n,int r)
{
    int t1=fact(n);
    int t2=fact(n-r);
    int t3=fact(r);
    return t1/(t2*t3);
}
int main()
{
    int n,r,answer;
    scanf("%d %d",&n,&r);
    answer=c(n,r);
    printf("%d",answer);

}