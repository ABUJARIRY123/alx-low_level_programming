#include "main.h"
/**
 * puts2 - printing of every character of a string
 * @str: the string from which its characters are to be printed.
 * Return: Null
*/
void puts2(char *str)
{
int x, y = 0;
while (str[y] != '\0')
{
y++;
}
for (x = 0; x < y; x += 2)
{
_putchar(str[x]);
}
_putchar('\n');
}
