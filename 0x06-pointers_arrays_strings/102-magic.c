#include <stdio.h>
/**
 * main - check the code
 * Return: 0
*/
int main(void)
{
int a[5], n, *p;
a[2] = 1024;
p = &n;
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
