#include "main.h"
/**
 * print_last_digit - this program prints the last digit of a number.
 * @n: The number to be printed.
 * Return: value of the last digit of a number.
 */
int print_last_digit(int n)
{
int t;
t = n % 10;
if (t < 0)
{
t = t * -1;
}
_putchar(t + '0');
return (t);
}
