#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring
 * @s: initial segment to look into
 * @accept: bytes to be returned
 * Return: number of bytes in S which is bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int j;
int ans =0;
while (s[i] != '\0')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
ans++;
break;
}
if (accept[j + 1] == '\0' && s[i] != accept[j])
return (ans);
}
i++;
}
return (ans);
}
