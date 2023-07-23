#include "main.h"
/**
 * more_numbers - printing numbers ten times
 * Return: 10 times the numbers
*/
void more_numbers(void)
{
int i, b;
for (i = 0; i < 10; i++)
{
for (b = 0; b <= 14; b++)
{
if (b > 9)
{
_putchar((b / 10) + '0');
}
_putchar((b % 10) + '0');
}
_putchar('\n');
}
}
