#include <stdio.h>
/**
*main - a program that prints the alphabet in lowercase, and then in uppercase.
*Return: 0 upon (success)
*/
int main(void)
{
char x;
char y;
x = 'a';
y = 'A';
while (x <= 'z')
{
putchar(x);
x++;
}
while (y <= 'Z')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
