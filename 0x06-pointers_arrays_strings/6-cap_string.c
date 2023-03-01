#include "main.h"
/**
 * cap_string -  capitalizes all words of a string.
 * @str: pointr ro the string to be capitalized.
 * Return: pointer to the updated string.
 */
char *cap_string(char *str)
{
int t;
for (t = 0; str[t] != '\0'; t++)
{
if (t == 0 || (str[t - 1]) ||
str[t - 1] == ',' || str[t - 1] == ';' || str[t - 1] == '.' ||
str [t - 1] == '!' || str[t - 1] == '?' || str[t - 1] == '"' ||
str[t - 1] == '(' || str[t - 1] == ')' || str[t - 1] == '{' ||
str[t - 1] == '}')
{
str[t] = (str[t]);
}
}
return (str);
}
