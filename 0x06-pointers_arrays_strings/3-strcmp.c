#include "main.h"
/**
 * _strcmp - This program compares two strings
 *@s1: The 1st string
 *@s2: The 2nd string
 * Return: The difference of the two
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++, s2++;
}
return (*s1 - *s2);
}
