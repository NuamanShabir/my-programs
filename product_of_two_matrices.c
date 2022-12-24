#include<stdio.h>
void main()
{
    int x[2][2],y[2][2],i,j,pro[2][2];
    printf("Enter elements of first matrix::");
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
    printf("product of two matrices:");
    
}