#include<stdio.h>
int armstrong();
void main()
{
    int x;
    x=armstrong();
    if(x==1)
    {
        printf("Armstrong.");
    }
    else
    {
        printf("Not armstrong.");
    }
}
int armstrong()
{
    int a,num,sum=0,i;
    printf("Enter a number:");
    scanf("%d",&num);
    i=num;
    while(num>0)
    {
        a=num%10;
        num=num/10;
        sum=sum+(a*a*a);
    }
    if(sum==i)
    {
        return(1);
    }
    else
    {
        return(2);
    }
}