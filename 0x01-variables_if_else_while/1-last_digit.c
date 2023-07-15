#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main- Assign a random number to a variable
 *Return: 0 upon (success)
 */
int main(void)
{
int o;
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
o = n % 10;
if (o > 5)
printf("Last digit of %d is %d and is greater than 5 \n", n, o);
if (o == 0)
printf("Last digit of %d is %d and is 0 \n", n, o);
if (o < 6 && o != 0)
printf("Last digit of %d is %d and is less than 6 and is not 0 \n", n, o);
return (0);
}
