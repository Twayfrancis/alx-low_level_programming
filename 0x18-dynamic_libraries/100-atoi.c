#include "main.h"
/**
 *  _atoi - convert a string to an integer.
 *  @s: string
 *  Return: integer in the screen
 */
int _atoi(char *s)
{
int t;
int w, z;
w = 0;
z = -1;
for (t = 0; s[t] != '\0'; t++)
{
if (s[t] == '-')
z *= -1;
if (s[t] > 47 && s[t] < 58)
{
if (w < 0)
w = (w * 10) - (s[t] - '0');
else
w = (s[t] - '0') * -1;
if (s[t + 1] < 48 || s[t + 1] > 57)
break;
}
}
if (z < 0)
w *= -1;
return (w);
}
