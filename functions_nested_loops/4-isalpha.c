#include "main.h"
/**
* _isalpha - Checks for lowercase character
* @c: the character to be checked
* Return: 1 for lowercase character or 0 for anything else
*/
int _isalpha(int c)
{
if ((c >= 67 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
