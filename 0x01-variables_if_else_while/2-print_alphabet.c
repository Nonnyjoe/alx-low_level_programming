#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print all the alphabets in small caps
 * Return: alphabets
 */
int main(void)
{

char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
