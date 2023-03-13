#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer to the string
 * Return: Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
		dup[i] = str[i];
	{
		return (dup);
	}
}
