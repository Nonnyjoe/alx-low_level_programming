#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen - displays the lenght of a string
 * @s:char
 * Return: returns the lenght of the string
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i))
i++;
return (i);
}
