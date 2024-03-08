#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the number of arguments
 * @argc: number of arguments
 * @argv: argument arrey
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
    int result;
    int a, b;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    a = atoi(argv[1]);
    b = atoi(argv[2]);
    result = a * b;

    printf("%d\n", result);


    return (0);
}
