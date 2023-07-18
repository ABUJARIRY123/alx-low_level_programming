#include <stdio.h>
/**
 * main - a program to print the first 100 Fibonacci numbers.
 *Return: 0
 */
int main(void)
{
int prints;
unsigned long Fibonacci1 = 0, Fibonacci2 = 1, summation;
unsigned long Fibonacci3, Fibonacci4, Fibonacci5, Fibonacci6;
unsigned long Fibonacci7, Fibonacci8;
for (prints = 0; prints < 92; prints++)
{
summation = Fibonacci1 + Fibonacci2;
printf("%lu, ", summation);
Fibonacci1 = Fibonacci2;
Fibonacci2 = summation;
{
Fibonacci3 = Fibonacci1 / 10000000000;
Fibonacci5 = Fibonacci2 / 10000000000;
Fibonacci4 = Fibonacci1 % 10000000000;
Fibonacci6 = Fibonacci2 % 10000000000;
for (prints = 93; prints < 99; prints++)
{
Fibonacci7 = Fibonacci3 + Fibonacci5;
Fibonacci8 = Fibonacci4 + Fibonacci6;
if (Fibonacci3 + Fibonacci5 > 9999999999)
{
Fibonacci7 += 1;
Fibonacci8 %= 1000000000;
}
printf("%lu%lu", Fibonacci7, Fibonacci8);
if (prints != 98)
printf(", ")
Fibonacci3 = Fibonacci5;
Fibonacci4 = Fibonacci6;
Fibonacci5 = Fibonacci7;
Fibonacci6 = Fibonacci8;
}
printf("\n");
return (0);
}
}
}
