#include "main.h"

/**
* argstostr - Concatenates all the arguments of the program.
* @ac: The number of arguments.
* @av: An array of strings containing the arguments.
*
* Return: A pointer to a new string containing the concatenated arguments,
*         or NULL if it fails.
*/
char *argstostr(int ac, char **av)
{
char *str;
int i, j, len = 0, pos = 0;

/* Check for NULL or 0 arguments */
if (ac == 0 || av == NULL)
return (NULL);

/* Calculate the length of the concatenated string */
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
	len++;
len++; /* Add one for the newline character */
}

/* Allocate memory for the concatenated string */
len += ac;
str = malloc(sizeof(char) * len);

if (str == NULL)
return (NULL);

/* Copy the arguments to the concatenated string */
for (i = 0; i < ac; i++)
{

for (j = 0; av[i][j]; j++)
{
str[pos] = av[i][j];
pos++;
}
str[pos] = '\n';
pos++;
}

/* Add a null terminator to the end of the string */
str[pos] = '\0';

return (str);
}
