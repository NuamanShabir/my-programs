#include<stdio.h>
int calsum(int a,int b);
void main()
{
    int a,b,sum;
    printf("Enter the first number::");
    scanf("%d",&a);
    printf("Enter the second number::");
    scanf("%d",&b);
    sum=calsum(a,b);
    printf("sum=%d",sum);

}
int calsum(int a, int b)
{
    return(a+b);
}