#include <stdio.h>
int main()
{
   FILE *fptr;
   char s[100];
   fptr = fopen("mylog.txt", "w");
   printf("Enter something to be appended \n");
   scanf("%s", s); /*read from keyboard*/
   fprintf(fptr, "%s",s); /*  write to file*/
   fclose(fptr);
}
