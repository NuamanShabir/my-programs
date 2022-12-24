#include<stdio.h>
void main()
{
    int x[2][2],i,j,sum=0;
    printf("Enter the elements of array.");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",& x[i][j]);
            sum=sum+x[i][j];
        }
    }
    printf("sum of elements=%d",sum);
}