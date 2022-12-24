#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int p,n,i;
    float r,si;
    for(i=0;i<3;i++)
    {
        printf("\nEnter the principal amount:");
        scanf("%d",&p);
        printf("Enter the number of years:");
        scanf("%d",&n);
        printf("Enter the rate of interest:");
        scanf("%f",&r);
        si=p*n*r/100;
        printf("simple interest =%f ",si);
    }
    
    getch();
}
