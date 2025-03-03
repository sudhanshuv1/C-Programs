/*
	realloc() function in C
	The realloc() function in C is a predefined library function which is used to dynamically allocate memory. The realloc() function in C is used to resize the previously allocated memory. The syntax of the realloc() function is given below.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int* ptr;
	int n, i;

	n = 5;
	printf("Enter number of elements: %d\n", n);

	ptr = (int*)calloc(n, sizeof(int));

	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		printf("Memory successfully allocated using calloc.\n");

		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}

		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}

		n = 10;
		printf("\n\nEnter the new size of the array: %d\n", n);

		ptr = (int*)realloc(ptr, n * sizeof(int));

		printf("Memory successfully re-allocated using realloc.\n");

		for (i = 5; i < n; ++i) {
			ptr[i] = i + 1;
		}

		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}

		free(ptr);
	}

	return 0;
}
