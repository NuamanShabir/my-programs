#include <stdio.h>
void main()
{
    int ul,ll,fact=1,num;
    printf("Enter the upper limit::");
    scanf("%d",&ll);
    printf("Enter the lower limit::");
    scanf("%d",&ul);
    num=ll;
    for(;num<=ul;num++)
    {
        for(;num!=0;num--)
        {
            fact=fact*num;
        }
        printf("%d\n",fact);
    }
}