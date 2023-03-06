#include "main.h"
/**
 * _strchr  - function that locates a character in a string.
 * @s: character location.
 * @c: specific character.
 * Return: pointer to the first occurrence of the character c or null
 */
char *_strchr(char *s, char c)
{
int i = 0;
while (s[i] != '\0' && s[i] != c)
i++;
if (s[i] == c)
return (&s[i]);
else
return (NULL);
}
