#include<stdio.h>
void main()
{
    char x[2][2];
    int i,j;
    printf("Enter four characters::");
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            scanf("%c",x[i][j]);
        }
    }
    printf("%c",x[2][2]);
}