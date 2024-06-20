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

	// To print reverse
	printf("\nTo print in reverse");

	int arr2[5] = { 1,2,3,4,5 };
	int* ptr3 = &arr2[4];
	int toCount = sizeof(arr2);
	for (int i = 0; i < 5; i++)
	{
		printf("\n%i", *ptr3);
		ptr3--;
		
	}

	//How to use pointers with Char Strings

	char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";
	char* charPtr = &s[0];
	int lengthChar = strlen(s);

	for (int i = 0; i < lengthChar; i++)
	{
		*charPtr = '#';
		charPtr++;
	}
	printf("\n%s", s);

}