#include "main.h"
/**
 * _strncpy - This program copies
 * @dest: destination of the copied item
 * @src: the item to be copied
 * @n: the number of bytes
 * Return: A pointer to the destination.
*/
char *_strncpy(char *dest, char *src, int n)
{
int length, location = 0;
length = location;
while (src[location++])
length++;
for (location = 0; src[location] && location < n; location++)
dest[location] = src[location];
for (location = length; location < n; location++)
dest[location] = '\0';
return (dest);
}
