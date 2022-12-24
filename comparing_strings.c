#include<stdio.h>
#include<string.h>
void compare();
void main()
{
    compare();
}
void compare()
{
    int len_x,len_y,i,j,flag=0;
    char x[50],y[50];
    printf("enter two strings:");
    gets(x);
    gets(y);
    len_x=strlen(x);
    len_y=strlen(y);
    if(len_x==len_y)
    {
        i=0,j=0;
        while((x[i]!='\0')&&(y[j]!='\0'))
        {
            if(x[i]==y[j])
            {
                i++,j++;
            }
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("same.");
        }
        else
        {
            printf("not same.");
        }
    }
    else
    {
        printf("Not comparable.");
    }
}