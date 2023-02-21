#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: single letter input
 * Author Tway
 * Return: 1 if c is letter, 0 (success)
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
			return (1);
			else
			return (0);
			}
