#include "function_pointers.h"
/**
 * print_name - function that prints a name
 * @name: string representing  name of the person
 * @f: Takes the string and returns void
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
