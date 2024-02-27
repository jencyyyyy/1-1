#include<stdio.h>

int main()
{
   int marks;

   printf("\nEnter The Marks Between 0 To 100:");
   scanf("%d", &marks);

   if(marks>100 || marks<0)
   {
    printf("\nInvalid Mark\n");
   }
   else
   {
       switch(marks/10)
       {
           case 10 :
           case 9 :
                printf("\nYour Grade Is: A+ or Excellent\n");
                break;
           case 8 :
           case 7 :
                printf("\nYour Grade Is: A or Very Good\n" );
                break;
           case 6 :
                printf("\nYour Grade Is: B or Fair\n" );
                break;
           case 5 :
           case 4 :
                printf("\nYour Grade Is: C or Pass\n86");
                break;
           default :
               printf("\nYou Grade Is: F or Fail\n");
       }
    }
   return 0;
}
