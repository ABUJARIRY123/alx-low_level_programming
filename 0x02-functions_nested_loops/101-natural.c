#include <stdio.h>
/**
 * main - this program prints the sum of multiples of 3 or 5 upto 1024
 * Return: (Success) All the times
*/
int main(void)
{
int j, x,
x = 0;
while (j < 1024)
{
if ((j % 3 == 0) || (j % 5 == 0))
{
x += j;
}
j++;
}
printf("%d\n", x);
return (0);
}
