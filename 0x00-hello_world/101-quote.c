#include <stdio.h>
#include <unistd.h>
/**
*main -understand the simplicity
*Return: 1 (success)
*/
int main(void)
{
    write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
    return (1); 
}
