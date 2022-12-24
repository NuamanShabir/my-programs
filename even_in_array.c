#include<stdio.h>
void main()
{
    int array[5],i;
    printf("Enter the five elements of the array:::");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&array[i]);
        if(array[i]%2==0)
        {
            printf("Even=%d\n",array[i]);
        }
    }
}