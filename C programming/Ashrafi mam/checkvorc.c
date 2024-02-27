#include <stdio.h>

int main()
{
    char cha;

    printf("\nEnter a Alphabet to check if it's Vowel or Consonant:  ");
    scanf("%c",&cha);

    if(cha<=65 || cha>=122)
       {
        printf("Enter Alphabet not other characters\n");
       }
     else
       {
        switch(cha)
        {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a Vowel\n",cha);
                break;
            default:
                printf("%c is a Constant\n",cha);
                break;
            }
        }
    return 0;
}

