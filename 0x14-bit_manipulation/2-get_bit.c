#include "main.h"
/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: the number to get bit from
 * @index: is the index, starting from 0 of the bit you want to get
 * Author Tway
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8) /*check if index is valid*/
	{
		return (-1);
	}
	return ((n >> index) & 1); /*value of bit at index*/
}
