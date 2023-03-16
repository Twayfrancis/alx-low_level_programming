0x0C. C - More malloc, free

1. **#0-malloc_checked.c**

_Write a function that allocates memory using malloc.
Prototype: void *malloc_checked(unsigned int b);
Returns a pointer to the allocated memory
if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98.
The function takes a single argument, b, which is the number of bytes to allocate. It returns a pointer to the allocated memory if malloc() is successful, and terminates the process with a status value of 98 if it fails.
Note that this implementation uses the exit() function from the stdlib.h library to terminate the process. The status value of 98 indicates that the program encountered an error related to memory allocation._

2. **#1-string_nconcat.c**

_Write a function that concatenates two strings.
Prototype: char *string_nconcat(char *s1, char *s2, unsigned int n);
The returned pointer shall point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2, and null terminated
If the function fails, it should return NULL
If n is greater or equal to the length of s2 then use the entire string s2
if NULL is passed, treat it as an empty string
The function takes three arguments, s1, s2, and n, which represent the two strings to concatenate and the maximum number of bytes of s2 to concatenate to s1, respectively. If either s1 or s2 is NULL, the function treats it as an empty string.
The function determines the lengths of s1 and s2 and adjusts n if it's greater than or equal to the length of s2. Then, it allocates memory for the concatenated string, copies s1 to the beginning of the concatenated string, and copies the first n bytes of s2 to the end of the concatenated string. Finally, it adds a null terminator to the end of the concatenated string.
Note that this implementation uses the malloc() function from the stdlib.h library to allocate memory for the concatenated string._

3. **#2-calloc.c**

_Write a function that allocates memory for an array, using malloc.
Prototype: void *_calloc(unsigned int nmemb, unsigned int size);
The calloc function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory.
The memory is set to zero
If nmemb or size is 0, then calloc returns NULL
If malloc fails, then calloc returns NULL. 
The function takes two arguments, nmemb and size, which represent the number of elements to allocate and the size of each element in bytes, respectively. The function returns a pointer to the allocated memory, which is initialized to zero using the memset() function.
Note that this implementation uses the malloc() and memset() functions from the stdlib.h and string.h libraries, respectively._
