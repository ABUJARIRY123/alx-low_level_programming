#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 *main- Assign a random number to the variable n each time it is executed
 *Return: 0 upon (success)
 */
int main(void)
{
srand(time(0));
n - rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive \n", n);
elseif(n == 0)
printf("%d is zero \n", n);
else
printf("%d is negative \n", n);
return (0);
}
