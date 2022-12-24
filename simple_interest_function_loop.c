#include<stdio.h>
void simple_interest(float,int,int);
void main()
{
    int p,t;
    float r;
    printf("Enter the values of p,r and t repectively:");
    scanf("%d%f%d",&p,&r,&t);
    simple_interest(r,p,t);
}
void simple_interest(float a,int b,int c)
{
    printf("simple interest= %.2f\n",a*b*c/100);
    main();
}