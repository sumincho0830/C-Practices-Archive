//#include <stdio.h>
//int main(void) 
//{
	// ���� 1 
	// 10���� ���Ҹ� 16������
	/*
	int num;
	printf("���� �Է�: ");
	scanf_s("%d", &num);
	printf("%d�� 16����: %x ", num, num);
	*/

	// ���� 2
	/*
	int a , b;
	printf("���� 2�� �Է�: ");
	scanf_s("%d %d", &a, &b);
	printf("\n");

	a = a < b ? a : b; // a���� �� ���� ��
	b = b > a ? b : a; // b���� �� ū �� ����

	for (; a <= b; a++)
	{
		int i;
		for (i = 1; i < 10; i++)
		{
			printf("%d x %d = %d\n", a, i, a * i);
		}
		printf("\n");
	}
	*/

	// ���� 3
	// �� ���� ������ �Է¹޾� �ִ����� (Greatest Common Factor)�� ã�� ����
	// �� ���� ������ ���� �ʾƾ� �Ѵ�. ���� �� �� ���� ������ n�� �����Ѵ�.
	// for���� ����ؼ� i�� �ϳ��� �������� �־�� ã���� �ȴ� i�� ������ n�̴�.
	/*
	int num1, num2;
	int i;
	int n;

	printf("���� 2���� �Է��ϼ���: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 == 0 || num2 == 0)
	{
		printf("0�� �ƴ� ������ �Է��ϼ���: ");
	}

	n = num1 < num2 ? num1 : num2; // �� ���� ���� n�� �Է�
	
	
	for (i = 1; i <= n; i++)
	{
		if (num1%i == 0 && num2%i== 0 && i != 0)
		{
			int a = 1;
			printf("%d �� %d�� �ִ�����: %d\n", num1, num2, a++, i);

		} else
		{
			return 0;
		}
	}
	*/


	// ���� 4
	// 5,000������ DVD�� ������ 3,500��
	/*
	int cr = 0;
	int sh = 0;
	int co = 0;
	
	printf("���� ����� �����ϰ� �ִ� �ݾ�: 3500\n");
	printf("���� ������ ����: \n");

	for (cr = 1; cr <= 7; cr++)
	{
		for (sh = 1; sh <= 5; sh++)
		{
			for (co = 1; co < 9; co++)
			{
				if ((cr * 500) + (sh * 700) + (co * 400) == 3500)
				{
					printf("ũ����: %d, �����: %d, �ݶ�: %d\n", cr, sh, co);
				}
			}
		}
	}
	printf("��� �����Ͻðڽ��ϱ�?");

	*/

	// ���� 5
	// Prime number


	// ���� 6
	/*
	int sec = 0;
	int h = 0, m = 0, s = 0;

	printf("��(second) �Է�: ");
	scanf_s("%d", &sec);
	h = sec / 3600;
	s = sec % 60;
	m = sec / 60;
	m = m % 60;
	printf("[h: %d, m: %d, s: %d]", h, m, s);
	*/

	// ���� 7
	/*
	int k;
	int n;
	int num = 1;

	printf("2�� �� �����ұ��? : ");
	scanf_s("%d", &n);

	for (k = 1; k <= n; k++)
	{
		num *= 2;
	}

	printf("2�� %d��: %d", n, num);
	*/

	// ���� 8
	/*
	static int i = 0;

	printf("2�� �� �����ұ��? : ");
	scanf_s("%d", &i);

	printf("2�� %d��: %d", i, Recursive(2));
	*/
	
//}

/*
int Recursive(int num) {

	if (i <= 0)
	{
		return ;
	}

	Recursive(num*2);
	i--;
}
*/