#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
printf("here is number n %d--\n", n);
if (n>0){
    /*code*/
    printf("is positive\n", n);
} 
if (n=0){
    printf("is zero\n", n);
}
if (n<0){
    printf("is negative\n", n);
}

    /* your code goes there */
	return (0);
}