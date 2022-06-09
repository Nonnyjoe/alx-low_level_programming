#include "main.h"

/**
* print_triangle - print a triangle
* Return: Always return 0
* @size: The charater to print
*/

void print_triangle(int size)
{
	int row; 
  int col;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (col = size - row; col > 0; col--)
				_putchar(' ');
			
			for (col = 0; col < row; col++)
				_putchar('#');

			if (row == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
