#include "main.h"
/**
 * reverse_array - this program reverses the content of an array of integers.
 * @a: the array
 * @n: the number of elements
*/
void reverse_array(int *a, int n)
{
int sample, location;
for (location = n - 1; location >= n / 2; location--)
{
sample = a[n - 1 - location];
a[n - 1 - location] = a[location];
a[location] = sample;
}
}
