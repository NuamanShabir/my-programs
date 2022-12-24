#include<stdio.h>
#include<string.h>
void main()
{
    char x[30],y[20];
    printf("Enter two string:");
    gets(x);
    gets(y);
    strcat(x," ");
    strcat(x,y);
    puts(x);

}