#include<stdio.h>
int sum_of_digits();
void main()
{
    int x;
    x=sum_of_digits();
    printf("sum of digits=%d",x);
}
int sum_of_digits()
{
    int num,a,sum=0;
    printf("Enter any number:");
    scanf("%d",&num);
    while(a>0)
    {
        a=num%10;
        num=num/10;
        sum=sum+a;
    }
    return(sum);
}