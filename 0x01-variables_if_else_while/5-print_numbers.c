#include <stdio.h>

/**
 * main - Prints all single digit numbers.
 * Description: display numbers from 1 to 10
 * Return: Return 0.
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");

	return (0);
}
