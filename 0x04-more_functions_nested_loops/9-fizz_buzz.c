#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints the numbers from 1 to 100, followed by a new line
 * multiples of three print Fizz
 *  multiples of five print Buzz
 *  multiples of both three and five print FizzBuzz
 *  Author Tway
 *  Return: Always 0 (success)
 */
int main(void)
{
int i;
char t[] = "Fizz";
char d[] = "Buzz";
char td[] = "FizzBuzz";

for (i = 1; i <= 100; i++)
{
if (i == 100)
printf("%s", d);
else if ((i % 3 == 0) && (i % 5 == 0))
printf("%s ", td);
else if (i % 3 == 0)
printf("%s ", t);
else if (i % 5 == 0)
printf("%s ", d);
else
printf("%d ", i);
}
printf("\n");
return (0);
}
