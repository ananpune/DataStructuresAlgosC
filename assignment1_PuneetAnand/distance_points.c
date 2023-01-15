#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(void)
{
	double x0=1;
	double y0=1;
	double x1=5;
	double y1=4;

	
	double xpow = pow((x1 - x0), 2);
	double ypow = pow((y1 - y0), 2);
	
	double result = sqrt(xpow + ypow);
	
	printf("%4.2f", result);
	
	
}