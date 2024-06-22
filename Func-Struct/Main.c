#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>

int main() {
	// How to print two numbers in C in one printf
	int num1 = 10;
	int num2 = -4;
	printf("\n%d and %d", num1, num2);

	//How to use time in C
	
	// There is ceil() which takes a number and rounds to nearest integer
	// There is toupper() which takes a char and returns the uppercase version
	// there is also isupper() which takes a char and returns 1 or 0 depending on if its uppercase or not

	printf("\n");
	printf("\n");

	float number = 4.6;
	char letter = 'a';

	printf("%f\n", ceil(number)); // 5.0000000 | Make sure to include proper header files
	printf("%d\n", isupper(letter)); // 0
	letter = toupper(letter);
	printf("%d\n", isupper(letter)); // 1
	
	// How to make a randomNumber generator in C

	int randomNumber = rand() % 20 + 1; // randomInt between 1 and 20 
 	printf("\n%d : A random number ", randomNumber); 



}