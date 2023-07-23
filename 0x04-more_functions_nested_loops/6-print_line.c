#include "main.h"
/***
 *print_line - drawing of a straight line
 * @l: The number of lines to be drawn
 * Return: null
 */
void print_line(int l)
{
int m;
if (l <= 0)
{
_putchar('\n');
}
else
{
for (m = 0; m < l; m++)
{
_putchar(95);
}
_putchar('\n');
}
}
