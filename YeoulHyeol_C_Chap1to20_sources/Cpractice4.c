/*#define _CRT_SECURE_NO_WARNINGS    // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>

int main(void) {



	// ���ǿ� ���� 0/1 ��ȯ
	
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3, result4, result5, result6;
	

	result1 = (num1 == num2); // false
	result2 = (num1 <= num2); // true
	result3 = (num1 > num2); // false
	result4 = (num1 == 10 && num2 == 12); //true
	result5 = (num1 < 12 || num2>12); //true (�� �� �ϳ��� ���� ����)
	result6 = (!num1); //false

	// C�� True�� False �� 0�� 1�� ǥ���Ѵ�

	printf("result1: %d\n", result1);
	printf("result2: %d\n", result2);
	printf("result3: %d\n", result3);
	printf("result4: %d\n", result4);
	printf("result5: %d\n", result5);
	printf("result6: %d\n", result6);


	return 0;

	/*
	========================
	result1: 0
	result2: 1
	result3: 0
	result4: 1
	result5: 1
	result6: 0
	========================
	*/
	

	// ��ġ���� & ��ġ����
	/*
	
	int num1 = 12;
	int num2 = 12;

	printf("num1 : %d\n", num1);
	printf("num1++ : %d\n", num1+1); //��ġ/��ġ �����ڴ� ������ �ǹ̸� �����ϰ� �����Ƿ�, �ܼ��ϰ� ���ؼ� ǥ���� ���� +1�������� �����ؼ� �����־�� �Ѵ�.
	printf("num1 : %d\n\n", num1);

	printf("num2 : %d\n", num2);
	printf("++num2 : %d\n", ++num2);
	printf("num2 : %d\n\n", num2);

	return 0;
	*/

	//��ġ����
	/*
	int num1 = 10;
	int num2 = (num1--) + 2; //��ġ �����̱� ������ 10+2�� ���� ����ǰ� �� �ڿ� num--�� �����. ���� ���� 9+2=11�� �ƴ϶� 10+2=12��
	//���⿡�� �̹� num1 -= num1�� ����Ǿ��� ������ num1�� �ʱ�ȭ ���� ���� ���� �޶���

	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);
	*/

	//���� ����(������)
	/*
	 
	
	int num1=0;
	char op1="";
	int num2=0;
	int result=0;

	printf("Enter first operand: ");
	scanf_s("%d", &num1);
	printf("\nEnter operator: ");
	scanf_s("%c", &op1);//string �� conversation specifier��?
	printf("\nEnter second operand: ");
	scanf_s("%d", &num2);

	if (op1 == "+") {
		result = num1 + num2;
		return result;
	}
	else if (op1 == "-") {
		result = num1 - num2;
		return result;
	}
	else if (op1 == "*") {
		result = num1 * num2;
		return result;
	}
	else if (op1 == "/") {
		result = num1 + num2;
		return result;
	}

	printf("The answer is: %d", result);

	*/


//}

