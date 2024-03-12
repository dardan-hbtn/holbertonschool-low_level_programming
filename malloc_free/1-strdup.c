#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: string to copy
 *
 * Return: Pointer
 */
char *_strdup(char *str)
{
int len, i;
char *dup;
if(str == NULL)
return(NULL);
len =0;
while (str[len] != '\0')
len++;
dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
return NULL;
for(i = 0; str[i] != '\0'; i++)
dup[i] = str[i];
return (dup);    
}
