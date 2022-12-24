#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i,j;
    float sum=0.0,fact;
    printf("Enter the number of times:::");
    scanf("%d",n);
    for(i=1;i<=n;i++)
    {
        fact=1.0;
        for(j=1;j<=i;j++)
        {
            fact=fact*j;
        }
    sum=sum+(i/fact);
    }
    printf("sum of series upto %d =%f",n,sum);
    getch();
}