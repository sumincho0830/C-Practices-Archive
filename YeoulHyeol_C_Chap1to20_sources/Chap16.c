//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

// 4�� ���� ����
/*
int main(void) {

	int villa[4][2];
	int population, i, j;

	// ������ ���� �ο� �Է� �ޱ�
	// i+1�� j+1ȣ

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j <2; j++)
		{
			printf("%d�� %dȣ ���� �ο�: ",i+1, j+1);
			scanf_s("%d", &villa[i][j]);
		}
	}
	printf("\n=============\n");
	printf("����Ʈ ���� �ο�: \n");

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("| %d ", villa[i][j]);
		}
		printf("\n");
	}
}
*/

/*
int main(void) {
	int villa[4][2];
	int popu, i, j;

	//������ ���� �ο� �Է� �ޱ�
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++) {
			printf("%d�� %dȣ �α���: ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	//������ ���� �α��� ����ϱ�
	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d�� �α���: %d\n", i + 1, popu);
	}
	return 0;
}
*/

// 2���� �迭�� �ּ� Ȯ���ϱ�
/*
int main(void) {
	int arr[3][2];
	int i, j;
	for (i = 0; i <3; i++)
	{
		for (j = 0; j < 2; j++) {
			printf("%p\n", &arr[i][j]); //%p�� �ּҰ��� ���� ����(conversion specifier)
		}
	}
	return 0;
}
*/

/*
int main(void) {
	int i, j;

	// 2���� �迭 �ʱ�ȭ�� �� 1
	int arr1[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	// 2���� �迭 �ʱ�ȭ�� �� 2
	int arr2[3][3] = {
		{1},
		{4,5},
		{7,8,9}
	};

	// 2���� �迭 �ʱ�ȭ�� �� 3
	int arr3[3][3] = { 1,2,3,4,5,6,7 };

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			printf("%d ", arr1[i][j]);
		}
		printf("\n");

	}
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			printf("%d ", arr2[i][j]);
		}
		printf("\n");

	}
	printf("\n");

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			printf("%d ", arr3[i][j]);
		}
		printf("\n");

	}
	printf("\n");
	return 0;
}
*/

// ���� 16-1
// ���� 1)
/*
int main(void) {
	int arr[10][10];
	int num, i, j;

	printf("������ �� ���� �����帱���? 3���� ������ �Է��ϼ���.\n");
	

	for (i = 0; i < 3; i++)
	{
		printf("%d��° ����: ", i + 1);
		scanf("%d", &num);

		for (j = 0; j < 9; j++)
		{
			arr[i][j] = num * (j + 1);
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
}
*/

/*
int main(void) {
	int i, j;
	int arr[3][9] = {
		{2,4,6,8,10,12,14,16,18},
		{3,6,9,12,15,18,21,24,27},
		{4,8,12,16,20,24,28,32,36}
	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
*/

// ���� 2)
/*
int main(void) {
	int arr1[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};
	int arr2[4][2];
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++) {
			arr2[j][i] = arr1[i][j];
		}
	}

	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 2; i++) {
			printf("%d ", arr2[j][i]);
		}
		printf("\n");
	}
}
	*/

// ���� 3)

/*
int main(void) {
	int arr[5][5];
	int i, j, totalPer, totalSub;
	
	printf("�л��� ������ �Է����ּ���.");

	for (i = 0; i < 4; i++)
	{
		totalPer = 0;
		printf("�л�%d�� ���� (����, ����, ����, ����): ",i+1);
		for (j = 0; j < 4; j++)
		{
			printf("����%d", j + 1);
			scanf_s("%d", &arr[i][j]);
			totalPer += arr[i][j];
		}
		arr[i][4] = totalPer;
	}

	/*
	for (i = 0; i < 4; i++)
	{
		totalPer = 0;
		totalSub = 0;
		for (j = 0; j < 4; j++)
		{
			totalSub += arr[j][i];
			totalPer += arr[i][j];
		}

		//������ �� ä�� ���� ���� ������ �� �� �ִ�
		arr[i][4] = totalPer;
		arr[4][i] = totalSub;

	}
	

	// ���
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


}
*/

/*
int record[5][5];

void WriteRecord(void) {
	int sum;
	int i, j;
	for (i = 0; i < 4; i++) {
		sum = 0;
		printf("%d��° �л��� ���� �Է�\n", i + 1);
		for (j = 0; j < 4; j++)
		{
			printf("���� %d: ", j + 1);
			scanf("%d", &record[i][j]);
			sum += record[i][j];
		}
		record[i][4] = sum;
	}
}

void WriteSumRecord(void) {
	int sum = 0;
	int i, j;

	for (i = 0; i < 4; i++)
	{
		sum = 0; 
		for (j = 0; j < 4; j++)
		{
			sum += record[j][i];
		}
		record[4][i] = sum;
		record[4][4] += sum;
	}
}

void ShowAllRecord(void) {
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++) {
			printf("%3d", record[i][j]); //3d?
		}
		printf("\n");
	}
}

int main(void) {
	WriteRecord();
	WriteSumRecord();
	ShowAllRecord();
	return 0;
}
*/

// 3���� �迭�� ������ ũ��
/*
int main(void) {
	int arr1[2][3][4];
	double arr2[5][5][5];
	printf("����2, ����3, ����4 int�� �迭: %d\n", sizeof(arr1));
	printf("����5, ����5, ����5 double�� �迭: %d\n", sizeof(arr2));
	return 0;
}
*/

// 3���� �迭�� ����� ����
/*
int main(void) {
	int mean = 0, i, j;
	int arr[3][3][2] = {
		{
			{70,80},
			{94,90},
			{70,85}
		},
		{
			{83, 90},
			{95,60},
			{90,82}
		},
		{
			{98,89},
			{99,94},
			{91,87}
		}
	};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++) {
			mean += arr[0][i][j];
		}
	}
	printf("A �б� ��ü ���: %g\n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++) {
			mean += arr[1][i][j];
		}
	}
	printf("B �б� ��ü ���: %g\n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 2; j++) {
			mean += arr[2][i][j];
		}
	}
	printf("C �б� ��ü ���: %g\n", (double)mean / 6);
	
}
*/




