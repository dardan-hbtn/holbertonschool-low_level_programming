#include "main.h"
#include <stdio.h>
/**
*_pow_recursion - returns the value of x raised to the power of y
*@x: Integer
*@y: Integer
*Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _pow_recursion(int x, int y)

{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
else
	return (x * _pow_recursion(x, y - 1));
}
