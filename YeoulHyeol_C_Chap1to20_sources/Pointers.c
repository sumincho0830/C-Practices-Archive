/* 
[������ �Ѽ��� !!!]

- �ƹ� ������ �� ��û ���� Ǯ� ��(���ͳݿ��� �پ��ϰ� ã��, å ������ �����ϱ�)
- �տ� �� �ʹ� ���� �����ºη� �Ͱ� �����***

*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

// ���� 1)
/*
int main(void) {
	char a[8];
	char* ptr;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'e';
	a[5] = 'f';
	a[6] = 'g';
	a[7] = '\0';
	// �迭�� ũ�Ⱑ 8�̴� idx 7������

	ptr = a; // ������ ������ a�� ���������
	printf("%c\n", *ptr); // a[0]�� ���

	ptr = ptr + 3;
	printf("%c\n", *ptr);
}
*/

// ���� 2)
/*
int main(void) {
	char a[8];
	char* ptr;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'e';
	a[5] = 'f';
	a[6] = 'g';
	a[7] = '\0';

	ptr = a;
	*ptr = 'Z'; // a[0]�� 'Z'�� �Ҵ�
	printf("%c\n", *ptr);
	printf("%c\n", a[0]);
	printf("%c\n", *a); // �迭 �̸��� ������ ����ó�� *�����ڸ� ����� �� �ִ�

	ptr += 3;
	*ptr = 'W';

	printf("%c\n", *ptr);
	printf("%c\n", a[3]);
	printf("%s\n", a); 
	// %s conversion specifier���Ĺ��ڿ��� ����ϸ� �迭�� �ٷ� ���ڿ��� ����� �� �ִ�
	// ��, '\0' null ���ڰ� ������ ���ڿ��� �ν��� ���ؼ� ���ڿ��� ������ �̻��� ���ڰ� ��µȴ�

}
*/

// ���� 3)
/*
int main(void) {
	int a = 1;
	int* ptr;

	ptr = &a; // �迭�� �ƴ� �Ϲ� ������ �����̸��� �ּҰ� �ƴϱ� ������ &�����ڷ� �ּҰ��� ��ȯ���ش�

	*ptr = 128; // *�����ڷ� ptr�� ����Ǿ� �ִ� �ּҰ��� ����-> a�� ���� �����Ͽ� �� ����

	printf("%d\n", a);

	return 0;
}
*/

// ���� 4) �Լ� ������
/*
void Func() {
	printf("function\n");
}

int main(void) {
	void(*ptr)(); // �Լ��� ��ȯ���� void ������ ������ ������ �����ϰ� �ڿ� �Լ���ó�� ()�� ����

	ptr = &Func;// �Լ��� �ּҸ� �Է��ص�

	// ������ ������ �⺻������ ����Ű�� ����� ���¸� �״�� ���.

	(*ptr)();
	return 0;
}
*/

// ���� 5) ���� ������
/*
int main(void) {
	
	int a = 0;
	int b = 1;
	int* pa; // ������ ����
	int** pp; // ���� ������ ���� (�̰͵� �������� Ư¡ �� �ϳ�. ����Ű�� ����� ������ �޴´�. �� �����ʹ� �����͸� ����Ű�Ƿ� �������� ������ �߰��Ǿ���.)

	pa = &a; // & ������ �������� �ȵ�! �迭 ������ �򰥸���...
	pp = &pa;
	*pp = &b; //pa�� ���� b�� �ּҷ� �ٲ㼭 pa�� ����Ű�� ������� b�� �ٲ����
	**pp = 10; // �ٲ� pp�� ����� pa�� ����� b�� ���� �����Ͽ� 10���� ����

	printf("%d\n", *pa); // 10
	printf("%d\n", a); // 0 //pa�� ���� &b�� �ٲ���� ������ a�� �ƹ� ������ ���� ����
}
*/

// ���� 6)
// int�� ������ �����Ͽ� ����ڿ��� �Է¹��� �� �ش� ���� 2��� �ٲ��ִ� �Լ�
// (��ȯ ���� : void)�� ����Ͽ� �Է¹��� ���� 3�踦 ����Ͻÿ�
/*
void ChangeDouble(int* p) {

	*p = *p * 2; // ���� *�� ���׿������̱� ������ ��ȣ�� ��� �ٸ� ���꿡 ������ ��ġ�� �ʴ´�. ��Ģ���꺸�� �켱������ ������ �ִ�.
	
}

int main(void) {

	int num;

	printf("������ �Է��ϼ���:");
	scanf("%d", &num);

	ChangeDouble(&num);// �Լ��� ���ڰ� ������ �����̱� ������ �ּҰ��� �Ѱ��ش�

	printf("%d\n", num);

	return 0;

}
*/

// ���� 7)
// ���ڸ� �Է� �޾� �ش� ���ڸ� ����Ű�� �����͸� ����� �ش� ������ ���� �������� ���� ���
// �� �ּҵ� ����Ͽ� ���� ���� �������� Ȯ��
/*
int main(void) {
	int num;
	int* ptr=&num;

	printf("���� �Է�: ");
	scanf("%d", &num);

	printf("num: %d\n", num);
	printf("*ptr: %d\n", *ptr);
	printf("&num: %d\n", &num);
	printf("ptr: %d\n", ptr);
}
*/

// ���� 8)
// ���ڸ� �Է� �޾� �������� �ٲ��ִ� �Լ�
/*
void Square(int* p) {

	*p *= *p;
}

int main(void) {

	int num;
	printf("���� num�Է�: ");
	scanf("%d", &num);

	Square(&num);

	printf("num�� ����: %d\n", num);
}
*/

// ���� 9)
// ����1, ����2 �� ���� ���ڸ� �Է� 
// ������ �� ���� ���ڸ� �޴� �Լ� �� ���ڸ� �ٲ� ��
// ���
// �ּҸ� �ٲٴ� ���� �ƴ϶� ���� �ȿ� ����� �� ��ü�� �����ϴ� ����
/*
void Exchange(int* p1, int* p2) {
	int temp;
	temp = *p1; // num1�� ���� ����
	*p1 = *p2; // num2�� ���� num1�� ����
	*p2 = temp;// num1�� ���� num2�� ����
}

int main(void) {
	int num1, num2;

	printf("���� 2�� �Է�: ");
	scanf("%d %d", &num1, &num2);
	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);


	Exchange(&num1, &num2); // ���� �����ͷ� �����ִ� ������ ���߿� �� �� �� �غ���

	printf("\n�� ����\n\n");

	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);


}
*/



//===================================================================//
/*������ �迭*/


// ���� 10) ������ �迭
/*
int main(void) {
	const char* arr[3]; // 
	int i;

	arr[0] = "BlockDMask"; 
	arr[1] = "C Programming";
	arr[2] = "point_arr";
	// �� �迭 �ε����� "���ڿ� �ּ�"�� ����Ŵ
	// * �����ڸ� ����� �Ͱ� ����

	for (i = 0; i < 3; i++)
	{
		printf("arr[%d] -> %s\n", i, arr[i]);
	}

	return 0;
}
*/

// ���� 11) �迭 ������
/*
int main(void) {

	char(*arr)[3]; // �迭 ���θ� ����Ų�ٴ� �ǹ̷� *�� ���Ȱǰ�?

	char tmp1[3] = { 'b','l','o' };
	char tmp2[3] = { 'c','k','\0' }; // ���ڿ��� ��
	char tmp3[5] = { 'd','m','a','s','k' }; // �迭 ����� �޶� (*arr)�� ����ų �� ����

	printf("tmp1[3]�� �ּ�: %p\n", tmp1); // %p ���� ���ڸ� ����ϸ� �Ϲ� ������ �ּҸ� ����� �� ����
	printf("tmp2[3]�� �ּ�: %p\n", tmp2);
	printf("tmp3[5]�� �ּ�: %p\n", tmp3);

	
	printf("\n\n");

	arr = &tmp1; // �迭 �����Ϳ� �迭�� �ּҸ� ����
	printf("arr�� �ּ�: %p \t ���ڿ�: ", arr);
	for (int i = 0; i < (int)sizeof(*arr); i++) // (*arr) �迭 �������� ũ�⸦ int ������� ��ȯ�� ����ŭ for�� �ݺ�
	{
		printf("%c", (*arr)[i]); // ��ȣ ��ü�� �������ΰǰ�..?
	}
	printf("\n");

	arr = &tmp2;
	printf("arr�� �ּ�: %p \t ���ڿ�: ", arr);
	for (int i = 0; i < (int)sizeof(*arr); i++) 
	{
		printf("%c", (*arr)[i]);
	}
	printf("\n");

	arr = &tmp3;  // ����� �޶� ��ü�� ������� ����(��ü�� ����Ű�� ����)
	printf("arr�� �ּ�: %p \t ���ڿ�: ", arr);
	for (int i = 0; i < (int)sizeof(*arr); i++) 
	{
		printf("%c", (*arr)[i]); 
	printf("\n");
	

}
*/

// ���� 12) ���� ������ ���� (���� C 17-1)
/*
int main(void) {

	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2 = NULL;

	printf("%9p %9p\n", ptr, *dptr); // %9p�� 9�ڸ������� ����϶�� ��
	printf("%9g %9g\n", num, **dptr);

	ptr2 = *dptr;// ptr1;
	*ptr2 = 10.99;// == ptr=10.99 == num = 10.99
	printf("%9g %9g\n", num, **dptr);
	return 0;
}
*/

// ���� 13) Pointer Swap
/*
void Swap(int** dp1, int** dp2) {
	int* temp;// �Ϲ� �������� �ּҰ��� �޴� �����̹Ƿ� �Ϲ� �����ͷ� ����
	temp = *dp1;
	*dp1 = *dp2; // ptr1=ptr2; // ��� ���� ������ �� ���� �ƴ϶� �������� �ּҸ� ���� �����ϱ� ������ ����� �Լ� �������� �ӹ����� �ʴ´�
	*dp2 = temp;
}

int main(void) {

	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;

	printf("*ptr1: %d, *ptr2: %d\n", *ptr1, *ptr2);
	printf("num1: %d, num2: %d\n", num1, num2);

	Swap(&ptr1,&ptr2);

	printf("*ptr1: %d, *ptr2: %d\n", *ptr1, *ptr2);
	printf("num1: %d, num2: %d\n", num1, num2);
	return 0;

}
*/

// ���� 14) ������ �迭�� ������ �迭�� ������ ��
/*
int main(void) {
	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* ptrArr[] = { ptr1,ptr2,ptr3 }; // ptr[3]���� ũ�� �ڵ� ����//������ �迭
	int** dptr = ptrArr; // ������ �迭�� �̸��� ���� �������̴�
	// ���� �����Ϳ� ���� �����͸� ������ ���� �ǹǷ� ū ������ ����

	printf("%d %d %d \n", *ptrArr[0], *ptrArr[1], *ptrArr[2]);// ��ȣ ���̵� ���� ���
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *dptr[2]);
}
*/

// ���� 15) ���� ������(Triple Pointer)
/*
int main(void) {
	int num = 100;
	int *ptr = &num;
	int** dptr = &ptr;
	int*** tptr = &dptr;

	printf("%d %d %d %d \n", num, *ptr, **dptr, ***tptr);
	printf("%d %d %d %d \n", &num, ptr, *dptr, **tptr);
	printf("%d %d %d \n", &ptr, dptr, *tptr);
	printf("%d %d \n", &dptr, tptr);

}
*/

// ���� 16) 
// MaxAndMin�̶�� �̸��� �Լ��� ����
// ������ ���� maxPtr�� ���� ū ���� ����� �迭����� �ּҰ���
// minPtr�� ���� ���� ���� ����� �迭����� �ּ� ���� ����
/*
void MaxAndMin(int* arr, int len, int** max, int** min) {
	int i;

	for (i = 0; i < len; i++)
	{
		if (i==0)
		{
			*max = &arr[i];
			*min = &arr[i];
		}
		else
		{
			*max = **max > arr[i] ? *max : &arr[i];
			*min = **min < arr[i] ? *min : &arr[i];

		}
	}
}
	//�ּҰ��� ����Ǿ� ���޵�


int main(void) {
	int* maxPtr = NULL;
	int* minPtr = NULL;
	int arr[5];
	int len = sizeof(arr) / sizeof(int);

	printf("���� �Է�: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr,len, &maxPtr, &minPtr);

	printf("���� ���� ��: %d \n���� ū ��: %d\n", *minPtr, *maxPtr);
	
}
*/

// ���� 17
/*
int main(void) {
	int arr1[2][2] = {
		{1,2},{3,4}
	};

	int arr2[3][2] = {
		{1,2},{3,4},{5,6}
	};

	int arr3[4][2] = {
		{1,2},{3,4},{5,6},{7,8}
	};

	int (*ptr)[2]; // ptr�̶�� �̸��� int ���� 2�� �����ϴ� 2���� �迭 ������ ����
	int i;

	ptr = arr1; // ���� ���̰� [2]�� arr1 ���� ����

	printf("** Show 2,2 arr1 **\n");
	for (i = 0; i < 2; i++)
	{
		printf("%d %d\n", ptr[i][0], ptr[i][1]); // �����ϰ� ���� �׳� ptr�� �� �� ����
	}
	printf("\n");

	ptr = arr2; // ���� ���̰� [2]�� arr1 ���� ����

	printf("** Show 2,2 arr1 **\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d %d\n", ptr[i][0], ptr[i][1]); // �����ϰ� ���� �׳� ptr�� �� �� ����
	}
	printf("\n");


	ptr = arr3; // ���� ���̰� [2]�� arr1 ���� ����

	printf("** Show 2,2 arr1 **\n");
	for (i = 0; i < 4; i++)
	{
		printf("%d %d\n", ptr[i][0], ptr[i][1]); // �����ϰ� ���� �׳� ptr�� �� �� ����
	}
	printf("\n");

	return 0;

}
*/

// ���� 18
/*
void ShowArr2DStyle(int(*arr)[4], int column) { // �迭 ��� ��ü ���

	int i, j;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");


}

int Sum2DArr(int arr[][4], int column) { // �迭 ����� �� ��ȯ

	int i, j;
	int sum = 0;

	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}

int main(void) {

	int arr1[2][4] = { 1,2,3,4,5,6,7,8 }; // 2��
	int arr2[3][4] = { 1,1,1,1,3,3,3,3,5,5,5,5 }; // 3��

	int len1 = sizeof(arr1) / sizeof(arr1[0]);// �� ���� ũ��� ������ ���� ���� ���� �� �ִ�
	int len2 = sizeof(arr2) / sizeof(arr2[0]);



	ShowArr2DStyle(arr1, len1);
	ShowArr2DStyle(arr2, len2);
	printf("\n");

	printf("arr1�� ��: %d\n", Sum2DArr(arr1, len1));
	printf("arr1�� ��: %d\n", Sum2DArr(arr2, len2));

}
*/

// ���� 19
/*
int main(void) {

	int a[3][2] = { {1,2},{3,4},{5,6} };

	printf("a[0]: %p \n", a[0]);
	printf("*(a+0): %p \n", *(a+0));
	printf("\n");

	printf("a[1]: %p \n", a[1]);
	printf("*(a+1): %p \n", *(a + 1));
	printf("\n");

	printf("a[2]: %p \n", a[2]);
	printf("*(a+2): %p \n", *(a + 2));
	printf("\n");

	printf("%d %d \n", a[2][1], (*(a + 2))[1]); //a[2]�ּ��� [1]��
	printf("%d %d \n", a[2][1], *(a[2] + 1)); // "�ּҿ� ����"
	printf("%d %d \n", a[2][1], *(*(a + 2)+1));


	return 0;
}
*/