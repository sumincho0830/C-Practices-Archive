//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

// ����) 1)
/*
int main(void) {

	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int arr90[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int arr180[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int arr270[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int i = 0, j = 0, e = 0;

	//90�� ȸ��

	for (i = 0; i < 4; i++)
	{
		e = 3;
		for (j = 0; j < 4; j++) {
			arr90[i][e] = arr[j][i];
			e--;
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++) {
			printf("%d ", arr90[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	// 180�� ȸ��

	for (i = 0; i < 4; i++)
	{
		e = 3;
		for (j = 0; j < 4; j++) {
			arr180[i][e] = arr90[j][i];
			e--;
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++) {
			printf("%d ", arr180[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");


	// 270�� ȸ��

	for (i = 0; i < 4; i++)
	{
		e = 3;
		for (j = 0; j < 4; j++) {
			arr270[i][e] = arr180[j][i];
			e--;
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++) {
			printf("%d ", arr270[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	return 0; 
}
*/


// ���� 2) 
/*
void Horizontal(int* n, int* m, int* i, int* j, int* rep1, int* add, int (*arr)[100]) {

	if (*rep1%2 != 0)
	{
		if (*rep1>1)
		{
			(*j)++;
		}
		
		for (; *j < *n; (*j)++) {
			arr[*i][*j] = ++(*add);
			printf("%d ", arr[*i][*j]);
		}
		(*rep1)++;
	}
	else if(*rep1%2 == 0)
	{
		(*j)--;
		for (; *j >= *m ;(*j)--)
		{
			arr[*i][*j] = ++(*add);
			printf("%d ", arr[*i][*j]);
		}
		(*rep1)++;
		(*m)++;
	}
	

}
void Vertical(int* n, int* m, int* i, int* j, int* rep2, int* add, int (*arr)[100]) {

	if (*rep2 % 2 != 0)
	{
		for (; *j < *n; (*j)++) {
		
			arr[*i][*j] = ++(*add);
			printf("%d ", arr[*i][*j]);
		}
		(*rep2)++;
		(*n)--;
	}
	else if (*rep2 % 2 == 0)
	{
		(*j)--;
		for (; *j >= *m; (*j)--)
		{
			arr[*i][*j] = ++(*add);
			printf("%d ", arr[*i][*j]);
		}
		(*rep2)++;
	}
}


int main(void) {
	int n=0, m=0;
	int num;
	int i=0, j=0;
	int rep1=1, rep2=1;
	int all;
	int add = 0;
	int arr[100][100] = { {0} };

	printf("���� �Է�: ");
	scanf("%d",&num);
	n = num;


	 // ũ��� �缱�� �� �� ����
	//printf("ũ��: %d\n", sizeof(arr) / sizeof(arr[0]));

	
	
	for (all = 1; all <= 2*n-1; all++) // 4*2 -1 => 7�� �ݺ�
	{
		if (all%2 != 0)// all�� Ȧ�����
		{
			//���� �Լ� ���
			Horizontal(&n, &m, &i, &j, &rep1, &add, arr);

		}
		else if (all%2 == 0)// all�� ¦�����
		{
			// ���� �Լ� ���
			Vertical(&n, &m, &i, &j, &rep2, &add, arr);
		}
		
	}
	
	
	
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	
}
*/

// ���� 3)
/*
int main(void) {
	int i;
	int num;
	printf("������ ����: 0���� 99����\n");
	printf("���� �� �� ���?");
	scanf("%d", &num);


	for ( i = 0; i < num; i++)
	{
		printf("���� ���: %d\n", rand()%100); //100���� ������ �������� 0~99�� �ȴ�
	}
	return 0;
}
*/

// ���� 4)
/*
int main(void) {
	int num1, num2;
	
	srand((int)time(NULL)); // ������ �ɴ´�
	// seed of rand �� �Ű������� ���� time������ ��ȯ���� int������ ��ȯ�ؼ� ���ڷ� ����
	num1 = rand() % 6 + 1;
	num2 = rand() % 6 + 1;
	
	printf("�ֻ��� 1: %d\n", num1); //���Ÿ� ��Ȯ�Ѵ�?
	printf("�ֻ��� 2: %d\n", num2);

	return 0;
}
*/

// ���� 5)
/*
int main(void) {
	int num;
	int win=1;
	int round=0, tie=0;
	int program;

	printf("������ 1, ������ 2, ���� 3");

	// 1�� 2�� ��
	// 2�� 3�� ��
	// 3�� 1�� ��


	while (win==1)
	{
		printf("���� �Է�: ");
		scanf("%d", &num);

		srand((int)time(NULL));//���� ���� ���� ����
		// ������ 4�� ���� �� 1�� ���ؼ� 0�� ����
		program = (rand() % 4 + 1);

		if (num==1)
		{
			printf("����� ����: ����\n");
			if (program == 1) 
			{
				printf("��ǻ���� ����: ����\n");
				tie += 1;
				printf("%d�� \n",tie);
			}
			else if (program==2)
			{
				printf("��ǻ���� ����: ����\n");

				round +=1;
				printf("%d ��\n",round);
			}
			else if (program==3)
			{
				printf("��ǻ���� ����: ��\n");
				printf("Game Over\n");
				win = 0;
				break;
			}
		}
		else if (num==2)
		{
			printf("����� ����: ����\n");
			if (program == 1)
			{
				printf("��ǻ���� ����: ����\n");
				printf("Game Over\n");
				win = 0;
				break;
			}
			else if (program == 2)
			{
				printf("��ǻ���� ����: ����\n");
				tie += 1;
				printf("%d�� \n", tie);
				
			}
			else if (program == 3)
			{
				printf("��ǻ���� ����: ��\n");
				round += 1;
				printf("%d ��\n", round);
			}

		}
		else if (num == 3) 
		{
			printf("����� ����: ��\n");
			if (program == 1)
			{
				printf("��ǻ���� ����: ����\n");
				round += 1;
				printf("%d ��\n", round);
			}
			else if (program == 2)
			{
				printf("��ǻ���� ����: ����\n");
				printf("Game Over\n");
				win = 0;
				break;

			}
			else if (program == 3)
			{
				printf("��ǻ���� ����: ��\n");
				tie += 1;
				printf("%d�� \n", tie);
			}
		}
	}
	printf("%d �� %d��\n", round, tie);
}
*/

// ���� 6) 
/*
int main(void) {
	int program[3] = { 0 };
	int num1, num2, num3;
	int strike=0, ball=0;
	int i,j;
	int arr[3] = { 0 };


	srand((int)time(NULL));
	for (i = 0; i < 3; i++)
	{
		program[i] = rand() % 10;
	}
	
	printf("Game Start!\n\n");
	

	while (strike < 3)
	{
		strike = 0;
		ball = 0;

		printf("3���� ���� ����: ");
		scanf("%d %d %d", &num1, &num2, &num3);
		arr[0] = num1, arr[1] = num2, arr[2] = num3;

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (arr[i] == program[j] && i==j) {
					strike += 1;
				}
				else if (arr[i] == arr[j] && i != j) {
					ball += 1; 
				}
			}
		
		}
		printf("%d Strike, %d Ball!\n", strike, ball);
		
	}

	printf("Game Over!");
}
*/




