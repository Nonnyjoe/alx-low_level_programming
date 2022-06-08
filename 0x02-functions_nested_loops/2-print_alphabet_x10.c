#include "main.h"
/**
 * print_alphabet_x10 - print alphabets
 * Description: print the alphabets 10 times
 * return: Nothing.
 */

void print_alphabet_x10(void)
{
char z;
for (z = 0; z <= 9; z++)
{
int a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
}
