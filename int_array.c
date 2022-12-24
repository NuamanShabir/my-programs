#include <stdio.h>
void main()
{
    int array[]={34,45,43,234};
    printf("%d",array[3]);

//adding elements to array

    int myNumbers[5];//5 is array size.
    //adding numbers to array
    myNumbers[0]=45;
    myNumbers[1]=3;
    myNumbers[2]=65;
    myNumbers[3]=6;
    myNumbers[4]=67;
    myNumbers[5]=56;
    //if i add more it will overflow.
    printf("\n%d",myNumbers[2]);
}