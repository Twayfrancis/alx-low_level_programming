#include "main.h"
/**
 * string_toupper - all lowercase letters of a string to uppercase
 * @str: pointer to the string to be converted to uppercase
 * Return: returns pointer to updated string.
 */
char *string_toupper(char *str)
{
int t;
for (t = 0; str[t] != '\0'; t++)
{
if (str[t] >= 'a' && str[t] <= 'z')
{
str[t] -= ('a' - 'A');
}
}
return (str);
}
