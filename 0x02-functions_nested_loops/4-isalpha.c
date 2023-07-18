#include "main.h"
/**
 * _isalpha -  This program checks for alphabets.
 *@c: The char to be checked.
 *Return: 1 for alphabet, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
