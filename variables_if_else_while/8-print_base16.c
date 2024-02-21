#include <stdio.h>
#include <time.h>
#include<stdlib.h>
/**
* main - main function
* Return: 0 value
*/
int main(void)
{
char n;
char t;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
for (t = 'a'; t <= 'f'; t++)
{
putchar(t);
}
putchar('\n');
return (0);
}
