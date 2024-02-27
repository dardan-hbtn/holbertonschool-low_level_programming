#include "main.h"
#include <stdio.h>

void print_line(int n)
{
int i;
   
   printf("the cale of parametter is %d \n",n);

   for (i = 1;i <= n; i++)
   {
      _putchar('_');
   }
	_putchar('\n');
}
