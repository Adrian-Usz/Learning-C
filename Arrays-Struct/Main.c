#include <stdio.h>

int main() {
	int cords[3] = { 10,22,3 };

	int ages[4]; // you can initialize arrays

	int age[] = { 7,4,8,12,15 };

	int anAge = age[2]; // prints 8
	printf("\n%d\n", anAge);


	int odds[] = { 1,3,4,7,8,11 };
	odds[2] = 5;
	odds[4] = 9;

	for (int i = 0; i < 6; i++)
	{
		printf("\n%i", odds[i]);
	}

	int arr3[] = { 1,4,3,4 };
	int len = sizeof(arr3) / sizeof(int);
	printf("\n\n%i", len); // prints 4
	double arrDouble[] = { 11.14, 10.4,8.8,4,2 };
	printf("\n%f", arrDouble[0]); // prints 11.14


	// Multi-Dim array's

	int cord[3][4];
	int cord2[][3] = {{1,2,4}, {1,6,3}};

	int matrix[][4] = { {14, 10, 6, 4}, {3, 7, 18, 11}, {13, 9, 5, 17}, {19, 12, 2, 1} };
	int sum = 0;
	for (int i = 0; i < sizeof(matrix)/sizeof(matrix[0]); i++) {
		for (int x = 0; x < sizeof(matrix[0]) / sizeof(int); x++) {
			sum += matrix[i][x];
		}
	}
	printf("\n\n%i", sum);

}
