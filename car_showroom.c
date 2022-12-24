#include <stdio.h>
#include <conio.h>
void main()
{
    char ch;
    int car;
    float m3=0.65,m4=1.44,m5=1.74,m6=1.76,m8=2.23;
    float sport=1.64,velar=0.7987,discovery=0.88,defender=0.8072,evoque=0.72;
    float thar=13.58,scorpio=12,bolero=10;
    float alto=4,eeco=4.7,swift=6,brezza=7.9;
    printf("ENTER\nA OR a  for BMW\nB or b for LAND ROVER\nC or c for MAHINDRA\nD or d for SUZUKI\n:::");
    scanf("%c",&ch);
    if(ch=='A'||ch=='a')
    {
        printf("\nWhich car do u want to buy?\n(1 for m3,2 for m4,3 for m5,4 for m6,5 for m8.)::");
        scanf("%d",&car);
        switch(car)
        {
            case 1:
            printf("The car u have selected is BMW M3 and the price of the car is %.2f crore",m3);
            break;
            case 2:
            printf("The car u have selected is BMW M4 and the price of the car is %.2f crore",m4);
            break;
            case 3:
            printf("The car u have selected is BMW M5 and the price of the car is %.2f crore",m5);
            break;
            case 4:
            printf("The car u have selected is BMW M6 and the price of the car is %.2f crore",m6);
            break;
            case 5:
            printf("The car u have selected is BMW M8 and the price of the car is %.2f crore",m8);
            break;
            default:
            printf("INVALID INPUT");
        }
    }
    else if(ch=='B'||ch=='b')
    {
        printf("\nWhich car do u want to buy?\n(1 for sport,2 for velar,3 for discovery,4 for defender,5 for evoque)::");
        scanf("%d",&car);
        switch(car)
        {
            case 1:
            printf("The car u have selected is range rover sport and the price is %.2f crore",sport);
            break;
            case 2:
            printf("The car u have selected is range rover velar and the price is %.2f crore",velar);
            break;
            case 3:
            printf("The car u have selected is range rover discovery and the price is %.2f crore",discovery);
            break;
            case 4:
            printf("The car u have selected is range rover defender and the price is %.2f crore",defender);
            break;
            case 5:
            printf("The car u have selected is range rover evoque and the price is %.2f crore",evoque);
            break;
            default:
            printf("INVALID INPUT");
        }
    }
    else if(ch=='C'||ch=='c')
    {
        printf("")
        ;
    }
    else if (ch=='D'||ch=='d')
    {
        ;   
    }
    else
    printf("INVALID INPUT");



}