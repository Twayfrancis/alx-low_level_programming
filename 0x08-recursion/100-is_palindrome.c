#include "main.h"
/**
 * is_palindrome -  function returns 1 if a string is a palindrome and 0  not
 * @s: string
 * Return: An empty string is a palindrome
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	else
		if (s[0] != s[len - 1])
			{
			return (0);
			}
			else
			{
			s[len - 1] = '\0';
			return (is_palindrome(&s[1]));
			}

}
