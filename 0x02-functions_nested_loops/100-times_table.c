#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * print_times_table - prints the multiplication table of 9
 * @n: int
 * Return: returns the multiplication table.
 */

void print_times_table(int n)
{
int i = 0;
for (; i <= n; i++)
{
int g = 0;
while (g <= n)
{
int v = i * g;
if (v > n)
{
_putchar (v / 10 + '0');
_putchar (v % 10 + '0');
}
else if (g != 0)
{
_putchar (' ');
_putchar (i * g + '0');
}
else
_putchar (i * g + '0');
if (g != n)
{
_putchar (',');
_putchar (' ');
}
g++;
}
_putchar ('\n');
}
}
