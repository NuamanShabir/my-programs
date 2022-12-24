#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b;
    printf("Enter a number:::");
    scanf("%d",&a);

    for(b=1;b<=10;b++)
    {
        printf("%d x %d = %d\n",a,b,a*b);
    }
    getch();
}