/*
    Quick Sort
    -   Quick sort is a divide and conquer algorithm.
    -   It works by selecting a 'pivot' element from the array and partitioning the other elements into two sub-arrays according to whether they are less than or greater than the pivot.
    -   The sub-arrays are then sorted recursively.
    -   This can be done in-place, requiring small additional amounts of memory to perform the sorting.
    -   It is more efficient than bubble sort, selection sort and insertion sort.
    -   The worst case time complexity of quick sort is O(n^2) but on average it is O(nlogn).
    -   The space complexity of quick sort is O(logn).
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void quickSort(int array[], int l, int r)
{
    if(r-l <= 1)
        return;
    int low = l+1;
    for(int high=l+1; high<r; ++high)
    {
        if(array[high] < array[l])
        {
            int temp = array[low];
            array[low] = array[high];
            array[high] = temp;
            low++;
        }
    }
    int temp = array[l];
    array[l] = array[low-1];
    array[low-1] = temp;
    quickSort(array,l,low-1);
    quickSort(array,low,r);
    return;
}

int main()
{
    int* array = malloc(10*sizeof(int));
    srand(time(NULL));
    for(int i=0; i<10; ++i)
        array[i] = rand()%100;
    printf("Elements of the array before sorting: ");
    for(int i=0; i<10; ++i)
        printf("%d ",array[i]);
    quickSort(array,0,10);
    printf("\nElements of the array after sorting: ");
    for(int i=0; i<10; ++i)
        printf("%d ",array[i]);
    free(array);
    return 0;
}