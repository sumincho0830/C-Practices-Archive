#include <stdio.h>

// 1) C ���α׷� �����ϱ�
/*
int main(void)
{
	printf("�ȳ��ϼ���");
}
*/

// 2) ������ ���� ����
/*
Show(int z) {
	printf("%d", z);
}
main()
{
	int x, y, z;

	x = 1, y = 2;

	z = x + y;
	
	Show(z);
}
*/

// 3) ����� ���� ����
/*
#define X 1
#define PI 3.141592

main()
{
	double z;

	z = X + PI;
	printf("%f", z);
}
*/

// 4) ������ ���� ����
/*
main()
{
	int x, y;
	x = -10, y = x + 5;
	if (x>y)
	{
		printf("x�� ���� y���� Ů�ϴ�");
	}
	else
	{
		printf("x�� ���� y���� �۰ų� �����ϴ�");
	}
}
*/

// 5) ���ǹ� ���� ����(if~else)
/*
main()
{
	int x, y, z;
	x = 20, y = 10;
	z = x > y ? x : y;

	if (x<y)
	{
		printf("x�� ���� y���� Ů�ϴ�\n");
	}
	else
	{
		printf("x�� ���� y���� �۰ų� �����ϴ�\n");
	}

	printf("�� �� �� ū ����: %d \n", z);
}
*/

// 6) ��ȯ�� ���� ����(for)
/*
main()
{
	int i;
	int hap = 0;

	for (i = 1; i <= 10; i++)
	{
		if (hap!=0)
		{
			printf("+");
		}
		hap += i;
		printf("%d",hap);
	}
	printf("\n");

	printf("1���� 10������ ��: %d\n", hap);
}
*/

// 7) ���ڿ� ���� ����
/*
main()
{
	printf("���ѹα�");
}
*/

// 8) �Լ� ���� ����
/*
int hapf(int val);

main()
{
	printf("1���� 10������ ���� %d\n", hapf(10));
	printf("1���� 100������ ���� %d\n", hapf(100));
	printf("1���� 1000������ ���� %d\n", hapf(1000));

}

int hapf(int val)
{
	int i;
	int hap = 0;

	for (i = 1; i <= val; i++)
	{
		hap += val;
	}

	return hap;
}
*/
