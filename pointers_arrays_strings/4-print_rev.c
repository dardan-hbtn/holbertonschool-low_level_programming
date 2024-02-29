#include "main.h"
/**
 * print_rev - function that prints a string,in reverse,followed by a new line
 * @s: string
 * Return: adfasdfa
 */
void print_rev(char *s)
{
	int l = 0;
	int i;

	while (s[l] != '\0')
	{
		l++;
	}
	i = l - 1;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}
