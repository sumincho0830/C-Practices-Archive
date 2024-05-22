/*
#include <stdio.h>

int AbsoCompare(int num1, int num2); 
int GetAbsoluteValue(int num); //returns absolute value of a number

int main(void) {
	int num1, num2;

	printf("Enter two integers: ");
	scanf_s("%d %d", &num1, &num2);
	printf("%d와 %d 중 절댓값이 더 큰 정수: %d \n", num1, num2, AbsoCompare(num1, num2));
}

int GetAbsoluteValue(int num) {
	int result;
	result = num > 0 ? num : num * (-1);
	return result;
}

int AbsoCompare(int num1, int num2) {
	int result;
	result = GetAbsoluteValue(num1) > GetAbsoluteValue(num2) ? num1 : num2;
	return result;
}

*/