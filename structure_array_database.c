#include<stdio.h>
#include<string.h>
struct employee_database
    {
        int employee_id;
        char employee_name;
        char department_name;
    }obj[10];
void main()
{
    int i;    
    for (i=0;i<=9;i++)
    {
        printf("enter the name of the employee:");
        gets(obj[i].employee_name);
        printf("Enter the id of the employee:");
        scanf("%d",&obj[i].employee_id);
        printf("Enter the department of the employee:");
        gets(obj[i].department_name);
    }
    for (i=0;i<=9;i++)
    {
        puts(obj[i].employee_name);
        printf("%d",obj[i].employee_id);
        puts(obj[i].department_name);
    }
}