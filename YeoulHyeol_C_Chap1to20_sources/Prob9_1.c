/*#include <stdio.h>

int Largest(int a, int b, int c);
int Smallest(int a, int b, int c);

int main(void) {
	int num1, num2, num3;

	printf("정수 3개 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰 수: %d\n", Largest(num1, num2, num3));
	printf("가장 작은 수: %d\n", Smallest(num1, num2, num3));

}

int Largest(int a, int b, int c) {
	int result;
	int large_1;
	int large_2;

	large_1 = a > b ? a : b;
	large_2 = a > c ? a : c;
	result = large_1 > large_2 ? large_1 : large_2;

	return result;
}

int Smallest(int a, int b, int c) {
	int result;
	int large_1;
	int large_2;

	large_1 = a < b ? a : b;
	large_2 = a < c ? a : c;
	result = large_1 < large_2 ? large_1 : large_2;

	return result;
}
*/