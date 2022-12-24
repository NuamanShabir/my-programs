#include<stdio.h>
void sum(int,int);
void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    sum(a,b);
}
void sum(int x,int y)
{
    printf("sum of %d and %d is %d .",x,y,x+y);
}