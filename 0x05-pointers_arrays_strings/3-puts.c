#include "main.h"
/**
 * _puts - this program prints a string
 * @str: The string to be printed
 * Return: Null
*/
void _puts(char *str)
{
for (; str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');
}
