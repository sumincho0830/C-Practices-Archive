#include <stdio.h>

// �Լ� ���ڷ� ����Ʈ �迭 ���޹ޱ�
/*
void ShowArraryElem(int* param, int len) {

	int i;
	for (i = 0; i < len; i++)
	{
		printf("%d", param[i]); // param�� �迭
	}
	printf("\n");
}

int main(void) {

	
	
	int arr1[3] = { 1, 2, 3 };
	int arr2[5] = { 4, 5, 6, 7, 8 };
	ShowArraryElem(arr1, sizeof(arr1) / sizeof(int)); // arr1[0]�� �ּҿ� arr1 �迭�� ũ�⸦ ���ڷ� ����
	ShowArraryElem(arr2, sizeof(arr2) / sizeof(int));
	return 0;
	

	
	

*/

// �Լ� ���� ����� �迭�� �����Ͽ� �� �����ϱ�
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

	Swap(&num1, &num2); // num1�� num2�� �ּҸ� ���ڷ� �ѱ��
	printf("num1 num2: %d %d\n", num1, num2);

	return 0;
}
*/

// ���� 14-1
// ���� 1)
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
	SquareByReference(&val); // �ּҸ� �Ѱ���
	printf("value squared by reference: %d\n", val);
	

}
*/
// ���� ����1 :
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
	printf("num1 num2: %d %d\n", num1, num2);// ������ ���� �ٲ��� ����
	return 0;
	
}
*/
// ���� ����2 : Call by Reference
/*
void Swap(int* ptr1, int* ptr2) {

	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}
// �ڵ� ���ط��� Ű�����Ѵ�
int main(void) {

	int num1 = 10;
	int num2 = 20;
	printf("num1 num2: %d %d\n", num1, num2);

	Swap(&num1, &num2); // num1�� num2�� "�ּ�"�� ������! *ptr�� �ּҸ� �������� �ּҸ� ������� �Ѵ�
	printf("num1 num2: %d %d\n", num1, num2);
	return 0;
}*/

// ���� 2)
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

