#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - peint if the number is positive, zero, or negative
 *
 * Decription: using the main function
 * this program prints "Programming is positive, zero or negative"
 * Return 0
 */
int main (void)
{
int n;

strand (time(0));
n= rand() -RAND_MAX / 2;
 /* your code goes there */
if (n > 0)
{
	printf("% is positive\n",n);
}
else if (n = = 0)
{
       	printf("% is zero\n",n);
}
else if (n < 0)
{
	printf("% is negative\n",n);
}
return(0)
}
