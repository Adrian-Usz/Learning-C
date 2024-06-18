#include <stdio.h>

int main() {
	int x = 0;
	int* ptr = &x;

	printf("\n%i", *ptr); // Prints 0

	*ptr = 23;

	printf("\n%i", x); // Prints 23


	//Pointer Arithmetic

	int arr[5] = { 1,2,45,74,85 };

	int* ptr2 = &arr;
	printf("\n%i", *ptr2); // prints 1
	ptr2 = &arr[3];
	printf("\n%i", *ptr2); //prints 74

	
}