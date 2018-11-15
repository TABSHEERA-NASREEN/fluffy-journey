#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE * fPtr;

    char ch;
    fPtr = fopen("data.txt", "r");
    if(fPtr == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check whether file exists and you have read privilege.\n");
        exit(EXIT_FAILURE);
    }

    do 
    {
        ch = fgetc(fPtr);
if(ch=='b')
{
        putchar(ch);
}
    } while(ch != EOF); 
    fclose(fPtr);

    return 0;
}
