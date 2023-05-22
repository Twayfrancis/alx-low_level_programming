#include "main.h"
/**
 * _islower - Write a function that checks for lowercase character.
 * @c: single character input
 * Author Tway
 * Return: 1 if int is c is lowercase , 0 (success)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
