#include<stdio.h>
float sum(float a,float b);
float difference(float a, float b);
float product(float a, float b);
float  division(float a,float b);
void main()
{
    float a,b;
    printf("Enter two numbers:");
    scanf("%f%f",&a,&b);
    printf("Sum of %.2f and %.2f is %.2f \n",a,b,sum(a,b));
    printf("difference of %.2f and %.2f is %.2f \n",a,b,difference(a,b));
    printf("product of %.2f and %.2f is %.2f \n",a,b,product(a,b));
    printf("%.2f divided by %.2f is %.2f \n",a,b,division(a,b));
}
float sum(float a,float b)
{
    return(a+b);
}
float difference(float a,float b)
{
    return(a-b);
}
float product(float a, float b)
{
    return(a*b);
}
float division(float a , float b)
{
    return(a/b);
}