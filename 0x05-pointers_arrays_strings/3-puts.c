#include "main.h"
#include <unistd.h>
/**
 * _puts - Prints a given string
 * Return: zero
 * @str: string
 */

void _puts(char *str)
{
int i = 0;
while (*(str + i))
{
_putchar(str[1]);
i++;
}
_putchar('\n');
}
