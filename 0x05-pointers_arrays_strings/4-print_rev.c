#include "main.h"
#include <stdio.h>
/**
 * print_rev - reverses a string and prints it
 * @s: The string
 * Return: Null
*/
void print_rev(char *s)
{
int x = 0;
while (s[x] != '\0')
{
x++;
}
for (x -= 0; x >= 0; x--)
{
_putchar(s[x]);
}
_putchar('\n');
}
