#include<stdio.h>
#include<conio.h>
void main()
{
    int num,pos=0,neg=0,zeros=0;
    char ch;
    do
    {
        printf("Enter a number:");
        scanf("%d",num);
        if(num>0)
        {
            pos++;
        }
        else if(num<0)
        {
            neg++;
        }
        else
        {
            zeros++;
        }
        fflush(stdin);
        printf("Do u wan't to continue(y/Y or N/n)");
        scanf("%c",&ch);
    }while(ch=='Y' || ch=='y');
    printf("number of positive numbers entered=%d",pos);
    printf("number of negative numbers entered=%d",neg);
    printf("number of zeros =%d",zeros);
}