#include <stdio.h>
void main()
{
    char character_name[5];
    printf("Enter the name?:::");
    scanf("%s",character_name);
    if(character_name=="Nuaman")
    printf("My name is %s",character_name);
    else
    printf("I cannot tell my name.");
}