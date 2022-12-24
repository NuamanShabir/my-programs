#include<stdio.h>
void main()
{
    int x[2][2],y[2][2],i,j,sum[2][2];
    printf("Enter the elements of first matrix::");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    printf("Enter the elements of second matrix::");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            sum[i][j]=x[i][j]+y[i][j];
        }
    }
    printf("Sum of two matrices::\n");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }

}