//#include <stdio.h>

/*int main(void) {

	// 문제 1
	// 비트 연산자를 활용하여 입력 받은 정수 값의 부호를 바꿔서 출력하는 프로그램
	/*
	int num1 = 0;
	int result = 0;

	printf("Enter a number: ");
	scanf_s("%d", &num1);
	result = ~num1 + 1;

	printf("The complement of %d is : %d\n", num1, result);
	*/

	// 문제 2
	// 비트 연산자를 활용하여 3 x 8 / 4 의 값 출력하기
	/*
	int num = 3;
	num = num << 3; // 8을 곱함
	num = num >> 2; // 4로 나눔

	printf("3 x 8 / 4 = %d", num);
	*/

	// 비트 연산자
	/*
	int num1 = 15;
	int num2 = 20;
	int num3 = num1 & num2; // AND 연산 (두 수가 모두 1이면 1을 반환)
	int num4 = num1 ^ num2;//XOR 연산 (두 수가 다르면 1을 반환)
	int num5 = num1 << num2; // Left Shift (왼쪽으로 num2만큼 비트 이동)
	int num6 = num1 >> num2; // Right Shift (오른쪽으로 num2만큼 비트 이동)
	int num7 = num1 | num2;// OR 연산 (둘 중 하나라도 1이면 1반환)
	int num8 = ~num1; // NOT 연산 (보수연산. 수를 반전시킴.)
	int result1 = num1 << 1;
	int result2 = num1 << 2;
	int result3 = num1 << 3; 

	printf("result1: %d\n", result1);
	printf("result2: %d\n", result2);
	printf("result3: %d\n", result3);
	// 비트의 열을 왼쪽으로 한 칸 이동시킬 때 마다 정수의 값은 두 배가 된다

	printf("AND 연산의 결과: %d \n", num3);
	printf("XOR 연산의 결과: %d \n", num4);
	printf("Left Shift 연산의 결과: %d \n", num5);
	printf("Right Shift 연산의 결과: %d \n", num6);
	printf("OR 연산의 결과: %d \n", num7);
	printf("NOT 연산의 결과: %d \n", num8);
	

	return 0;
	*/

	// 부동 소수점 오차 : 실수의 근사치를 표현할 때 나타나는 오차
	/*int i; 
	float num = 0.0;

	for (i = 0; i < 100; i++) {
		num += 0.1;
	}

	printf("0.1을 100번 더한 결과: %f\n", num);
	return 0;
	*/

	
	// C언어에서의 진수 변환
	/*
	
	// 0x로 시작하면 16진수, 0으로 시작하면 8진수로 저장된다
	int num1 = 0xA7, num2 = 0x43;
	int num3 = 032, num4 = 024;

	printf("0xA7의 10진수 정수의 값: %d\n", num1);
	printf("0x43의 10진수 정수의 값: %d\n", num2);
	printf("032의 10진수 정수의 값: %d\n", num3);
	printf("024의 10진수 정수의 값: %d\n", num4);

	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d + %d = %d \n", num3, num4, num3 + num4);

	// %d는 정수 형태 (double)의 출력을 의미하므로, 10진수 정수 형태로 출력한다.
	return 0;
	*/

//}