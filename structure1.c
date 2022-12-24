#include<stdio.h>
#include<string.h>
struct nuaman
{
    char name[20],class [20];
    int age;

}obj;
void main()
{
    printf("Enter your name:");
    gets(obj.name);
    printf("Enter ur class:");
    gets(obj.class);
    printf("Enter ur age:");
    scanf("%d",&obj.age);
    printf("your name is ");
    puts(obj.name);
    printf("your class is");
    puts(obj.class);
    printf("and ur age is %d",obj.age);
    
}