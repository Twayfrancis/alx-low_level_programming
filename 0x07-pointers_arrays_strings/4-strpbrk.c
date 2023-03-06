#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: first occurrence string
 * @accept: match
 * Return: Return to byte of s
 */
char *_strpbrk(char *s, char *accept)
{
int t = 0;
int y = 0;
while (s[t] != '\0')
{
for (y = 0; accept[y] != '\0'; y++)
{
if (s[t] == accept[y])
{
s = &s[t];
return (s);
}
}
t++;
}
return (NULL);
}
