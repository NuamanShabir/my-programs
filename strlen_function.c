#include<stdio.h>
#include<conio.h>
int xstrlen(char *);
void main()
{
    char x[100];
    int len;
    printf("Enter a string:");
    gets(x);
    len=xstrlen(x);
    printf("length of string is %d .",len);
}
int xstrlen(char *c)
{
    int length=0;
    while(*c!='\0')
    {
        length++;
        c++;
    }
    return(length);
}