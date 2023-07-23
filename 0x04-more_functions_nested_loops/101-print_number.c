#include "main.h"
#include <stdio.h>
/**
 * print_number - prints out a number
 *@i: the integer to be printed
 * Return: Nothing
*/
void print_number(int i)
{
unsigned int n = i;
if (i < 0)
{
i *= -1;
n = i;
_putchar('-');
}
n /= 10;
if (n != 0)
print_number(n);
_putchar((unsigned int) i % 10 + '0');
}
