#include <stdio.h>
/**
 *main - a program that prints the alphabet in lowercase.
 *Return: 0 upon (success)
 */
int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
