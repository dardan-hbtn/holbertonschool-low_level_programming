#include <stdio.h>
/**
 * main -  prints the number of arguments
 * @argc: number of arguments
 * @argv: argument arrey
 * Return: Always 0.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
    printf("%d\n", argc - 1);
    return (0);
}
