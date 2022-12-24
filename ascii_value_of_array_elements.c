#include<stdio.h>
#include<string.h>
void main()
{
    char array[10];
    int i;
    printf("Enter the string::");
    gets(array);
    for(i=0;array[i]!='\0';i++)
    {
        printf("%d\t",array[i]);
    }
}