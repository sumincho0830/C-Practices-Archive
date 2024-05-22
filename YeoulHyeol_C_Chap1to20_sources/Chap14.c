#include <stdio.h>

// 함수 인자로 포인트 배열 전달받기
/*
void ShowArraryElem(int* param, int len) {

	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d", param[i]); // param은 배열
	}
	printf("\n");
}

int main(void) {

	
	
	int arr1[3] = { 1, 2, 3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };
	ShowArraryElem(arr1, sizeof(arr1) / sizeof(int)); // arr1[0]의 주소와 arr1 배열의 크기를 인자로 전달
	ShowArraryElem(arr2, sizeof(arr2) / sizeof(int));
	return 0;
	

	
	

*/

// 함수 내에 선언된 배열에 접근하여 값 변경하기
/*
void ShowArrayElem(int* param, int len) {
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d", param[i]);
	}
	printf("\n");
}

void AddArrayElem(int* param, int len, int add) {

	int i;
	for (i = 0; i < len; i++)
	{
		param[i] += add;
	}
}
int main(void) {

	int arr[3] = { 1, 2, 3 };
	AddArrayElem(arr, sizeof(arr) / sizeof(int), 1);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	AddArrayElem(arr, sizeof(arr) / sizeof(int), 2);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	AddArrayElem(arr, sizeof(arr) / sizeof(int), 3);
	ShowArrayElem(arr, sizeof(arr) / sizeof(int));

	return 0;
}
*/

// Call by Reference
/*
void Swap(int* ptr1, int* ptr2) {

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void) {

	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d\n", num1, num2);

	Swap(&num1, &num2); // num1과 num2의 주소를 인자로 넘긴다
	printf("num1 num2: %d %d\n", num1, num2);

	return 0;
}
*/

// 문제 14-1
// 문제 1)
/*
int SquareByValue(int num) {

	num *= num;
	return num;
}

void SquareByReference(int *ptr){
	
	*ptr *= *ptr;
}

int main(void) {
	int val = 3;

	printf("value: %d, square by value: %d\n", val, SquareByValue(val));
	SquareByReference(&val); // 주소를 넘겨줌
	printf("value squared by reference: %d\n", val);
	

}
*/
// 예제 복습1 :
/*
void Swap(int n1, int n2) {
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1 n2: %d %d\n", n1, n2);
}

int main(void) {
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d\n", num1, num2);

	Swap(num1, num2);
	printf("num1 num2: %d %d\n", num1, num2);// 기존의 값은 바뀌지 않음
	return 0;
	
}
*/
// 예제 복습2 : Call by Reference
/*
void Swap(int* ptr1, int* ptr2) {

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
// 코드 문해력을 키워야한다
int main(void) {

	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d\n", num1, num2);

	Swap(&num1, &num2); // num1과 num2의 "주소"를 보내줌! *ptr로 주소를 받으려면 주소를 보내줘야 한다
	printf("num1 num2: %d %d\n", num1, num2);
	return 0;
}*/

// 문제 2)
/*
void Swap3(int* ptr1, int* ptr2, int* ptr3) {
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = *ptr3;
	*ptr3 = temp;
}

int main(void) {
	int num1, num2, num3;
	
	printf("num2: ");
	scanf_s("%d", &num2);
	printf("num3: ");
	scanf_s("%d", &num3);

	Swap3(&num1, &num2, &num3);
	printf("num1: %d, num2: %d, num3: %d\n", num1, num2, num3);
}
*/

