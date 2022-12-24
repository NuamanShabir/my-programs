#include <stdio.h>
void main()
{
    int n,sum=0,a,i;
    printf("Enter a number::");
    scanf("%d",&n);
    i=n;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        sum=sum+(a*a*a);
    }
    if (sum==i)
    {
        printf("armstrong number");

    }
    else
    printf("not armstrong"); 
}