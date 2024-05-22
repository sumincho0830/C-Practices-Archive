//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>


// ���� 1)
/*
void SimpleAdder(int n1, int n2) {
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void ShowString(char* str) { //char ���� ���� ������ ���� (�迭�� ���� �� ����)
	printf("%s\n", str);
}

int main(void) {
	char* str = "Funtion Pointer"; //string�� �迭��. %s ���·� ����ϸ� \0�� �������� �迭 ��ü�� ��µǰ�, �������� �ּ�. ���� �����ͷ� ȣ��.
	int num1 = 10, num2 = 20;
	void (*fptr1)(int, int) = SimpleAdder;
	void(*fptr2)(char*) = ShowString;

	fptr1(num1, num2);
	fptr2(str);

	return 0;
}
*/

// ���� 2)
// �Լ� ������ Ȱ��
/*
int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)) { // �Ű� ������ �Լ� �����Ͱ� �� ���� �ִ�
	return cmp(age1, age2); // ���ڷ� ���� �Լ��� �������� ���ļ� ���� �� �ִ�
}

int OlderFirst(int age1, int age2) {

	int Age;
	Age = age1 > age2 ? age1 : age2;
	return Age;
}

int YoungerFirst(int age1, int age2) {
	
	int Age;
	Age = age1 < age2 ? age1 : age2;
	return Age;
}

int main(void) {
	int age1 = 20;
	int age2 = 30;
	int first;

	printf("���� ����1 \n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d���� %d�� �� %d���� ���� ����! \n\n", age1, age2, first);

	printf("���� ����2 \n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d���� %d�� �� %d���� ���� ����! \n\n", age1, age2, first);

	return 0;
}
*/

// ���� 3) void ������
/*
void SoSimple(void) {
	printf("I'm so simple.\n");
}

int main(void) {
	int num = 20;
	void* ptr; // void ������

	ptr = &num; // ���� num�� �ּҰ� ���� (void�����ʹ� �ƹ� ������ �ּҳ� ������ �� �ִ�)
	printf("%p \n", ptr);

	ptr = SoSimple; // ���� num�� �Լ��� �ּҰ�(�Լ���) ����
	printf("%p \n", ptr);
	return 0;
}
*/

// ���� 4) main�Լ��� ���� ����
/*
int main(int argc, char* argv[]) {
	int i = 0;
	printf("���޵� ���ڿ��� ��: %d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("%d��° ���ڿ�: %s\n", i + 1, argv[i]);
	}
	return 0;
}
*/

// ���� 5) 
/*
void ShowAllString(int argc, char* argv[]) {
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}

int main(void) {
	char* str[3] = {
		"C Programming",
		"C++ Programming",
		"JAVA Programming"
	}; // string Ÿ�� ��� 3���� ������ �迭
	// string�� �迭. �� �迭�� �迭�� �迭. �������� ������?

	ShowAllString(3, str);
	return 0;
}
*/

// ���� 6) main�Լ��� ���� ���� ���� (������ ���ڿ� NULL Ȯ��)
/*
int main(int argc, char* argv[]) {
	int i = 0;
	printf("���޵� ���ڿ��� ��: %d\n", argc);

	while (argv[i] != NULL)
	{
		printf("%d��° ���ڿ�: %s\n", i+1, argv[i]);
		i++;
	}
	return 0;
}
*/