#include<stdio.h>
#include<string.h>
void main ()
{
    int x[2][2],i,j;
    printf("Enter the elements of array::");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%d",& x[i][j]);
        }
    }
    printf("%d%d\n%d%d",x[0][0],x[0][1],x[1][0],x[1][1]);
}