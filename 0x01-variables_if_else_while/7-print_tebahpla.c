#include <stdio.h>
/**
 *main - a program that prints the lowercase alphabet in revers.
 *Return: 0 upon (success)
 */
int main(void)
{
char x;
for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
