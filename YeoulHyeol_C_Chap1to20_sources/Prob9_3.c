//#include <stdio.h>
// �� ���
/*
void Fib(int);

int main (void) {

	int num = 5;
	Fib(num);

}

int Fib (int num) {

	int i = 0;
	int a = 0;
	int a_c = 0;
	int b = 1;

	printf("%d %d ", a, b);

	for (i = 0; i < num - 2; i++)
	{
		a_c = a; //a_c == 2
		a = b; // a == 3
		b = a_c + b; // b == 5
		printf("%d ", b);
	}
}
*/

// ������ ���
/*
void ShowFiboSeries(int num) { //��ȯ���� ������ voidŸ������ ����
	int f1 = 0, f2 = 1, f3;

	if (num == 1) {
		printf("%d", f1);
	}
	else
	{
		printf("%d %d", f1, f2);
	}
	for (i = 0; i < num-2; i++)
	{
		f3 = f1 + f2;
		printf("%d", f3);
		f1 = f2;
		f2 = f3;
	}
}

int main(void) {
	int n;
	printf("����ϰ��� �ϴ� �Ǻ���ġ ������ ����: ");
	scanf_s("%d", &n);
	if (n < 1)//���� ó���� �� ���� ��
	{
		printf("1�̻��� ���� �Է��ϼ���");
		return -1;
	}
	ShowFiboSeries(n);
	return 0;
}
*/

