#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 4;
printf("Size of a char: %ld byte(s)\n", sizeof(char));
printf("Size of an int: %li byte(s) \n", sizeof(int));
printf("Size of a long int: %li byte(s) \n", sizeof(int));
printf("Size of a long long int: %li byte(s) \n", sizeof(int));
printf("Size of a float: %ld byte(s) \n", sizeof(float));
return (0);
}