#include <stdio.h>
#include <stdlib.h>
#include<String.h>
int main()
{
 char sentence[40]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
   FILE *fptr;

   fptr = fopen("alphabet.txt", "w");
   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
 fprintf(fptr,"%s", sentence);
   fclose(fptr);
fprintf("file created")
   return 0;
}
