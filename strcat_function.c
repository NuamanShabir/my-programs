#include<stdio.h>
#include<string.h>
void main()
{
    char x[50],y[50],z[60];
    printf("enter two strings:");
    gets(x);
    gets(y);
    z=strcat(x,y);
    puts(z);

}