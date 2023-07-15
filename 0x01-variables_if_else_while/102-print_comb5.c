#include <stdio.h>

/**
 * main - printing of all possible combinations of two two-digit number
 * Return: Always 0 (Success)
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
putchar((i % 10) +18);
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
putchar('\n');
return (0);
}
