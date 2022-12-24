#include <stdio.h>
#include <conio.h>
void main()
{
    int a;
    printf("enter a number:::");
    scanf("%d",&a);
    switch(a>=0)
    {
        case 1:
        printf("number is positive.");
        break;
        default:
        printf("number is negative.");
    }
    getch();
}