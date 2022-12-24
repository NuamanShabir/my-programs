#include<stdio.h>
#include<string.h>
void concatenation();
void main()
{
    concatenation();
}
void concatenation()
{
    char x[50],y[50],z[60];
    int i,j;
    printf("Enter two strings:");
    gets(x);
    gets(y);
    i=0,j=0;
    while(x[i]!='\0')
    {
        z[j]=x[i];
        i++,j++;
    }
    z[j]=' ';
    j++;
    i=0;
    while(y[i]!='\0')
    {
        z[j]=y[i];
        i++,j++;
    }
    z[j]='\0';
    puts(z);
}