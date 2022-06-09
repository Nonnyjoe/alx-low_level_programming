#include "main.h"
/**
*print_diagonal - print line based on requested number
*@n: The character to print
*/
void print_diagonal(int n)
{
	int l1, l2;

	for (l1 = 0; l1 < n; l1++)
	{
		for (l2 = 0; l2 < l1; l2++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
