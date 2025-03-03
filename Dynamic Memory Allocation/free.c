/*
	free() function in C
	The free() function in C is used to deallocate the memory allocated using malloc() or calloc() functions.

	Syntax:
	free(ptr);

	Parameters:
	ptr: A pointer to the memory block that needs to be deallocated.

	Return Value:
	The free() function does not return any value.

	Example: How free() function works in C?
	#include <stdio.h>
	#include <stdlib.h>

	int main()
	{
		int *ptr, *ptr1;
		int n, i;

		n = 5;
		printf("Enter number of elements: %d\n", n);

		ptr = (int*)malloc(n * sizeof(int));

		ptr1 = (int*)calloc(n, sizeof(int));

		if (ptr == NULL || ptr1 == NULL) {
			printf("Memory not allocated.\n");
			exit(0);
		}
		else {

			printf("Memory successfully allocated using malloc.\n");

			free(ptr);
			printf("Malloc Memory successfully freed.\n");

			printf("\nMemory successfully allocated using calloc.\n");

			free(ptr1);
			printf("Calloc Memory successfully freed.\n");
		}

		return 0;
	}

	Output
	Enter number of elements: 5
	Memory successfully allocated using malloc.
	Malloc Memory successfully freed.

	Memory successfully allocated using calloc.
	Calloc Memory successfully freed.
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{

	int *ptr, *ptr1;
	int n, i;

	n = 5;
	printf("Enter number of elements: %d\n", n);

	ptr = (int*)malloc(n * sizeof(int));

	ptr1 = (int*)calloc(n, sizeof(int));

	if (ptr == NULL || ptr1 == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		printf("Memory successfully allocated using malloc.\n");

		free(ptr);
		printf("Malloc Memory successfully freed.\n");

		printf("\nMemory successfully allocated using calloc.\n");

		free(ptr1);
		printf("Calloc Memory successfully freed.\n");
	}

	return 0;
}
