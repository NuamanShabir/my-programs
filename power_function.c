#include<stdio.h>
void power();
void main()
{
    power();
}
void power()
{
    int x,y,value=1,i;
    printf("Enter the base and power:");
    scanf("%d%d",&x,&y);
    i=y;
    while(y>0)
    {
        value=value*x;
        y--;
    }
    printf("value of %d to the power %d is %d",x,i,value);
}