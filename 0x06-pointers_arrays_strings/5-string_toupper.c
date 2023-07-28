#include "main.h"
/**
 * string_toupper -  changes all lowercase letters of a string to uppercase.
 * @str: The string to undergo conversion
 * Return: A pointer to the new string
 */
char *string_toupper(char *str)
{
int label = 0;
while (str[label])
{
if (str[label] >= 'a' && str[label] <= 'z')
str[label] -= 32;
label++;
}
return (str);
}
