#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int a,num,sum=0;
    printf("Enter a number:::");
    scanf("%d",&num);
    for(;num!=0;num=num/10)
    {
        a=num%10;
        sum=sum+a;
    }
    printf("%d",sum);
    
    getch();
}
