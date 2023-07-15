#include <stdio.h>
/**
 *main - a program that prints combinations of two-digit numbers.
 *Return: 0 upon (success)
 */
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
if (i < j)
{
putchar((i / 10) + 18);
putchar((i % 10) + 18);
putchar(' ');
putchar((j / 10) + 18);
putchar((j % 10) + 18);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
