/*
    File Handling in C
    - File Handling is an important part of any application.
    - It is used to store data permanently in a non-volatile memory (e.g. Hard Disk).
    - In C, we can perform file handling using the following functions:
        1. fopen() - To open a file.
        2. fclose() - To close a file.
        3. fprintf() - To write data to a file.
        4. fscanf() - To read data from a file.
        5. fputc() - To write a character to a file.
        6. fgetc() - To read a character from a file.
        7. fputs() - To write a string to a file.
        8. fgets() - To read a string from a file.
        9. fseek() - To set the file position.
        10. ftell() - To get the current file position.
        11. rewind() - To set the file position to the beginning of the file.
        12. feof() - To check if the end of the file has been reached.
    - In this program, we will write data to a file and then read data from the file.
*/

#include<stdio.h>

int main()
{
    FILE* filePointer;
    const char dataToBeWritten[50] = "HELLO HELLO";
    filePointer = fopen("file.txt","w");
    if(filePointer == NULL)
    {
        printf("file.txt failed to open.");
    }
    else
    {
        fputs(dataToBeWritten,filePointer);
        fputs("\n",filePointer);
        printf("Data successfully written.");
    }
    fclose(filePointer);

    char dataToBeRead[50];
    filePointer = fopen("file.txt","r");
    if(filePointer == NULL)
    {
        printf("file.txt failed to open.");
    }
    else
    {
        printf("\nData in file.txt: \n");
        while(fgets(dataToBeRead,50,filePointer) != NULL)
        {
            printf("%s",dataToBeRead);
        }
    }
    fclose(filePointer);
    return 0;
}