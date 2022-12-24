#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    printf("sum of %d and %d is %d",a,b,a+b);
}