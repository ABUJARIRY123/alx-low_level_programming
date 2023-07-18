#include <stdio.h>
/**
 * main - this program prints the sum of even Fibonacci values
 *Return: null
 *less than 4000000
 */
int main(void)
{
int w = 0;
long z, x = 1, y = 2;
z = y;
while (y + x < 4000000)
{
y += x;
if (y % 2 == 0)
z += y;
x = y - x;
++w;
}
printf("ld\n", z);
return (0);
}
