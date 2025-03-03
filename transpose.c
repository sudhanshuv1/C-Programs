/*
    Find the transpose of a matrix.
    Transpose of a matrix is obtained by changing rows to columns and columns to rows.
*/

#include<stdio.h>
#include<stdlib.h>

int** transpose(int** array, int r, int c)
{
    int** newArray = malloc(c*sizeof(int*));
    for(int i=0; i<c; ++i)
        newArray[i] = malloc(r*sizeof(int));
    for(int i=0; i<r; ++i)
        for(int j=0; j<c; ++j)
            newArray[j][i] = array[i][j];
    return newArray;
}

int main()
{
    int rows,columns;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);
    int** array = malloc(rows*sizeof(int*));
    printf("Enter the elements of the array: \n");
    for(int i=0; i<rows; ++i)
    {
        array[i] = malloc(columns*sizeof(int));
        for(int j=0; j<columns; ++j)    
            scanf("%d", &array[i][j]);
    }
        
    int** newArray = transpose(array,rows,columns);
    printf("Transpose of the array is: \n");
    for(int i=0; i<columns; ++i)
    {
        for(int j=0; j<rows; ++j)    
            printf("%d ",newArray[i][j]);
        printf("\n");
    }
    for(int i=0; i<columns; ++i)
        free(newArray[i]);
    free(newArray);
    for(int i=0; i<rows; ++i)
        free(array[i]);
    free(array);
    return 0;
}

