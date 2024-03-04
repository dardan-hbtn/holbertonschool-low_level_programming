#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: NULL.
 */
void print_array(int *a, int n)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (sizeof(a) / sizeof(int)); i = i + size + 1)
		sum1 = sum1 + a[i];

	for (n = size - 1; n <= (sizeof(a) / sizeof(int)) - size; n = n + size - 1)
	sum2 = sum2 + a[n];
	printf("%d, %d\n", sum1, sum2);
}
