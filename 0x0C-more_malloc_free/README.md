## Learning More Malloc, Free
In C, malloc, calloc, realloc, and free are functions used for dynamic memory allocation and deallocation. They allow you to allocate memory at runtime and manage memory efficiently. Here's an explanation of each of these functions:

## Malloc:

* Function Signature: void *malloc(size_t size);
* Purpose: It is used to allocate a block of memory of the given size in bytes.
* Return Value: On success, it returns a pointer to the first byte of the allocated memory block. On failure, it returns a NULL pointer.
* Usage: The malloc function is commonly used to allocate memory for arrays, structures, and other data types whose size is determined at runtime.

Example:

	int *array;
	size_t num_elements = 5;
	array = (int *)malloc(num_elements * sizeof(int));

	if (array != NULL) {
		// Use the allocated memory
	}
## Calloc:

* Function Signature: void *calloc(size_t num_elements, size_t element_size);
* Purpose: It is used to allocate memory for an array with the specified number of elements, each of a given size.
* Return Value: On success, it returns a pointer to the first byte of the allocated memory block, with the memory initialized to zero. On failure, it returns a NULL pointer.
* Usage: calloc is commonly used when you need to allocate memory for an array, and you want the memory to be initialized to zero.

Example:

	int *array;
	size_t num_elements = 5;
	array = (int *)calloc(num_elements, sizeof(int));

	if (array != NULL) {
		// Use the allocated memory
	}
## Realloc:

* Function Signature: void *realloc(void *ptr, size_t new_size);
* Purpose: It is used to change the size of an already allocated memory block.
* Return Value: On success, it returns a pointer to the first byte of the resized memory block. On failure, it returns a NULL pointer. If the ptr argument is NULL, then realloc behaves like malloc.
* Usage: realloc is used when you need to resize an existing dynamically allocated memory block, for example, when you want to expand or shrink an array.

Example:

	int *array;
	size_t num_elements = 5;
	array = (int *)malloc(num_elements * sizeof(int));

	// ... use the allocated memory

	size_t new_num_elements = 10;
	array = (int *)realloc(array, new_num_elements * sizeof(int));

	if (array != NULL) {
		// Use the resized memory
	}
## Free:

* Function Signature: void free(void *ptr);
* Purpose: It is used to deallocate a block of memory previously allocated using malloc, calloc, or realloc.
* Return Value: None. The function does not return a value.
* Usage: You should always use free to release dynamically allocated memory when it is no longer needed. Failing to do so can lead to memory leaks.

Example:

	int *array;
	size_t num_elements = 5;
	array = (int *)malloc(num_elements * sizeof(int));

	if (array != NULL) {
		// Use the allocated memory

		// Free the memory when done using it
		free(array);
	}

Remember to use free only on dynamically allocated memory, and never use it on stack-allocated variables or memory that has not been allocated with malloc, calloc, or realloc. Also, avoid dereferencing a pointer after it has been freed, as it leads to undefined behavior.

