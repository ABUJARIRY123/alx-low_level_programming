#include <stdio.h>
/**
 *main - a program that prints combinations of single-digit numbers.
 *Return: 0 upon (success)
 */
int main(void)
{
int p;
for (p = 48; p < 58; p++)
{
putchar(p);
if (p != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
