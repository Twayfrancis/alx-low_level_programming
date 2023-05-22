#include "main.h"
/**
 * _strncpy - function that copies a string.
 * @dest: pointer to destination string cp to src
 * @src: pointer source to the string cp
 * @n: remax number of characters to be copied.
 * Return: pointer to dest string.
 */
char *_strncpy(char *dest, char *src, int n)
{
int t;
for (t = 0; t < n && src[t] != '\0'; t++)
{
dest[t] = src[t];
}
for (; t < n; t++)
{
dest[t] = '\0';
}
return (dest);
}
