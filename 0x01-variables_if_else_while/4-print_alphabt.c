#include <stdio.h>
/**
 *main - a program that prints the alphabet in lowercase.
 *Return: 0 upon (success)
 */
int main(void)
{
char x = 'a';
while (x <= 'z')
{
if (x != 'e' && x != 'q')
{
putchar(x);
}
x++;
}
putchar('\n');
return (0);
}
