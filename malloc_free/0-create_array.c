#include "main.h"
#include <stdlib.h>
/**
* create_array-create an array of chars
* @size: the size of an array
* @c: The char to fill in the array
*
* Return: the array filled
*/
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array = malloc(sizeof(char) * size);
if (array == NULL || size == 0)
return (NULL);
for (i = 0; i < size; i++)
{
array [i]= c;
}
return (array);
}
