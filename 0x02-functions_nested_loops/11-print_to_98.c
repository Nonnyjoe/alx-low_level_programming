#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * print_to_98 - prints all numbers ti 98
 * @n: int
 * return zero
 */

void print_to_98(int n)
{
if (n > 98)
{
for (; n = 98; --n)
{
printf("%d, ", n);
}
}
else if (n < 98)
{
for (; n = 98; n++)
{
printf("%d, ", n);
}
}
else
{
int n = 98;
printf("%d, ", n);
}
}
