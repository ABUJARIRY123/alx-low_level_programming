#include <stdio.h>
/**
 * swap_int - swaps two integers
 * @a: the 1st integer
 * @b: the 2nd integer
 * Return: null
*/
void swap_int(int *a, int *b)
{
int body_temp = *a;
*a = *b;
*b = body_temp;
}
