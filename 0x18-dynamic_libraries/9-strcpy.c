#include "main.h"
/**
 * char *_strcpy - copies the string pointed to by src
 * including the terminating null byte (\0)
 * to the buffer pointed to by dest.
 * @dest: copy to
 * @src: copy from
 * Return: value the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int t;

for (t = 0; src[t] != '\0'; t++)
{
dest[t] = src[t];
}
dest[t] = '\0';
return (dest);
}
