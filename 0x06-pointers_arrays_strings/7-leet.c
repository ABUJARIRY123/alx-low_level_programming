#include "main.h"
/**
 * leet - This program encodes a string into 1337
 *@n: input item
 *Return: n value
 */
char *leet(char *n)
{
int i, j;
char ch1[] = "aAeEoOtTIL";
char ch2[] = "4433007711";
for (i = 0; n[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
{
if (n[i] == ch1[j])
{
n[i] = ch2[j];
}
}
}
return (n);
}
