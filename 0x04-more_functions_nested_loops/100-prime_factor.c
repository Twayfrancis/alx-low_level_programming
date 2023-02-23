#include <stdio.h>
/**
 * main - The prime factors of 1231952 are 2, 2, 2, 2, 37 2081
 * Author Tway
 * using standard library
 * Return: 0 (success)
 */
int main(void)
{
unsigned long int i = 3, n = 612852475143;

for (; i < 12057; i += 2)
{
while (n % i == 0 && n != i)
n /= i;
}
printf("%lu\n", n);
return (0);
}
