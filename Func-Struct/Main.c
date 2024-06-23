#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctype.h>
#include <conio.h>


//Function prototypes

int aFunction(int, int);

int aFunction(int1, int2) {
	return int1 + int2;
}





void printSomething() {
	printf("\nThis method prints something random.");
}
int doubleNumber(int n) {
	return n * 2;
}

//Function with pointer

void doubleNumPointer(int* a) {
	*a = *a + 2;
	printf("\n%d", *a);
}

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

	printf("\nA random number: %d", rand());



	// functions

	printf("\n");
	printSomething();
	printf("\n%d", doubleNumber(2));

	int a = 10; // using pointers can save memory so it doesn't need to allocate more ram for stuff like arrays
	int b = 20;
	int* ptr = &a;
	printf("\n\n");
	doubleNumPointer(ptr);
	printf("\n");
	doubleNumPointer(&b);

	//Testing

	//char* str = "Hello";
	//printf("\n\n");
	//printf(str);

}