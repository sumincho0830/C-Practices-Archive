#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// ���� 1)
/*
char* ReadUserName(void) // ������� �̸��� �Է� �޾Ƽ� ������ ���·� ��ȯ�ϴ� �Լ�
{
	char* name = (char*)malloc(sizeof(char) * 30); // �̸��� �޴� ������ �� ������ ���� �Ҵ� �� ����
	printf("What's your name? ");
	gets(name); // string�� �Է� �޾Ƽ� name�� ���� (name�� malloc���� ������ ������ �ּ�)
	return name; // �ּ� ��ȯ
}

int main(void) 
{
	char* name1;
	char* name2;
	name1 = ReadUserName(); // ���� �Է� �ް�, �����ϰ�, ����� ������ �ּҸ� name1�� �ٽ� ����
	printf("name1: %s\n", name1); // name1�� ���� �ƴ϶� �ּ� �� ��ü�� ��ȯ�ϳ�..? ���� ���ڶ� �׷��ǰ�??
	name2 = ReadUserName();
	printf("name2: %s \n", name2);


	printf("again name1: %s\n", name1);
	printf("again name2: %s\n", name2);

	free(name1);
	free(name2);

	return 0;
}
*/

// ���� 2)
/*
int main(void)
{
	int maxlen, len, i;
	char* str;

	printf("���ڿ��� �ִ� ����: ");
	scanf("%d", &maxlen);
	getchar(); // ���ۿ��� \n���� �о����

	str = (char*)malloc(sizeof(char) * (maxlen+1)); //\n���ڸ� ���� ũ��� 1 ũ�� ��´�

	printf("���ڿ� �Է�: ");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0; // \n ���� ����

	len = strlen(str);
	for (i = len; i >0; i--)
	{
		if (str[i] == ' ') { //���ڿ��� ��Ұ� ����� ������
			printf("%s", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);
	return 0;
}
*/


// ���� 3)
/*
int main(void) {

	int arrlen = 5;
	int idx = 0;
	int i;

	int* arr = (int*)malloc(sizeof(int) * arrlen); // ���̸� ���� �޾Ƽ� ����

	while (1)
	{
		printf("���� �Է�: ");
		scanf("%d", &arr[idx]); // ������ �޾Ƽ� arr�� �ε����� ������� ����

		if (arr[idx] == -1) // �Է� ���� �˻�
		{
			break;
		}

		if (arrlen == idx + 1) //���̿� �ε����� ��ġ�ϰ� �Ǹ� (�迭�� Ȯ�� �ʿ伺 �˻�)
		{
			arrlen += 3;
			arr = (int*)realloc(arr, sizeof(int) * arrlen); // ���� �Ҵ�� �迭�� ũ�⸦ Ȯ��
		}
		idx++;
	} 

	for (i = 0; i < idx; i++)
	{
		printf("%d ", arr[i]);
	}
	free(arr);
	return 0;
}

*/