#include<stdio.h>
void main()
{
    char alphabet_array[3];
    int i;
    printf("Enter three characters:::");
    for ( i = 0; i <= 2; i++)
    {
        scanf("%c",&alphabet_array[i]);
        switch (alphabet_array[i])
        {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("vowel=%c\n",alphabet_array[i]);
        break;
        default:
            printf("consonants=%c\n",alphabet_array[i]);
        }
    }
    
}