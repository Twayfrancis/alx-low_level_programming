#include "main.h"
/**
 * _strncat -  function that concatenates two strings.
 * @dest: pointer to destination string.
 * @src: pointer to the source string.
 * @n: max number of bytes from source string to destination string.
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int length, t;

length = 0;

while (dest[length] != '\0')
{
length++;
}
for (t = 0; t < n && src[t] != '\0'; t++, length++)
{
dest[length] = src[t];
}
dest[length] = '\0';
return (dest);
}
