#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints elements of array of integers
 * @a: the array
 * @n: number of the array to be printed
 * Return: null
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
{
printf(", ");
}
}
printf("\n");
}
