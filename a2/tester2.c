// Online C compiler to run C program online

static void concatStringsUsingPointers(char * str0, char * str1, char * total)
{
for (i = 0; i < size; i++)
	{
		*total = *str0;           
		total++;                  
		str0++;                   
		
	}
	

	size = strlen(str1);        
	
	for (j = 0; j < size; j++)
	{
		*total = *str1;   
		total++; 		
		str1++;
				
		
	}
	//add null terminator
	*total = '\0';

	
	

		
	
	
}

// Q8: Use pointer notation to reverse the string argument and return it.
// Use char *ptr = malloc(strlen(str0)) to get space for the reverse array.
static char * returnReverseString(char  str0[])                             

 {

	int size = strlen(str0);
	char *ptr = malloc(size);
	int i;
	int j;
	
	for (i = size - 1, j = 0; i >= 0; i--, j++)
	{
		*(ptr + j) = *(str0 + i);
	}

	return ptr;

 }
	
	 
void main()
{
     double d = 12345.0;
	 int i = 1;
	 char str0[] = "Hello world!";
	 char sumOfStrings[128];
	 char sumOfStrings2[32];
	 char * ptrToStr = returnReverseString(sumOfStrings2);
    concatStringsUsingPointers("Mr. Thomson", " come here!", sumOfStrings2);
    printf("Q7: %s\n", sumOfStrings2);
    printf("%s\n", ptrToStr);

    // Q8
    
    printf("Q8: %s\n", ptrToStr);
	return 0;
}