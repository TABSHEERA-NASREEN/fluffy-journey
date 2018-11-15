#include <stdio.h>
main()
{

    FILE *myFile;
    myFile = fopen("somenumbers.txt", "r");

    //read file into array
    int numberArray[16];
    int i;

    for (i = 0; i < 16; i++)
    {
        fscanf(myFile, "%d", &numberArray[i]);
    }
    printf("NUMBERS ARE STORED IN ARRAY AS \n");

    for (i = 0; i < 16; i++)
    {
        printf("%d\n\n", numberArray[i]);
    }


}

