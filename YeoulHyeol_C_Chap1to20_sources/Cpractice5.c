//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h> //stdio.h��� �̸��� ������� ���� (��������� �����ϴ� ����?)

//int main(void) {


	//scanf�Լ� �̿�
	/*
	int result;
	int num1, num2;

	printf("���� one; ");
	scanf("%d", &num1);
	printf("\n���� two; ");
	scanf("%d", &num2);

	result = num1 + num2;

	printf("\n%d + %d = %d\n", num1, num2, result);
	return 0;
	*/

	//scanf�Լ� ���� ������ �Է� 
	/*
	int result;
	int num1, num2, num3;

	printf("���� 3�� �Է�: ");
	scanf("%d %d %d", &num1, &num2, &num3); //scanf �Լ��� "����"�� �������� �����͸� �з�
	
	result = num1 + num2 + num3;
	printf("\n%d + %d + %d = %d", num1, num2, num3, result);
	
	return 0;
	*/


	// I. ����Ǯ��
	
	/*
	// ����1: ���α׷� ����ڷκ��� �� ���� ���� num1, num2, num3�� �Է� �޾Ƽ�
	// 1) num1�� num2�� ������ ����
	//		num1 - num2 = result
	//		num1 + num2 = result
	// 2) num1 x num2 + num3 = result 
	// 3) num1�� ����: num1^2
	// 4) num1/num2�� ��� ������
	// 5) (num1 - num2) x (num2 + num3) x (num3 % num1);


	int num1, num2, num3;
	int result;

	printf("���� 3�� �Է�: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	//1��
	printf("\nnum1 - num2 = %d\n", num1 - num2);
	printf("num1 + num2 = % d\n", num1 + num2);

	//2��
	printf("%d x %d + %d = %d\n", num1, num2, num3, num1 * num2 + num3);

	//3��
	printf("num1�� ����: % d\n", num1 ^ 2);

	//4��
	printf("num1/num2 �� ��: %d\nnum1/num2�� ������: %d\n", num1 / num2, num1 % num2);

	//5��
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("(%d - %d) x (%d + %d) x (%d %% %d) = %d\n", num1, num2, num2, num3, num3, num1, result);

	return 0;
	*/





//}