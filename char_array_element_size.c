#include<stdio.h>
#include<string.h>
void main()
{
    char array[10];
    int i,length=0;
    printf("enter string::");
    gets(array);
    i=0;
    while(array[i]!='\0')
    {
        length++;
        i++;
    }
    printf("Length of elements entered in string=%d",length);

}