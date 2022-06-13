#include "main.h"
/**
 * swap_int - swaps the value of two integers.
 * @a:int
 * @b:int
 * Return: returns zero
 */
void swap_int(int *a, int *b)
{
int g;
int h;
g = *a;
h = *b;
*a = h;
*b = g;
}
