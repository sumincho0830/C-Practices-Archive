#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ����1
// ���̰� 10�� �迭�� ����
// 10���� ���� �Է¹ޱ�
// Ȧ���� ¦���� �������� ���
/*
void Even(int *arr) { //�迭�� ������ ������ �Ѱܾ� �Ѵ�
	
	int i;

	printf("¦�� ���: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i]%2==0)
		{
			printf("%d ", arr[i]);
		}
	}
}

void Odd(int *arr) {

	int i;

	printf("Ȧ�� ���: ");

	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 != 0)
		{
			printf("%d ", arr[i]);
		}
	}
}

int main(void) {

	int arr[10];
	int num;
	int i;
	
	printf("�� 10���� ���� �Է�\n");

	for (i = 0; i < 10; i++)
	{
		printf("%d��° ������ �Է��ϼ���: ", i + 1);
		scanf_s("%d", &num); // �迭�� �̸��� �迭[0]�� �ּ��̱� ������ &�����ڸ� ����� �ʿ䰡 ����(�ּҰ��� ���� ��ȯ���� �ʴ´�.�迭�̸��� [0]�� �ε����̰� �� ���� �ٸ� �ε����� �Է��ϸ� [0]���κ��� �ε��� ��ŭ�� �ּ��� ���� ��ȯ�Ѵ�)
		arr[i] = num;
	}

	Odd(arr);
	printf("\n");
	Even(arr);//arr�� �̹� �ּ��̱� ������ &������ ���X
	

}
*/

// ���� 2
// 10���� ���·� ������ �Է� �ް�
// 2������ ��ȯ�Ͽ� ���
// �迭�� ����� �����ϰ� �ڿ������� ���
/*
int main(void) {

	int num = 10;
	int i = 0;
	int arr[100] = { 0 };

	printf("10���� ���� �Է�:"); 
	scanf_s('%d', &num);

	while (num > 0)
	{					  // [������ ��ȯ] -> ���� 2�� ���� �������� ���� ����
		arr[i] = num % 2; // 1) �ε��� i���� �迭�� num�� 2�� ���� ������ ����
		num = num / 2;   // 2) num���� num�� 2�� ���� ���� �ٽ� ����(2�� �������� ���� �� ���� �ݺ��� ��)
		i++;
	}

	
	while (i>=0) // i�� 0�� ������..�ε����ε�?
	{ 
		printf("%d ", arr[i-1]); // ���� ���� �ε����� i���� �ϳ��� ���鼭 �迭�� �Ųٷ� ���
		i--;
	}

	// while���� ���� ���ذ� �� �ʿ��� ���̴±�

}
*/

/*
int main(void) {
	int a[65] = {0};//���� �� 0���� �ʱ�ȭ ��
	int i = 0;
	int num;
	
	printf("10���� ���� �Է�: ");
	scanf_s("%d", &num);

	while (num > 0)
	{
		a[i] = num % 2;
		num = num / 2;
		i++; // ������ i�� +1�� �ǰ� ����. �Ʒ� for������ i���� ������ �ϸ� �ȿ� �����Ͱ� ��� ���̰� ��µǰų� ����ó����..?
	}	// ������ ����� ���ڸ� �����༭ ����


	for (i = i-1; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
}
*/

// ����3
// ���� 10���� �迭
// 10���� ������ �Է� �ޱ�
// Ȧ���� �տ�������, ¦���� �ڿ������� ä���
/*
int main(void) {

	int arr[10] = { 0 };
	int num;
	int o = 0;
	int e = 9;
	int i;

	printf("�� 10���� ������ �Է��ϼ���.\n\n");
	for (i = 0; i < 10; i++)
	{
		printf("���� %d: ", i+1);
		scanf_s("%d", &num);
		if (num%2==0)
		{
			arr[e] = num;
			e--;
			
		}
		else
		{
			arr[o] = num;
			o++;
		}
	}
	printf("\n�迭 arr�� ����� ����:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
*/

// ���� 4
// ���ڿ� �Է� �ޱ�
/*
int main(void) {

	char str[50] = "Hello";

	//("���ڿ��� �Է��ϼ���:");
	//scanf("%s", str);// ���ڸ� �Է� �޾Ƽ� ����

	// �Ϲ� scan�� ���ų� scanf_s�� ���� ũ�⸦ ������ �־�� ������ ���� �ʴ´�.

	printf("���ڿ�: %s\n", str); //������ �������� ���ڿ� 1���� �Ǵ�. ���ڿ� 1���� ����ȴ�.

	printf("%c\n", str[4]);


	// ���ڿ��� ������ �Է� ����
	// ���ڿ��� ����
	//int i;

	// ���ڿ��� ���̰� ¦���� ��
	//int s;
	//int e;
	//int isPalin = 1;

	// ���ڿ��� ���(���� ����) ���ڴ� i/2
	// ������ �Ǵ� ������ �ε����� i/2 -1

	// if (isPalin == 1) { printf("ȸ���Դϴ�") }
	// else { printf("ȸ���� �ƴմϴ�") }
}
*/
/*
int main(void) {

	char str[50];
	int idx = 0;

	printf("���ڿ� �Է�: ");
	scanf("%s", str); // ���ڿ��� �Է� �޾Ƽ� str�� ����
	printf("�Է� ���� ���ڿ�: %s\n", str);
	printf("���� ���� ���: ");

	while (str[idx] != 0); // str�� ��Ұ� ���� ���ڿ��� �ƴ� ��
	{
	//for (idx = 0; idx < 5; idx++)
	//{
		printf("%c", str[idx]); // idx ��ġ�� ��Ҹ� ���� ���ڷ� ���
	}
		
		
	//}
	printf("\n");
}
*/

// ���� 5
// ���� ���� �Լ�
/*
void BubbleSort(int ary[], int len);

int main(void) {
	int arr[4] = { 3,2,4,1 };
	int i;
	BubbleSort(arr, sizeof(arr) / sizeof(int)); //����

	for ( i = 0; i < 4; i++) // 4�� �ݺ�
	{
		printf("%d", arr[i]); // 4�� ���
	}
	printf("\n");
	return 0;
}

void BubbleSort(int ary[], int len) {
	int i, j;
	int temp;

	for (i = 0; i < len-1; i++)  // �迭�� ���̸�ŭ �ݺ�. i�� �ε����� ����
	{
		for (j = 0; j < (len-i)-1; j++) // �迭�� ���� 4���� i��ŭ ����, �ٽ� 1�� ����: 4 > 3 > 2 > 1
		{
			if (ary[j] > ary[j + 1]) {

				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}

}
*/

/*

void DeSort(int ary[], int len);

int main(void) {

	int arr[7];
	int i, len;

	len = sizeof(arr) / sizeof(int); //�迭�� ����

	printf("���� 7���� �Է��ϼ���.\n");

	for (i = 0; i < len ; i++)
	{
		printf("���� %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	DeSort(arr, len);

	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

void DeSort(int ary[], int len) {
	int i, j, temp;

	for (i = 0; i < len-1; i++)
	{
		for (j = 0; j < len-1-i; j++)
		{
			if (ary[j]<ary[j+1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}
*/




