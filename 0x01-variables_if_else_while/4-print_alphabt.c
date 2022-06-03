#include <stdio.h>

/**
 * main - Prints the alphabet except q
 * Description: Prints alphabets except q
 * Return: Zero  0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
