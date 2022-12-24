/* not working */
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int hours,n,i=1;
    float otpay;
    printf("Enter the number of employees:::");
    scanf("%d",&n);
    printf("Enter the number of working hours:::");
    scanf("%d",&hours);
    while(i<=n)
    {
        if((hours-40)>0)
        {
            otpay=(hours-40)*120;
        }
        else
        {
            otpay=0;
        }
        printf("Overtime pay=%d\n",otpay);
        i++;
    }
    getch();
}