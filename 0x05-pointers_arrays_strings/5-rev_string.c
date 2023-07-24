#include "main.h"
/**
 * rev_string - gives a reverse of a string
 * @s: the string
 * Return: Null
*/
void rev_string(char *s)
{
int length = 0;
int location = 0;
char temperature;
while (s[location++])
length++;
for (location = length - 1; location >= length / 2; location--)
{
temperature = s[location];
s[location] = s[length - location -1];
s[length - location -1] = temperature;
}
}
