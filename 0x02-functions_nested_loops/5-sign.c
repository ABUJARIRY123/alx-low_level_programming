#include "main.h"
/**
 * print_sign -  This program prints the sign of a number.
 *@n: The number to be checked.
 *Return: 1 for a +ve number, -1 for -ve numbers and 0 for otherwise
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
