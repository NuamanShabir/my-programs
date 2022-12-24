/*ASCII AND CHARACTERS FROM 0 TO 255 */
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int i=0;
    while(i<=255)
    {
        printf("ASCII value = %d and character equivalent = %c \n",i,i);
        i++;
    }
    getch();
}