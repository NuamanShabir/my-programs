#include<stdio.h>
void indian();
void french();
int main()
{
    char a;
    printf("Enter 'F OR f' for french and 'I or i' for indian::");
    scanf("%c",&a);
    if(a=='I' || a=='i')
    {
        indian();
    }
    else if(a=='F'||a=='f')
    {
        french();
    }
    else 
    {
        printf("INVALID INPUT");
    }

}
void indian()
{
    printf("Namaste");
}
void french()
{
    printf("Bonjour");
}