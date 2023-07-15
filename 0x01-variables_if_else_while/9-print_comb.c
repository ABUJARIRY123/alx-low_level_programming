#include <stdio.h>
/**
 *main - a program that prints combinations of single-digit numbers.
 *Return: 0 upon (success)
 */
int main(void)
{
int p;
for (p = 18; p < 28; p++)
{
putchar(p);
if (p != 27)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
