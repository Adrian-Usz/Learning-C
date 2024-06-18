#include <stdio.h>

int main() {
	int x = 0;
	int* ptr = &x;

	printf("\n%i", *ptr); // Prints 0

	*ptr = 23;

	printf("\n%i", x); // Prints 23
}