#include "main.h"
#include <stdio.h>
/**
*swap - swap the value of the two integers
*@a: value of first number
*@b: value of secend number
*/
void swap_int(int *a, int *b)
{
int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;

}
