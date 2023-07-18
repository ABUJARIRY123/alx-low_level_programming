#include "main.h"
/**
 * _islower - this program checks for lowercase characters
 * @c: The character to checked
 * Return: 1 for lowercase character, o otherwise
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
