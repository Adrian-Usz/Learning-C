#include <stdio.h>
struct person
{
	char firstName[25];
	char lastName[40];
	int age;
};

struct person ageUp(struct person a, struct person* aPointer) {
	a.age = 10;
	aPointer->age += 5;
	return a;
}

int main() {
	

	struct person person1 = { "Name", "LastName", 25 };
	
	struct person* person1Pointer = &person1;

	(*person1Pointer).age += 1;
	printf("\n%d", person1.age); // prints 26

	person1Pointer->age += 10; // uses arrow notation | prints 36
	printf("\n%d", person1.age);

	ageUp(person1, person1Pointer);
	printf("\n%d", person1.age); // prints 56

	struct person person2 = ageUp(person1, &person1);
	printf("\n%d", person2.age); // prints 10
}