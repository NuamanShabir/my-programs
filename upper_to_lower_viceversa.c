#include<stdio.h>
void main()
{
    char x[5];
    int i;
    printf("Enter five characters::\n");
    for(i=0;i<=4;i++)
    {
        scanf("%c",&x[i]);
    }
    for (i=0;i<=4;i++)
    {
        if (x[i]>=65 && x[i]<=90)
        {
            x[i]=x[i]+32;
        }
        else if (x[i]>=97 && x[i]<=122)
        {
            x[i]=x[i]-32;
        }
        
        printf("%c\n",x[i]);
    }
    
}