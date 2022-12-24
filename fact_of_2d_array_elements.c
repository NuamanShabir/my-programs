#include<stdio.h>
void main()
{
    int x[2][2],i,j,fact,k;
    printf("Enter the elements of the matrix::");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("factorials of elements::\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            fact=1;
            for(k=x[i][j];k>0;k--)
            {
                fact=fact*k;
            }
            printf("fact=%d\n",fact);
            
        }
    }
}