//#include <stdio.h>

//int main(void) {

	// ���� 12-1
	// ���� 1)
	/*
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1; // ������1�� ���� ����� (num�� ���� �ּ�) 
	// ���� &ptr1�� �����ߴٸ� ptr1�� �������� ����� �޸𸮿� ���ٵǾ� num���� �ٸ� ���� ������ �� ��

	(*ptr1)++; // *�����ڰ� ������ �ּ��� ������ ��ü�� �����
	(*ptr2)++; 
	printf("%d\n", num);
	return 0;
	*/

	// ���� 2)
	/*
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int i; 

	(*ptr1) += 10; // 20
	(*ptr2) - +10; // 10
	
	i = ptr1;
	ptr1 = ptr2;
	ptr2 = i;

	printf("ptr1�� ����Ű�� ��: %d\n", *ptr1);
	printf("ptr2�� ����Ű�� ��: %d\n", *ptr2);
	*/
//}