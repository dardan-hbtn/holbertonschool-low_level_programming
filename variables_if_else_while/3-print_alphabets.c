#include <stdio.h>
#include <time.h>
#include<stdlib.h>
/**
* main - main function
* Return: 0 value
*/
int main(void)
{
char low;
for (low = 'a'; low <= 'z'; low++)
putchar(low);
for (low = 'A'; low <= 'Z'; low++)
putchar(low);
putchar('\n');
return (0);
}
