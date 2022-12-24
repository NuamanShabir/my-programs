/* i do not understand the logic */
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int num,fact=1;
    printf("Enter a number:::");
    scanf("%d",&num);
    for(;num!=0;num--)
    {
        fact=num*fact;
    }
    printf("factorial=%d",fact);
    getch();
}