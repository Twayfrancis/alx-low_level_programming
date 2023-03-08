#include "main.h"
/**
 * check_prime - checks from recursive case
 * @n: integer
 * @divisor: get divisible number of n
 * Return: 1 if n is prime 0 if not
 */
int check_prime(int n, int divisor)
{
if (divisor == n)
{
return (1);
}
else
if (n % divisor == 0)
{
return (0);
}
if (n % divisor != 0)
{
return (check_prime(n, divisor + 1));
}
return (0);
}

/**
 * is_prime_number - function returns 1 if the input integer is a prime num
 * @n: integer
 * Return: 1 if prime, 0 if it's not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, 2));
				}
}
