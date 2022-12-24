//swapping of two numbers.
#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("enter two values of a,b:");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d\nb=%d",a,b);
}