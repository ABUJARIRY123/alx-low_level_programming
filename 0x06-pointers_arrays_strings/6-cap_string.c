#include "main.h"
/**
 *cap_string - This program capitalizes all words of a string.
 *@str: The string
 *Return: Pointer to hte new string
 */
char *cap_string(char *str)
{
int polls;
polls = 0;
while (str[polls])
{
while (!(str[polls] >= 'a' && str[polls] <= 'z'))
polls++;
if (str[polls - 1] == ' ' ||
str[polls - 1] == 't' || str[polls - 1] == '\n' ||
str[polls - 1] == ',' || str[polls - 1] == ';' ||
str[polls - 1] == '.' || str[polls - 1] == '!' ||
str[polls - 1] == '?' || str[polls - 1] == '"' ||
str[polls - 1] == '(' || str[polls - 1] == ')' ||
str[polls - 1] == '{' || str[polls - 1] == '}' || polls == 0)
str[polls] -= 32;
polls++;
}
return (str);
}
