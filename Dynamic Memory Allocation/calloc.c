/*
	calloc() function in C
	The calloc() function in C is a predefined library function which is used to allocate memory dynamically. The calloc() function is used to allocate multiple blocks of memory, each of the same size and initializes all its bits to zero. The calloc() function in C is used to allocate memory for an array of elements. The syntax of the calloc() function is given below.
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
	}

	return 0;
}
