#include <stdio.h>

int Add(int num1, int num2)  // ���� ���� (o), ��ȯ �� (o)
{ 
	return num1 + num2;
}

void ShowAddResult(int num) // ���� ���� (o), ��ȯ �� (x)
{
	printf("������� ���: %d \n", num); // �̰� ��ȯ ���� �ƴѰ�?
}

int ReadNum(void) // ���� ���� (x), ��ȯ ��(o)
{
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void) //�������� (x), ��ȣ�� �� (x)
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�.\n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
}

int main(void) 
{
	int result, num1, num2;
	HowToUseThisProg(); // ���ڳ� ��ȯ���� ������ �Լ� ������ �״�� ����ȴ�. �� ��쿡�� printf()�Լ� ���.
	num1 = ReadNum(); // �Լ� ������ �����Ͽ� scanf �Լ��� ���� �ް� num�� ��ȯ�ϸ� num1�� �����Ѵ�
	num2 = ReadNum(); // ReadNum()�Լ��� ������ printf()���ٸ� ���ڿ��� ���̰� ��ȯ�Ǿ��� ��.
	result = Add(num1, num2); // num1, num2�� ���ڷ� ����, �Լ��� ����Ǿ� �� ���� ���� ��ȯ�ȴ�.
	ShowAddResult(result); // ���ڰ� ���޵ǰ� �Լ��� ����Ǹ鼭 ȭ�鿡 printf()�Լ� ���� ���ڷ� ���� ���� ��µȴ�.
	return 0;
}
