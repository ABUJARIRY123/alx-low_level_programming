#include "main.h"
#include <stdio.h>
/**
 * rot13 - a function that encodes a string using rot13.
 *@s: pointer
 *Return: the pointer to s
 */
char *rot13(char *s)
{
int j;
int i;
char details1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char details2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 57; j++)
{
if (s[i] == details1[j])
{
s[i] = details2[j];
break;
}
}
}
return (s);
}
