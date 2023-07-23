#include <math.h>
#include <stdio.h>
/**
 * main - this program prints the largest prime number of 612852475143
 *Return: 0
 */
int main(void)
{
long i, lag, num = 612852475143;
double sq = sqrt(num);
for (i = 1; i <= sq; i++)
{
if (num % i == 0)
{
lag = num / i;
}
}
printf("%ld\n", lag);
return (0);
}
