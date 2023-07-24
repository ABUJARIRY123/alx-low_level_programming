#include <stdio.h>
/**
 * _strlen - gives the length of a string
 * @str: the string whose length is to be found.
 * Return: The length of the string.
*/
size_t _strlen(const char *str)
{
size_t len = 0;
while (*str++)
len++;
return (len);
}
