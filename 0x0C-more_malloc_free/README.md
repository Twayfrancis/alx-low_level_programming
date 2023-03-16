0x0C. C - More malloc, free

1. **#0-malloc_checked.c**

*Write a function that allocates memory using malloc.
Prototype: void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.

The function takes a single argument, b, which is the number of bytes to allocate. It returns a pointer to the allocated memory if malloc() is successful, and terminates the process with a status value of 98 if it fails.
Note that this implementation uses the exit() function from the stdlib.h library to terminate the process. The status value of 98 indicates that the program encountered an error related to memory allocation.*

3. **#2-calloc.c**

*Write a function that allocates memory for an array, using malloc.
Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
The _calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If nmemb or size is 0, then _calloc returns NULL
If malloc fails, then _calloc returns NULL. 

The function takes two arguments, nmemb and size, which represent the number of elements to allocate and the size of each element in bytes, respectively. The function returns a pointer to the allocated memory, which is initialized to zero using the memset() function.
Note that this implementation uses the malloc() and memset() functions from the stdlib.h and string.h libraries, respectively.*
