#include "main.h"
/**
 * puts_half - Printing of a half a string
 * @str: the string
 * Return: null
*/
void puts_half(char *str)
{
int i, j = 0;
while (str[j] != '\0')
{
j++;
}
if (j % 2 == 1)
{
i = (j - 1) / 2;
}
for (; i < j; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
