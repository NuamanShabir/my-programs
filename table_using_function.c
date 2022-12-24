#include<stdio.h>
void printTable(int n);
void main()
{
    int n;
    printf("Enter a number::");
    scanf("%d",&n);
    printTable(n);//n here is an argument or actual parameter

}
void printTable(int n)// n here is a parameter or formal parameter.
{
    for (int i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,i*n);
    }
}