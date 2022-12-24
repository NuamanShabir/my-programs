#include<stdio.h>
#include<math.h>
void main()
{
    int scores[3]={34,45,56};
    printf("%d\t",scores[0]);
    printf("%d\t",scores[1]);
    printf("%d\t",scores[2]);
    //or
    float score[4];
    score[0]=90.0;
    score[1]=90.0;
    score[2]=90.0;
    score[3]=90.0;
    score[4]=90.0;
    //average of score
    printf("\n%f",(score[0]+score[1]+score[2]+score[3]+score[4])/5);

}