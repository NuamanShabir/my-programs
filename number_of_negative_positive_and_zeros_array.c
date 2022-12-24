//wrong program.
#include<stdio.h>
void main()
{
    int numbers[10];
    int pos_count=0,neg_count=0,zeros_count=0,i;
    for (i=0;i<=10;i++)
    {
        printf("Enter number:");
        scanf("%d",&numbers[i]);
    }
    for(i=0;i<=10;i++)
    {
        if(numbers[i]>0)
        {
            pos_count++;
        }
        else if(numbers[i]<0)
        {
            neg_count++;
        }
        else if(numbers[i]==0)
        {
            zeros_count++;
        }
    }
    printf("number of positive numbers=%d",pos_count);
    printf("number of negative numbers =%d",neg_count);
    printf("number of zeros entered=%d",zeros_count);
}