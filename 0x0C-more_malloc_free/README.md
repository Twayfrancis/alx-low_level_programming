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

4. **#3-array_range.c**

_Write a function that creates an array of integers.
Prototype: int *array_range(int min, int max);
The array created should contain all the values from min (included) to max (included), ordered from min to max
Return: the pointer to the newly created array
If min > max, return NULL
If malloc fails, return NULL
The function first checks if min is greater than max. If so, it returns NULL as that is an invalid input. Next, the function allocates memory for the array using malloc, taking care to allocate enough memory for all the values from min to max. If malloc fails, the function returns NULL.
Finally, the function uses a loop to populate the array with values from min to max. The function returns a pointer to the newly created array._

**#100-realloc.c**

_Write a function that reallocates a memory block using malloc and free
Prototype: void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
where ptr is a pointer to the memory previously allocated with a call to malloc: malloc(old_size)
old_size is the size, in bytes, of the allocated space for ptr
and new_size is the new size, in bytes of the new memory block
The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
If new_size > old_size, the “added” memory should not be initialized
If new_size == old_size do not do anything and return ptr
If ptr is NULL, then the call is equivalent to malloc(new_size), for all values of old_size and new_size
If new_size is equal to zero, and ptr is not NULL, then the call is equivalent to free(ptr). Return NULL
Don’t forget to free ptr when it makes sense
The function first checks if new_size is equal to old_size. If so, it returns ptr as nothing needs to be done. If ptr is NULL, it simply returns the result of malloc(new_size). If new_size is 0 and ptr is not NULL, it calls free(ptr) and returns NULL.
Finally, if none of the above conditions are met, the function allocates memory for the new block using malloc(new_size), copies the contents of the old block to the new block using memcpy, frees the old block using free(ptr), and returns a pointer to the newly allocated space._
