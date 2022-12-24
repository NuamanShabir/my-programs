#include<stdio.h>
void even_odd(int a);
void main()
{
    int a;
    printf("Enter the number:");
    scanf("%d",&a);
    even_odd(a);
}
void even_odd(int x)
{
    if(x%2==0)
    {
        printf("%d is even",x);

    }
    else
    printf("%d is odd",x);
}