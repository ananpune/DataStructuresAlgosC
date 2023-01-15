#include <stdio.h>

void main(void)
{
	int day; //day of week in numbers 1 through 7, 1 being monday and 7 being sunday
	printf("Enter a day (0 to 6, where 0 is Monday and 6 is Sunday)");
	scanf("%d", &day);
	
	
	switch(day){
		case 0:
			printf("8 hours worked on Monday");
			break;
		case 1:
			printf("8 hours worked on Tuesday");
			break;
		case 2:
			printf("8 hours worked on Wednesday");
			break;
		case 3:
			printf("8 hours worked on Thursday");
			break;
		case 4:
			printf("8 hours worked on Friday");
			break;
		case 5:
			printf("6 hours worked on Saturday");
			break;
		case 6:
			printf("0 hours worked on Sunday");
			break;
	}
			
}
