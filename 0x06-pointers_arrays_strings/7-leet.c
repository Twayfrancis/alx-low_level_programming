#include "main.h"
#include <string.h>
/**
 * leet - function that encodes a string into 1337.
 * @str: pointer to the string encoded
 * Return: str
 */
char *leet(char *str)
{
int t, j;
char *letters = "aAeEoOtTlL";
char *numbers = "44330771";
for (t = 0; str[t] != '\0'; t++)
{
for (j = 0; str[j] != '\0'; j++)
{
if (str[t] == letters[j])
{
str[t] = numbers[j];
break;
}
}
}
return (str);
}
