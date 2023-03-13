#include "main.h"
/**
* strtow - Splits a string into words.
* @str: The string to split.
* Return: A pointer to an array of strings (words), or NULL if it fails.
*/
char **strtow(char *str)
{
char **words = NULL;
int i, j, k, len, nwords = 0;

if (str == NULL || *str == '\0')
return (NULL);

for (i = 0; str[i]; i++)
{
if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
	nwords++;
}
words = malloc(sizeof(char *) * (nwords + 1));
if (words == NULL)
return (NULL);
for (i = 0, k = 0; k < nwords; k++)
{
while (str[i] == ' ')
	i++;
len = 0;
while (str[i + len] != ' ' && str[i + len] != '\0')
	len++;
words[k] = malloc(sizeof(char) * (len + 1));
if (words[k] == NULL)
{
for (j = 0; j < k; j++)
free(words[j]);
free(words);
return (NULL);
}
strncpy(words[k], str + i, len);
words[k][len] = '\0';
i += len;
}
words[nwords] = NULL;
return (words);
}
