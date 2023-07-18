#include<unistd.h>
/**
* _putchar - This program writes the character c to stout.
*@c: This is the character to be printed.
*Return: 1 Upon success.
*On error, -1 to be returned
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}
