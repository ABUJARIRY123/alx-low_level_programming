#include <stdio.h>
/**
 * main - this program prints the 1st 50 Fibonacci numbers
 *Return: null
 */
int main(void)
{
int a = 0;
long b = 1, c = 2;
while (a < 50)
{
if (a == 0)
printf("%d", b);
else if (a == 1)
printf(",%d", c);
else
{
c += b;
b = c - b;
printf(",%d", c);
}
++a;
}
printf("\n");
return (0);
}
