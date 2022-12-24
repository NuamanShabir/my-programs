#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int num,i,fact;
    printf("Enter a number:::");
    scanf("%d",&num);
    fact=i=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
    printf("factorial=%d",fact);
    getch();
}