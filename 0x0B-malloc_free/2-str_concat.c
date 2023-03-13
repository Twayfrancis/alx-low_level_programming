#include "main.h"
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to concatenated string, others NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int len1 = 0, len2 = 0;
	char *concat_str = NULL, *p = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len2] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat_str == NULL)
	{
		return (NULL);
	}

	p = concat_str;
	while (*s1 != '\0')
		*p++ = *s1++;
	while (*s2 != '\0')
		*p++ = *s2++;
	*p = '\0';
	return (concat_str);
}
