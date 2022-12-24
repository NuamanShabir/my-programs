#include<stdio.h>
void main()
{
    int array[5],i,element_sum=0;
    printf("Enter the  five elements of array::");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&array[i]);
        element_sum=element_sum+array[i];
    }
    printf("sum of elements of array=%d",element_sum);
}