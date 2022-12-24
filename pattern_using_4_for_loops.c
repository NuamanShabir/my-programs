#include <stdio.h>
void main()
{
    int i,j;
    for(i=68;i>=65;i--)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c\t",j);
        }
        if(j!=66)
             
        
        {
        printf("\n");
        }
    }
    for(i=65;i<=68;i++)
    {
        for(j=65;j<=i;j++)
        {
            if(i==65&&j==65)
            {
                continue;
            }
            printf("%c\t",j);
        }
        printf("\n");
    }
} 