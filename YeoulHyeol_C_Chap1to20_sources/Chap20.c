#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Turn(int(*ptr)[4], int len) {

}

int main(void) {
	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
		// arr은 포인터
	int i, j;

	for (j = 0; j < 4; j++)
	{
		int e = 3;
		for (i = 0; i < 4; i++)
		{
			arr[j][e] = arr[i][j];
			e--;
		}
	}

	int a, b;
	for (a = 0; a < 4; a++)
	{
		for  (b = 0; b < 4; b++)
		{
			printf("%d ", arr[a][b]);
		}
		printf("\n");
	}

	return 0;
	
}

