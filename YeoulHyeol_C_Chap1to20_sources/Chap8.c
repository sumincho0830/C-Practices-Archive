//#include <stdio.h>

//int main(void) {

	// ���� 1
	/*
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2. ���� 3. ���� 4. ������ \n");
	printf("����?");
	scanf_s("%d", &opt);
	printf("�� ���� �Ǽ� �Է�:");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
	{
		result = num1 + num2;
		printf("%f + %f = %f\n", num1, num2, result);
	}

	if (opt == 2)
	{
		result = num1 - num2;
		printf("%f - %f = %f\n", num1, num2, result);
	}

	if (opt == 3)
	{
		result = num1 * num2;
		printf("%f * %f = %f\n", num1, num2, result);
	}

	if (opt == 4)
	{
		result = num1 / num2;
		printf("%f / %f = %f\n", num1, num2, result);
	}
	*/

	// 1�̻� 100�̸��� ���� �߿��� 3�� ����̰ų� 4�� ����� ������ ������� ���
	/*
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 4 == 0) {
			printf("%d\n", i);
		}
	}
	*/ // ȥ�� �ذ���!

	// ���� 2
	/*
	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	if (num <= 0)
	{
		printf("�Է� ���� 0���� �۴�.\n");
	}
	else
	{
		printf("�Է� ���� 0���� ���� �ʴ�.\n");
	}

	return 0;
	*/

	// ��Ģ���� + if�� 
	/*
	int opt;
	double num1, num2;
	double result;

	printf("1.���� 2.���� 3.���� 4.������\n");
	printf("����?");
	scanf_s("%d", &opt);
	printf("�� ���� �Ǽ� �Է�:");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
	{
		result = num1 + num2;
	}
	else if(opt == 2)
	{
		result = num1 - num2;
	}
	else if (opt == 3)
	{
		result = num1 * num2;
	}
	else
	{
		result = num1 / num2;
	}
	// ������ �� �Ѱ��� ����
	printf("���: %f", result);
	*/

	// �� �� ������ // (����) ? data1 : data2 => (����) ? (true) : (false)
	/*
	int num, abs;
	printf("���� �Է�: ");
	scanf_s("%d", &num);

	abs = num>0 ? num : num * (-1);
	printf("����: %d\n", abs);
	return 0;
	*/

	// ���� 8-1 
	
	// ���� 1
	/*
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i%7 == 0 || i%9 == 0)
		{
			printf("%d ", i);
		}
	}
	*/

	// ���� 2
	/*
	int num1, num2;
	int operand1, operand2;
	int diff;
	
	printf("�� ���� ���� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	
	// ������ true�� ��� op1���� num1, op2���� num2�� �Էµ�
	// ������ false�� ��� op1���� num2, op2���� num1�� �Էµ�
	operand1 = num1 >= num2 ? num1 : num2; // op1�� �׻� �� ū ���� ����
	operand2 = num1 >= num2 ? num2 : num1;

	diff = operand1 - operand2;

	printf("\n�� ������ ��: %d\n", diff);
	*/
	
	// ���� 3
	// ���� ��� ���α׷�
	/*
	int lang, eng, math;
	double avg = 0;
	char score = "";

	printf("[���� �Է�]\n");
	printf("����: ");
	scanf_s("%d", &lang);

	printf("����: ");
	scanf_s("%d", &eng);

	printf("����: ");
	scanf_s("%d", &math);

	avg = (lang + eng + math) / 3;

	if (avg >= 90)
	{
		score= "A";
	}
	else if(avg >= 80)
	{
		score = "B";
	}
	else if (avg >= 70)
	{
		score = "C";
	}
	else if (avg >= 50)
	{
		score = "D";
	}
	else 
	{
		score = "F";
	}

	printf("���: %f\n", avg);
	printf("����: %c\n", score);
	*/

	// ���� 4
	// �� ���� �� ���ϱ� with ���ǿ����� (2������ �̹� �Ϸ�)
	
	// break��
	/*
	int sum = 0, num = 0;
	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;  // break�� ����, ���� �ݺ��� Ż��
		num++;
	}
	printf("sum: %d\n", sum);
	printf("num: %d\n", num);
	return 0;
	*/

	// continue ����
	/*
	int num;

	for (num = 1; num < 20; num++)
	{
		if (num%3==0 || num%2==0)
		{
			continue; // while�ݺ����� �������´�
		}
		printf("%d\n", num);
	}
	*/

	// ���� 8-2
	// ���� 1
	// ������ ¦���ܸ�, �� ���� ���� ��ŭ�� 
	/*
	int i;
	int num;

	for (i = 2; i < 10; i++)
	{
		if (i%2 != 0)
		{
			continue;
		}
		for (num = 1; num < 10; num++)
		{
			if (num > i)
			{
				break;
			}
			printf("%d x %d = %d\n", num, i, num * i);
		}
		printf("\n");
	}*/

	// ���� 2
	/*
	int A = 1, Z = 1;
	int result; 

	for (A = 0; A<10 ; A++)
	{	
		for (Z = 0; Z < 10; Z++)
		{
			if (A==Z)
			{
				continue;
			}

			result = (A * 10 + Z) + (Z * 10 + A);
			if (result == 99)
			{
				printf("A: %d , Z: %d\n", A, Z);
			}
		}
	}
	*/
	
	
	// switch�� 
	/*
	int num;
	printf("1 �̻� 5 ������ ���� �Է�: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1�� ONE\n");
		break;
	case 2:
		printf("2�� TWO\n");
		break;
	case 3:
		printf("3�� THREE\n");
		break;
	case 4:
		printf("4�� FOUR\n");
		break;
	case 5:
		printf("5�� FIVE\n");
		break;
	default:
		break;
	}
	*/

	//switch�� - break�� ����
	/*
	char sel;
	printf("M ����, A ����, E ����\n");
	printf("�Է�: ");
	scanf_s("%c", &sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning\n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon\n");
		break;
	case 'E':
	case 'e':
		printf("Evening\n");
		break;
	default:
		break;
	}
	*/

	// ���� 8-3
	/*
	int n = 0;
	printf("0 �̻��� ���� �Է�: ");
	scanf_s("%d", &n);

	switch (n/10)//���� �������� �������� ��������(�ҽ�) 
		//switch���� case ���ǿ��� ���(����, �Ǽ�, ����, ���ڿ�)�� �� �� �ִ�
	{
	case 0:
		printf("0�̻� 10�̸�");
		break;
	case 1:
		printf("10�̻� 20�̸�");
		break;
	case 2:
		printf("20�̻� 30�̸�");
		break;
	case 3:
		printf("30�̻� 40�̸�");
		break;

	default:
		break;
	}
	*/

	// goto ����
	/*
	int num;
	printf("�ڿ��� �Է�: ");
	scanf_s("%d", &num);

	if (num == 1)
	{
		goto ONE;
	}
	else if(num == 2)
	{
		goto TWO;
	}
	else
	{
		goto OTHER;
	}

ONE:
	printf("1�� �Է��ϼ̽��ϴ�!\n");
	goto END;
TWO:
	printf("2�� �Է��ϼ̽��ϴ�!\n");
	goto END;
OTHER:
	printf("3 Ȥ�� �ٸ� ���� �Է��ϼ̱���!\n");
END:
	return 0;
	*/

//}