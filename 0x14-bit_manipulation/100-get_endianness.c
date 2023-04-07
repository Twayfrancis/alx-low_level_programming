#include "main.h"
/**
 * get_endianness -  function that checks the endianness.
 * Author Tway
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1;
	char *ptr = (char *)&num;
	if (ptr[0] == 1)
		return (1);
	else 
		return (0);
}
