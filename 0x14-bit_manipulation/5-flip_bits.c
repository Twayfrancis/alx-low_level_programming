#include "main.h"
/**
 * flip_bits - rtrns numb bits u wuld nd to flip to gt frm one num to another
 * @n: the first num
 * @m: the second num
 * Author Tway
 * Return: The number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int outcome = n ^ m;

	while (outcome)
	{
	flip += outcome & 1;
	outcome >>= 1;
	}
return (flip);
}
