#include "main.h"
/**
 * _strncat - concatenation of two strings
 * @dest: destination of the string
 * @src: the string to be appended
 * @n: the number of bytes
 * Return: a pointer
*/
char *_strncat(char *dest, char *src, int n)
{
int location = 0, length = 0;
while (dest[location++])
length++;
for (location = 0; src[location] && location < n; location++)
dest[length++] = src[location];
return (dest);
}
