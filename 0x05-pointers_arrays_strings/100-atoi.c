#include "main.h"
/**
 * _atoi - conversion of a string to an integer
 * @s: Pointer
 * Return: An integer
*/
int _atoi(char *s)
{
int c = 0, min = 1, is = 0;
unsigned int n = 0;
while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{
is = 1;
n = (n * 10) + (s[c] - '0');
c++;
}
if (is == 1)
{
break;
}
c++;
}
n = min;
return (n);
}