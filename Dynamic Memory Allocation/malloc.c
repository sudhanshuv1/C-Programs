/*
	malloc() function in C
	The malloc() function in C is used to allocate a block of memory dynamically. The C library function void *malloc(size_t size) allocates the requested memory and returns a pointer to it. The void pointer returned by the malloc() function is a pointer to the memory block which is suitably aligned for any kind of variable. The malloc() function allocates size bytes and returns a pointer to the first byte of the allocated memory block. The content of the newly allocated block of memory is not initialized, remaining with indeterminate values.

	Syntax of malloc() function in C language:
	void *malloc(size_t size);

	Parameters:
	size: It is the size of the memory block, in bytes.

	Return Value:
	The malloc() function returns a pointer to the allocated memory, or NULL if the request fails.

	Example of malloc() function in C language:
	#include <stdio.h>
	#include <stdlib.h>

	int main()
	{
		int* ptr;
		int n, i;

		printf("Enter number of elements:");
		scanf("%d",&n);
		printf("Entered number of elements: %d\n", n);

		ptr = (int*)malloc(n * sizeof(int));

		if (ptr == NULL) {
			printf("Memory not allocated.\n");
			exit(0);
		}
		else {

			printf("Memory successfully allocated using malloc.\n");

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
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int* ptr;
	int n, i;

	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Entered number of elements: %d\n", n);

	ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		printf("Memory successfully allocated using malloc.\n");

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
