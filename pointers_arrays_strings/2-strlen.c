#include "main.h"
#include <stdio.h>
/**
 *  _strlen -  function that returns the length of a string
 * @s: string
 * Return: adfasdfa
 */
int _strlen(char *s)
{
    int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);


}
