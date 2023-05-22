#include "main.h"
/**
 * _memcpy - function that copies memory area.
 * @n: bytes of memory
 * @src: memory area
 * @dest: memory area to be filled
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int size = n;
int i;
for (i = 0; i < size; i++)
{
dest[i] = src[i];
}
return (dest);
}
