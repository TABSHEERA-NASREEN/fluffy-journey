#include <stdio.h>
#include <stdlib.h>
int main()
{
    char c[1000];
    FILE *fptr;
fptr=fopen("myfile.txt","r");
    if (fptr == NULL)
    {
        printf("Error! opening file");
        exit(1);         
    }

    // reads text until newline 
    fscanf(fptr,"%[^\n]", c);

    printf("Data from the file:\n%s", c);
    fclose(fptr);
    
    return 0;
}
