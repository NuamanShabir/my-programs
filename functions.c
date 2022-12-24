#include<stdio.h>
#include<math.h>
int calsum(int x,int y);
int multiplication(int c,int e);
int main()
{
    int a,b,sum,product;
    printf("enter first number(a)::");
    scanf("%d",&a);
    printf("enter the second number(b)::");
    scanf("%d",&b);
    sum=calsum(a,b);
    product=multiplication(a,b);
    printf("sum =%d ",sum);
    printf("product=%d",product);
}
int calsum(int x,int y)
{
    int d;
    d=x+y;
    return(d);

}
int multiplication(int c,int e)
{
    int h;
    h=c*e;
    return(h);
}