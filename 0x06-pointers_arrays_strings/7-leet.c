#include "main.h"
#include <string.h>
/**
 * leet - function that encodes a string into 1337.
 * @str: pointer to the string encoded
 * Return: str
 */
char *leet(char *str)
{
char *s = str;
char a[] = { 'a', 'e', 'o', 't', 'l' };
char n[] = { 4, 3, 0, 7, 1 };
int t = 0;
while (*str)
{
for (t = 0; t < 5; t++)
{
if (*str == a[t] || *str == a[t] - 32)
*str = n[t] + '0';
}
str++;
}
return (s);
}
