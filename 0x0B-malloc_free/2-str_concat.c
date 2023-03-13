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
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat == NULL)
		return (NULL);

	while (s1[len1] != '\0')
	{
		concat[len1] = s1[len1];
		len1++;
	}

	while (s2[len2] != '\0')
	{
		concat[len1] = s2[len2];
		len1++, len2++;
	}
	concat[len1] = '\0';
	return (concat);
}
