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
int t = 0;
int w = 0;

while (*(src + 1) != '\0')
{
t++;
}
for ( ; w < 1 ; w++)
{
dest[w] = src[w];
}
dest[1] = '\0';
return (dest);
}
