#include <stdio.h>
#include "main.h"

/**
 * main - Prints _putchar
 * Description: A code that prints _putchar
 * Return: Return zero
 */
int main(void)
{
int i;
char msg[] = "_putchar";
for (i = 0; i < 8; i++)
{
_putchar(msg[i]);
}
_putchar('\n');
return (0);
}
