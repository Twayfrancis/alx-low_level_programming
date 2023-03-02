#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: input string to encode
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
char offset, *t = s;
while (*s)
{
offset = (*s & 32) + 65;
if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
* s = (*s - offset + 13) % 26 + offset;
s++;
}
return (t);
}
