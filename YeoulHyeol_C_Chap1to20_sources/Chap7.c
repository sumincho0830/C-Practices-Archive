//#include <stdio.h>

//int main(void) {
	// �߰�ȣ ���� �ݺ���
	/*
	int num = 0;
	while (num < 5)
		printf("Hello world! %d\n", num++); // ��ġ�������� ���� ���Ĺ��ڿ� ���� �� ���ڸ� �ø�
	*/

	// ������ ��� ����
	/*
	int num = 1;
	int i = 0;

	while (num<=9)
	{
		while (i<=9)
		{
			printf("%d x %d = %d\n", num, i, num * i);
			i++;
		}

		num += 1;
	}
	return 0;
	*/

	// ���� 1 & ���� 2
	/*int num, i;
	printf("Enter a positive integer: ");
	scanf_s("%d", &num);
	i = 1;

	while (i <= num) {

		printf("Hello world!\n");
		printf("%d\n",3*i);
		i++;

	}
	*/

	// ���� 3
	/*
	int num =1;
	int i = 0;

	while (num != 0)
	{
		printf("\nEnter an integer : ");
		scanf_s("%d", &num);
		i += num;
	}

	printf("�Էµ� ������ ����: %d\n",i);
	return 0;
	*/
	// ���� 4
	// ������ �������� ���
	/*
	int num;
	int i = 9;
	printf("Enter an Integer:");
	scanf_s("%d", num);

	while (i>=0)
	{
		printf("%d x %d = %d", num, i, num * i);
		i--;
	}
	*/

	// ���� 5
	/*
	int i = 0;
	int rep;
	double num = 0;
	double total = 0;
	double average;

	printf("�� ���� ������ �Է��ұ��?:");
	scanf_s("%d", &rep);

	while (i++ < rep)
	{
		printf("\n������ �Է��ϼ���:");
		scanf_s("%d", &num);
		total += num;
	}

	average = total / rep;
	printf("\naverage: %d\n", average);
	*/

	// ��ø While������ ǥ���ϱ�
	/*
	int cur = 2;
	int is = 0;

	while (cur < 10)
	{
		is = 1; // ���ο� ���� ������ ���ؼ�
		while (is < 10)
		{
			printf("%d x %d = %d\n", cur, is, cur * is);
			is++;
		}

		printf("\n");
		cur++;
	}
	*/

	// ���� 7-2 
	// ���� 1
	// 5���� ���� �Է¹ޱ�
	// �� ���� ���� ���
	// ������ 1�̻� // �̸��̸� ���Է� ��û
	// 1 �̻��� ���� 5���� �Է� ���� �� �ֵ��� ���α׷� �ۼ�
	// while�� ���
	/*
	int i = 0;
	int num1 = 0;
	int total = 0;

	while (i < 5)
	{

		while (num1 <= 0)
		{
			printf("0���� ū 5���� ������ �Է��ϼ��� (%d��°):", i+1);
			scanf_s("%d", &num1); //num�� �ʱ�ȭ�ϸ鼭 0�� �ƴϰ� ��. ������ ��������.

		}
		// ������ �����ϸ� ������ �������� ���� ������ ī��Ʈ �ǵ���.
		// ������ �������� ���ϸ� ������ ���������� ���ϵ���
		total += num1;
		num1 = 0;
		i++;
	}

	printf("\n������ ������: %d \n", total);
	*/

	// ���� 2 
	// ��¹����� �׸�
	/*
	int i = 0;
	int num = 0;

	while (num < 5)
	{

		while (i < num) 
		{
			printf("o ");
			i++;
		}
		i = 0;
		printf("*\n");
		num++;
		
	}
	*/

	// Do~while�� ����
	/*
	int i =1; 
	int total = 0;
	do
	{
		printf("������ �Է��ϼ���(�������� 0�Է�):");
		scanf_s("%d", &i);
		total += i;

	} while (i != 0);
	printf("\n������: %d", total);
	*/
	
	// ���� 7-3
	// ���� 1 
	// do~while���� while������ �籸���غ���
	/*
	int i = 1;
	int total = 0;

	while (i != 0)
	{
		printf("������ �Է��ϼ���(�������� 0�Է�):");
		scanf_s("%d", &i);
		total += i;

	}
	printf("\n������: %d", total);
	*/

	/*
	int i;
	int total = 0;

	printf("������ �Է��ϼ���(�������� 0�Է�):");
	scanf_s("%d", &i); //i �ʱ�ȭ

	while (i != 0) // i�� 0�� �ƴ϶�� ���࿡ �ű�
	{
		printf("������ �Է��ϼ���(�������� 0�Է�):");
		scanf_s("%d", &i);
		total += i;

	}
	printf("\n������: %d", total);
	*/

	// ���� 2
	// 0�̻� 100������ ���ڿ��� ¦���� ���ϱ�
	/*
	int i = 0; // 0�� ���غ��� ������ 1���� ���� 
	int total = 0; 

	do
	{
		total += i; // ó���� 0�� ������
		i += 2;// 0 -> 2// ��� 1�� ���������� �����
	} while (i<=100); // ������ 2�� �������� 1%2==0 ���� �ʿ� x 

	printf("¦���� ��: %d", total);
	*/

	// ���� 3
	// ������ ���� do~while�� Ǯ���
	/*
	int i = 1, num = 2;
	do
	{
		i = 1;
		do
		{
			printf("%d x %d = %d\n", num, i, i*num);
			i++;

		} while (i < 10);
		printf("\n");
		num++;
	} while (num < 10);
	*/


	// For�� ����
	/*
	int total = 0;
	int i, num;
	printf("0���� num������ ����, num��? ");
	scanf_s("%d", &num);

	for (i = 0; i <= num; i++)
	{
		total += i;
	}

	printf("0���� %d������ ���� ���: %d \n", num, total);
	*/
	
	/*
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (num=0; input >=0.0;num++ )
	{
		total += input;
		printf("�Ǽ� �Է� (minus to quit):");
		scanf_s("%lf", &input);
	}
	printf("���: %f \n", total / (num - 1));
	*/

	// ���� 7-4
	// ���� 1
	// �� ���� ���� �Է� �ޱ�
	// ���� ����. ���� ������ ������ ���� ����ؼ� ���
	/*
	int num1 = 0;
	int num2 = 0;
	int total = 0;

	printf("���������� ���� ������ ������ �Է��Ͻÿ�: ");
	scanf_s("%d %d", &num1, &num2);

	for (total = 0 ; num1 <= num2; num1++)
	{
		total += num1;
	}

	printf("%d�� %d ������ ������ ��: %d \n", num1, num2, total);
	*/

	// ���� 2
	// n! = 1 x 2 x 3 x ... x n
	/*
	int i = 1; 
	int num;
	int fact = 1;

	printf("���� �Է�: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		fact *= i;
	}

	printf("%d�� ���丮����: %d", num, fact);
	*/
//}