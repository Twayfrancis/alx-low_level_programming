#include "main.h"
/**
 * _strcat -  a function that concatenates two strings.
 * @dest: value input
 * @src: string to be appended to the dest string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int t;
int j;

t = 0;
while (dest[t] != '\0')
{
t++;
}
j = 0;
while (src[j] != '\0')
{
dest[t] = src[j];
t++;
j++;
}
dest[t] = '\0';
return (dest);
}
