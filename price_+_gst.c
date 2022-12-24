#include<stdio.h>
void finalprice(float value);
void main()
{
    int value;
    printf("Enter the price:::");
    scanf("%d",&value);
    finalprice(value);
}
void finalprice(float value)
{
    value=value+(value*0.18);
    printf("%.2f",value);
}