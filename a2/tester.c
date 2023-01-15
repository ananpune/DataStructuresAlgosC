/*
    Instructions:
    0. Work on each question and comment out all following question until that question is tested.
    1. Solve question 0 and then comment it out so you can test the rest of the questions.
    2. Put all needed declarations at the beginning of main(). Unlike Java, C does not allow variable declarations at random locations in a method.
    3. Make sure the entire file with all its functions are tested and can be executed at once. 
       If I run your code and it's not running, you get a zero.
       If a method doesn't run, comment it out and write me a note to explain the issue. Don't struggle to find an answer on Google.
    4. Pay special attention to formatting. Bad formatting will result in significant mark deductions.
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static int      findSumOfTwoDimensionalArray        (int array[][4], int rows, int cols);
static void     changeValueOfArgument               (double * ptrToDouble);
static void     changeValueOfTwoArguments           (double * ptrToDouble, int * ptrToInt);
static void     usePointerToPrintArgOneCharAtATime  (char * str0);
static void     replaceCharAtIndexUsingPointers     (char str0[], int index, char c);
static void     concatStringsUsingArrayNotation     (char str0[], char str1[], char total[]);
static void     concatStringsUsingPointers          (char * str0, char * str1, char * total);
static char *   returnReverseString                 (char str0[]);


int main(void)
{
  /*   // Q0
    Are these operation legal? Delete either Y or N.

    a.  int     i = 0x89;
        short   s = i;
        Y  N
        
    b.  int     i = 0x89;
        short   s = 0;
        i = s;
        Y  N
        
    c.  double  d = 0.05;
        float   f = 0.0f;
        d = f;
        Y  N
        
    d.  double  d = 0.05;
        float   f = 0.0f;
        f = d;
        Y  N
        
    e.  int     i = 0x89;
        char    c = 0;
        i = c;
        Y  N */
        
    // Q1
	 double d = 12345.0;
	 int i = 1;
	 char str0[] = "Hello world!";
	 char sumOfStrings[128];
	 char sumOfStrings2[32];
	 char * ptrToStr = returnReverseString(sumOfStrings2);
	 
	
	
    int twoDArray[3][4] =
	
    {
        { 4,  2, -5,  8},
        { 3,  6,  5,  0},
        { 1, -4, 10, 44},
    };
    printf("Q1: %d\n", findSumOfTwoDimensionalArray(twoDArray, 3, 4));

    // Q2
   
    changeValueOfArgument(&d);
    printf("Q2: %f\n", d);

    // Q3
   
    changeValueOfTwoArguments(&d, &i);
    printf("Q3: %f, %d\n", d, i);

    // Q4
    usePointerToPrintArgOneCharAtATime("We are using pointers.");
    
    // Q5
    
    replaceCharAtIndexUsingPointers(str0, 11, '?');
    printf("Q5: %s\n", str0);

    // Q6
   
    concatStringsUsingArrayNotation("Ask not what your country can do for you," ," ask what you can do for your country.", sumOfStrings);
    printf("Q6: %s\n", sumOfStrings);

    // Q7
    
    concatStringsUsingPointers("Mr. Thomson", " come here!", sumOfStrings2);
    printf("Q7: %s\n", sumOfStrings2);

    // Q8
    
    printf("Q8: %s\n", ptrToStr);
	return 0;

    
}

// Q1: Find sum of all elements of a two dimensional array using array notation [][].
// rows is the number of rows and cols is the number of columns
// Result should be 74
int findSumOfTwoDimensionalArray(int array[][4], int rows, int cols)
{
	int x ;
	int y;
	int sum=0;
    for (x=0; x < rows; x++)
	{
		{
			for(y=0; y < cols; y++){
				sum += array[x][y];
			}
		}
		
	}
	return sum;
}

// Q2: Use pointer notation to change the value of contents of address.
//     ptrToDouble is the address of a variable in main().
//     Translate this into C: contentsOf(addressOf) = 3.14159.
//     (addressOf) is given to you as ptrToDouble.
static void changeValueOfArgument(double * ptrToDouble)
{
	*ptrToDouble = 3.14159;
}

// Q3: Use pointer notation to change the value of two arguments.
//     Similar to Q2 but you have two values to change.
//     Set the first argument to 3.14159 and second to 111.
static void changeValueOfTwoArguments(double * ptrToDouble, int * ptrToInt)
{
	*ptrToDouble = 3.14159;
	*ptrToInt = 111;
}

// Q4: Use pointer notation to print argument one char at a time.
// Hint: When using pointers, remember to get the size of the array or the string before you change the pointer.
//       Remember that ptr++ for example advance the actual pointer but ptr + 1 doesn't.
static void usePointerToPrintArgOneCharAtATime (char * str0)
{
	int size = strlen(str0);
	int i;
	printf("Q4: ");
    
	for(i=0; i < size; i++)
	{
		printf("%c\n", *str0);
		str0++;
		
	}
	
	
	printf("\n");
		
    /* printf("Q4: ");
    printf("\n"); */
}

// Q5: Use pointer notation to change the given index of a string to the given character.
//     Do not use array notation []
static void replaceCharAtIndexUsingPointers (char str0[], int index, char c)
{
	char * charPtr = str0;
	int i;
	for (i=0; i < index; i++)
	{
		charPtr++;
	}
	*charPtr = c;
}

// Q6: Use array notation to concat str0 and str1 into the char array I call total
static void concatStringsUsingArrayNotation(char str0[], char str1[], char total[])
{
	int size = strlen(str0);
	int i;
	int j;
	
	
	for(i=0; i < size; i++)
	{
		total[i] = str0[i];
	}
	size = strlen(str1);
	
	for(j=0; j < size; j++)
	{
		total[j + i] = str1[j];
	}
	
}

// Q7: Use pointer notation to concat str0 and str1 into the char array I call total
// Hint: When using pointers to a string, remember to get the size of the array or the string before you change the pointer.
//       Remember that a call such as ptr++ for example changes the actual pointer but ptr + 1 doesn't.
static void concatStringsUsingPointers(char * str0, char * str1, char * total)
{
	int size = strlen(str0);
	int i;
	int j;

	
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
	*total='\0';
	
		
	
	
}

// Q8: Use pointer notation to reverse the string argument and return it.
// Use char *ptr = malloc(strlen(str0)) to get space for the reverse array.
static char * returnReverseString(char  str0[])                             


	 
{
	int size = strlen(str0);
	int i;
	char * ptr = malloc(size);
	char * ptr2;
	ptr2=str0;
	ptr2 += size-1;

	for (i = 0; i < size; i++)
	{
		*ptr = *ptr2;
		ptr++;
		ptr2--;
	}
	*ptr = '\0';
	return ptr - size;
	
	
	
}
 

	

