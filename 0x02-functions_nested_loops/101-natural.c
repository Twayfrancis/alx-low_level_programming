#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
int n;
int sum;

sum = 0;
for (n = 0; n < 1024; n++)
{
if ((n % 3 == 0 || (n % 5 == 0)))
{
sum = sum += n;
}
printf("%d\n", sum);
return (0);
}
}
