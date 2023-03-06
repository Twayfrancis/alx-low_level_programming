#include "main.h"
/**
 * _strstr -  function that locates a substring.
 * @haystack: th string searched
 * @needle: to be located
 * Return:  pointer to the beginning of the located substring or NULL
 */
char *_strstr(char *haystack, char *needle)
{
int index = 0;
if (*needle == 0)
	return (haystack);
while (*haystack)
{
if (haystack[index] == needle[index])
{
do

{
if (needle[index + 1] == '\0')
return (haystack);
index++;
}
while (haystack[index] == needle[index]);
}
haystack++;
}
return (0);
}
