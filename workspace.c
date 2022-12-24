#include<stdio.h>
void primecomposite(int *);
void main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    primecomposite(&num);
}
void primecomposite(int *a)
{
    int j=2,x;
    x=*a;
    while(j<=*a)
    {
        if(*a%j==0)
        {
            break;
        }
        j++;
    }
    if(j==x)
    {
        printf("Number is a prime number.");
    }
    else
    {
        printf("number is not a prime number.");
    }

}