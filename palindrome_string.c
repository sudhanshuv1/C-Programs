/*
    Check if a string is palindrome or not.
    A string is palindrome if it reads the same forwards and backwards.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int isPalindrome(char string[])
{
    int flag=1, n=strlen(string);
    for(int i=0; i<n/2; ++i)
    {
        if(string[i] != string[n-i-1])
        {
            flag=0;
            break;
        }
    }
    return flag;
}

int main()
{
    int size;
    printf("Enter the number of characters: ");
    scanf("%d", &size);
    char *string = calloc(size,sizeof(char));
    printf("Enter a string of %d characters: ",size);
    scanf("%s",string);
    if(isPalindrome(string))
        printf("'%s' is a palindrome.", string);
    else
        printf("'%s' is not a palindrome.", string);
    return 0;
}
