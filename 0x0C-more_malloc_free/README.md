0x0C. C - More malloc, free

**#0-malloc_checked.c**
*Write a function that allocates memory using malloc.
Prototype: void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.
The function takes a single argument, b, which is the number of bytes to allocate. It returns a pointer to the allocated memory if malloc() is successful, and terminates the process with a status value of 98 if it fails.
Note that this implementation uses the exit() function from the stdlib.h library to terminate the process. The status value of 98 indicates that the program encountered an error related to memory allocation.*
