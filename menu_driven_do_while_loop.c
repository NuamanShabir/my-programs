#include <stdio.h>
#include <conio.h>
void main()
{
    int a,b,sum,fact,ch;
    char choice;
    printf("1 for arithmetic operations\n2 for factorial");
    do
    {
        printf("\nEnter ur choice 1 or 2 :::");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        printf("Enter the first number:::");
        scanf("%d",&a);
        printf("Enter the second number::");
        scanf("%d",&b);
        printf("sum of %d and %d =%d\n",a,b,a+b);
        printf("%d minus %d =%d\n",a,b,a-b);
        printf("%d multiplied by %d = %d\n",a,b,a*b);
        printf("%d divided %d =%d\n",a,b,a/b);
            break;
        case 2:
        printf("Enter a number:::");
        scanf("%d",&a);
        fact=b=1;
        while(b<=a)
        {
            fact=fact*b;
            b++;
        }
        printf("Factorial=%d",fact);
        break;
        default:
        printf("INVALID INPUT.");
        }
    fflush(stdin);//this line is used when keyboard buffer is overflowing and is not letting u input more.
    printf("\nDo you want to continue(Y or y)::");
    scanf("%c",&choice);
    }while (choice=='Y'||choice=='y');
    
}