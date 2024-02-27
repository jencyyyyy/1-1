#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    char ch;
    int wrd=0,charctr=0;
    char fname[50];
    printf("\n\n Count the number of words and characters in a file :\n");
	printf("---------------------------------------------------------\n");
	printf(" Input the filename to be opened : ");
	scanf("%s",fname);

    fptr=fopen(fname,"r");
    if(fptr==NULL)
     {
         printf(" File does not exist or can not be opened.");
      }
    else
        {
          ch=fgetc(fptr);
          printf(" The content of the file %s are :\n",fname);

          while(ch!=EOF)
            {
                printf("%c",ch);
                if(ch==' '||ch=='\n')
                    {
                        wrd++;
                    }
                    else
                    {
                        charctr++;
                    }
                ch=fgetc(fptr);
            }
        }
    fclose(fptr);

    fptr=fopen("output.txt","w");
    fprintf(fptr, "\n The number of words in the  file %s are : %d\n",fname,wrd);
    fprintf(fptr," The number of characters in the  file %s are : %d\n\n",fname,charctr);
    fclose(fptr);

    printf("\n\n\nCounting Done. Open output.txt file to see count");
}
