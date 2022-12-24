#include<stdio.h>
void main()
{
    int num,a,rev=0,i;
    printf("Enter a number:");
    scanf("%d",&num);
    i=num;
    while(num>0)
    {
        rev=(rev*10)+num%10;
        num=num/10;
    }
    if (rev==i)
    {
        printf("PALINDROME NUMBER.");
    }
    else
    {
        printf("not a palindrome number.");
    }
}