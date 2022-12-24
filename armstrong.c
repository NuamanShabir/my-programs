#include <stdio.h>
void main()
{
    int num,i,a,sum=0;
    printf("Enter a number::");
    scanf("%d",&num);
    num=i;
    for(;num>0;)
    {
        a=num%10;
        num=num/10;
        sum=sum+(a*a*a);

    }
    if(sum==i)
    printf ("armstrong number");
    else 
    printf("not armstrong number");
    
}