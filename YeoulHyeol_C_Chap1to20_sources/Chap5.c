//#include <stdio.h>

//int main(void) {

	// ���� �� ��ȯ (����� �� ��ȯ)
	/*
	int num1 = 3, num2 = 4;
	double result;
	result = (double)num1 / num2; // �̷��� ������ ������ ���� �Ͼ�� ���� �ᱣ���� �� �� �� double�� ��ȯ�ȴ�
	printf("Quotient: %f", result);
	*/

	// �ڵ� �� ��ȯ
	/*
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("���� 245�� �Ǽ���: %f\n", num1);
	printf("�Ǽ� 3.1415�� ������: %d\n", num2);
	printf("ū ���� 129�� ���� ������: %d\n", ch);
	return 0;
	*/

	// ����� �ڷ���
	/*
	printf("literal int size: %d\n", sizeof(7));
	printf("literal double size: %d\n", sizeof(7.14));
	printf("literal char size: %d\n", sizeof('A')); // ���� ����� int������ ����� (�����ڵ�)
	*/

	// ���� 1
	// ���簢���� ���� ���
	/*
	int x1 = 0, x2 = 0;
	int y1 = 0, y2 = 0;
	int area = 0;

	printf("Enter top left coordinates(x,y): ");
	scanf_s("%d %d",&x1, &y1);
	printf("Enter bottom right coordinates(x,y): ");
	scanf_s("%d %d", &x2, &y2);

	area = (x2 - x1) * (y2 - y1);

	printf("�� ���� �̷�� ���簢���� ���̴� %d�Դϴ�.",area );
	*/

	// ���� 2
	// �� ���� �Ǽ��� double�� �Է¹ް� ��Ģ���� ��� ����
	/*
	double num1, num2;

	printf("Enter two real numbers: ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("\nAddition: %lf\n", num1 + num2);
	printf("Subtraction: %lf\n", num1 - num2);
	printf("Multiplication: %lf\n", num1 * num2);
	printf("Division: %lf\n", num1 / num2);
	*/

	// ���� 3

	// Appendix A�� �ƽ�Ű ��� ǥ�� �����Ͽ�
	// 1) �ƽ�Ű �ڵ带 �����ϴ� ���� ������ ��F�� �Ǵ°�? char �̹Ƿ� -128~127
	// 2) �빮�� A���� �빮�� Z���� ���� ��� �����ϴ°�? 1�� ����
	// 3) ���ĺ� �빮�ڿ� �ҹ��� ���� ���� ���̴� ���ΰ�? 32

	// ���� 4
	// ASCII�ڵ� ��ȯ
	/*
	char ch1;
	printf("Enter a character/alphabet: ");
	scanf_s("%c", &ch1);
	printf("The coordinating ASCII number is: %d ", ch1);
	*/

	// ���� 5
	/*
	int i;
	printf("Enter a number: ");
	scanf_s("%d", &i);
	printf("\nThe ASCII code for %d is %c\n", i, i);
	*/

	// �ƽ�Ű �ڵ� (ASCII)
	/*
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	return 0;
	*/

	// float�� Ȱ���� ���� ���� ���
	/*double rad = 0, pi = 3.1415, area = 0;

	printf("���� ������ �Է�: ");
	scanf_s("%lf", &rad);

	area = rad * rad * pi;
	printf("\n���� ����: %lf", area);

	return 0;
	*/

	// �ڷ��� ���� ���ذ� ���� ���� �� ��ȯ
	/*
	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;

	printf("size of num1 & num2: %d, %d, \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4: %d, %d, \n", sizeof(num3), sizeof(num4));

	printf("size of char add: %d \n", sizeof(num1+num2));
	printf("size of short add: %d \n", sizeof(num3+num4));

	result1 = num1 + num2;
	result2 = num3 + num4; 
	printf("size of result1 & result 2: %d, %d\n", sizeof(result1), sizeof(result2));

	*/
	
	//�ڷ���
	/*char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("���� ch�� ũ��: %d ����Ʈ\n", sizeof ch);
	printf("���� inum�� ũ��: %d ����Ʈ\n", sizeof(inum));
	printf("���� dnum�� ũ��: %d ����Ʈ\n", sizeof(dnum));

	printf("char�� ũ��: %d\n", sizeof(char));
	printf("int�� ũ��: %d\n", sizeof(int));
	printf("long�� ũ��: %d\n", sizeof(long));
	printf("long long�� ũ��: %d\n", sizeof(long long));
	printf("float�� ũ��: %d\n", sizeof(float));
	printf("double�� ũ��: %d\n", sizeof(double));
	*/

//}