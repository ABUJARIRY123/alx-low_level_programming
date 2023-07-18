#include "main.h"
/**
 * print_times_table - this program prints the table of input values.
 * initial position 0
 * @v: the value of the table
*/
void print_times_table(int v)
{
int number, multiplication, product;
if (v >= 0 && v <= 15)
{
for (number = 0; number <= v; number++)
{
_putchar('0');
for (multiplication = 0; multiplication <= v; multiplication++)
{
_putchar(',');
_putchar(' ');
product = number * multiplication;
if (product <= 99)
_putchar(' ');
if (product <= 9)
_putchar(' ');
if (product >= 100)
{
_putchar((product / 100) + '0');
_putchar(((product / 10)) % '0');
}
else if (product <= 99 && product >= 10)
{
_putchar((product / 10) + '0');
}
_putchar((product % 10) + '0');
}
_putchar('\n');
}
}
}
