//#include <stdio.h>

/*
int SimpleFuncOne(void) {
	int num = 10; // ���� ���ĺ��� num ��ȿ (num is valid after declaration to the point it escapes the function)
	num++;
	printf("SimpleFuncOne num : %d \n", num);
	return 0; // SingFuncOne�� num�� ��ȿ�� ������ ����

}

int SimpleFuncTwo(void) {
	int num1 = 20;
	int num2 = 30;
	num1++, num2--;
	printf("num1&num2: %d %d \n", num1, num2);
	return 0;
}

int main(void) {
	int num = 17;
	SimpleFuncOne();
	SimpleFuncTwo();
	printf("main num: %d \n", num);
	return 0;
}
*/

// ���� 9-2
/*
int AddToTotal(int num) 
{
	static int total = 0;
	total += num;
	return total;
}

int main(void) 
{
	int num, i;
	for (i = 0; i < 3; i++)
	{
		printf("�Է� %d: ", i+1);
		scanf_s("%d", &num);
		printf("����: %d \n", AddToTotal(num));

	}
	return 0;
}
*/

// ����Լ�  Recursive call function
/*
void Recursive(int num) {
	if (num<=0) // ����� Ż�� ���� Escape condition of the recursive call function
	{
		return;
	}
	printf("Recursive call! %d\n", num);
	Recursive(num - 1); // subsequently decreases value
}

int main(void) {
	Recursive(3);
	return 0;
}
*/

// ����Լ� ���丮�� ����
/*
int Factorial(int num) {
	if (num == 0)
	{
		return 1;
	}
	else {
		return num * Factorial(num - 1);
	}
}

int main(void) {
	printf("1! = %d\n", Factorial(1));
	printf("2! = %d\n", Factorial(2));
	printf("3! = %d\n", Factorial(3));
	printf("4! = %d\n", Factorial(4));
	printf("5! = %d\n", Factorial(5));

	return 0;
}
*/