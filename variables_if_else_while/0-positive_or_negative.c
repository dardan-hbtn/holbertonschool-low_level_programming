#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
if (n>0)
{
    /*code*/
    printf("%d is positive \n", n);
} 
if (n==0)
{
    printf("%dis zero \n", n);
}
if (n<0)
{
    printf("%dis negative \n", n);
}
    /* your code goes there */
	return (0);
}