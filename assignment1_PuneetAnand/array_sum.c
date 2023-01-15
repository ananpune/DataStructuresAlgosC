#include <stdio.h>

void main(void)
{
	int i;
	int numbers[]={5,1,4};
	int sum=0;
	
	for(i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++){
		sum += numbers[i];
	}
	printf("%2d", sum);
		
}