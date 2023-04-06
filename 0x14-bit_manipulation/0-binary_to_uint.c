#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars
 * Author Tway
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int dec;

	if (b == NULL)
		return (0);

	for (dec = 0; b[dec] != '\0'; dec++)
	{
		if (b[dec] != '0' && b[dec] != '1')
			return (0);

		converted <<= 1;
		if (b[dec] == '1')
			converted += 1;
	}
	return (converted);
}
