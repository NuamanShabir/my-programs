#include<stdio.h>
void main()
{
    int num,remainders,equivalent=0,a,octal=0;
    printf("Enter a number:");
    scanf("%d",&num);
    while(num>0)
    {
        remainders=num%8;
        num=num/8;  
        equivalent=(equivalent*10)+remainders;
    }
    while(equivalent>0)
    {
        a=equivalent%10;
        octal=(octal*10)+a;
    }
    printf("Octal equivalent =%d",octal);
}