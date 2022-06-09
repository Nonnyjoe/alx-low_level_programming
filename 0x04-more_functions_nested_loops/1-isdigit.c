#include "main.h"
/**
 *  _isdigit - checks if an input is a number
 *  @c:int
 *  Return: returns 1 or 0
 */

int _isdigit(int c)
{
if (c >= 0 && c < 10)
return (1);
else
return (0);
}
