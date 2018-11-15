#include <stdio.h>
int main()
{
   FILE *fptr;
   char s[100];
   fptr = fopen("file1.txt", "w");
   printf("Enter a string\n");
   scanf("%s", s); /*read from keyboard*/
   fprintf(fptr, "%s",s); /*  write to file*/
   fclose(fptr);
}
