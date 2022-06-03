#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints the result of the last number
 * Return: return integer value: 0
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
if (last_digit > 5)
{
printf("%d and is greater that 5\n", last_digit);
}
else if (last_digit == 0)
{
printf("%d and is 0\n", last_digit);
}
else if (last_digit < 6 && last_digit != 0)
{
printf("%d and is less that 6 and not 0\n", last_digit);
}

return (0);
}
