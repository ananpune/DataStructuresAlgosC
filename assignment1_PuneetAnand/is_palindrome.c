#include <stdio.h>
#include <string.h>
void main(void)
{
	char word[] = "civic";
	char reverse_word[]= "civic";
	strrev(reverse_word);

	
	if (strcmp(word, reverse_word) == 0)
	{
		printf("Palindrome");
	}
	else{
		printf("No Palindrome");
	}
	
	
}
	