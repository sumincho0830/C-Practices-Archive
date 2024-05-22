//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

// Address of a double pointer variable
/*
int main(void) {
	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2;

	printf("%9p %9p \n", ptr, *dptr);
	printf("%9g %9g \n", num, **dptr);
	ptr2 = *dptr;
	*ptr2 = 10.99;
	printf("%9g %9g \n", num, **dptr);
	return; 0;
}
*/

//Pointer Swap fail example
/*
void Swap(int **p1, int **p2) {
	int *temp;
	*temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;

	ptr1 = &num1;
	ptr2 = &num2;

	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2);

	Swap(&ptr1, &ptr2);// �ּҷ� �޾Ƽ� ��� ��ȯ

	printf("*ptr1, *ptr2: %d %d\n", *ptr1, *ptr2);
	return 0;
}
*/

// Pointer Array variables
/*
int main(void) {
	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* ptrArr[] = { ptr1,ptr2,ptr3 };
	int** dptr = ptrArr; //name of an array is itself is an address&pointer to its elements
	// the name of an array is also equal to the &arr[0]
	
	printf("%d %d %d\n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d\n", *(dptr[0]), *(dptr[1]), *(dptr[2]));

}
*/

// Triple pointers
/*
int main(void) {
	int num = 100;
	int* ptr = &num;
	int** dptr = &ptr;
	int*** tptr = &dptr;

	printf("%d %d \n",tptr,&dptr);
	printf("%d %d %d \n", *tptr, dptr, &ptr);
	printf("%d %d %d %d \n", **tptr, *dptr, ptr, &num);
	printf("%d %d %d %d \n", ***tptr, **dptr, *ptr, num);

	return 0;
}
*/

// ���� 17-1

// �� ����
/*
void MaxAndMin(int arr[], int** Dmax, int** Dmin); //�迭�� �����ͷ� ���� ���� �ִ�. [] ��� *��ȣ�� ����ϸ� �ȴ�.

int main(void) {
	
	int arr[5];
	int* max = &arr[0];
	int* min = &arr[0];
	int len = sizeof(arr) / sizeof(int);
	int i;

	printf("���� 5�� �Է�: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr, len, &max, &min); //�ּҸ� ���ڷ� �ѱ�

	printf("\n");
	printf("�迭�� ����� ��: ");

	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("\n���� ���� ��: %d\n", *min);
	printf("���� ���� �� �ּ�: %d\n\n", min);

	printf("���� ū ��: %d\n",*max);
	printf("���� ū ���� �ּ�: %d\n", max);




}

void MaxAndMin(int arr[], int len, int** Dmax, int** Dmin) {
	int i;

	for (i = 0; i < len; i++)
	{
		if (i==0)
		{
			*Dmax = &arr[i];
			*Dmin = &arr[i];
		}
		else
		{
			*Dmax = **Dmax > arr[i] ? *Dmax : &arr[i];
			*Dmin = **Dmin < arr[i] ? *Dmin : &arr[i];
		}
		
	}
}
*/

// �ؼ�
/*
void MaxAndMin(int* arr, int size, int** mxPtr, int** mnPtr) {
	int* max, * min;
	int i;

	max = min = &arr[0]; //�ϴ� 0���� �� �� ����(���� ����� �־�� �ϹǷ�
	for (i = 0; i < size; i++)
	{
		if (*max < arr[i]) {
			max = &arr[i];
		}
		if (*min > arr[i]) {
			min = &arr[i];
		}
	}

	*mxPtr = max;
	*mnPtr = min;
}

int main(void) {
	int* maxPtr;
	int* minPtr;
	int arr[5];
	int i;

	printf("���� �Է�: ");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minPtr);
	printf("�ִ�:%d, �ּ�: %d, \n", *maxPtr, *minPtr);
}
*/

