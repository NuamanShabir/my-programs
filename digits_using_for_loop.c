#include <stdio.h>
void main()
{
    int i,j,num;
    for (i=1;i<=4;i++)
    {
        num=1;
        for (j=1;j<=i;j++)
        {
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
}