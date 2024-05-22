#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
void Array(int* i, int* j, int(*arr)[10]) {
	arr[*i][*j] = 3;
}
	

int main(void) {
	int i = 0, j = 0;
	int arr[10][10] = { {0} };

	Array(&i, &j, arr);

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++) {

			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
*/


// parameters of 2 dimentional arrays
/*
void Print2DArray(int arr[][5], int col, int row) {

	for (int i = 0; i < row ; i++)
	{
		for (int j = 0; j < col; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");

	}
}
*/

/*
void Point(int* arr) {
	arr[0] = 0;
}

void Alter(int arr[]) {
	arr[4] = 0;
}

int main(void) {
	int arr[] = { 1,2,3,4,5 };
	int i;

	Point(arr);
	Alter(arr);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
}
*/