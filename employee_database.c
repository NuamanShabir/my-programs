#include<stdio.h>
#include<string.h>
struct database
{
    char name[20];
    int employee_id;
}obj[3];
void main()
{
    int i;
    printf("Enter the name and id of the employee:");
    for(i=0;i<=2;i++)
    {
        gets(obj[i].name);
        scanf("%d",&obj[i].employee_id);
    }
    for (i=0;i<=2;i++)
    {
        printf("employee name is :");
        puts(obj[i].name);
        printf("employee id is :%d",obj[i].employee_id);

    }
}