//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h> //stdio.h라는 이름의 헤더파일 참조 (헤더파일을 참조하는 이유?)

//int main(void) {


	//scanf함수 이용
	/*
	int result;
	int num1, num2;

	printf("정수 one; ");
	scanf("%d", &num1);
	printf("\n정수 two; ");
	scanf("%d", &num2);

	result = num1 + num2;

	printf("\n%d + %d = %d\n", num1, num2, result);
	return 0;
	*/

	//scanf함수 정수 여러개 입력 
	/*
	int result;
	int num1, num2, num3;

	printf("정수 3개 입력: ");
	scanf("%d %d %d", &num1, &num2, &num3); //scanf 함수는 "공백"을 기준으로 데이터를 분류
	
	result = num1 + num2 + num3;
	printf("\n%d + %d + %d = %d", num1, num2, num3, result);
	
	return 0;
	*/


	// I. 문제풀이
	
	/*
	// 문제1: 프로그램 사용자로부터 세 개의 정수 num1, num2, num3를 입력 받아서
	// 1) num1과 num2의 뺄셈과 곱셈
	//		num1 - num2 = result
	//		num1 + num2 = result
	// 2) num1 x num2 + num3 = result 
	// 3) num1의 제곱: num1^2
	// 4) num1/num2의 몫과 나머지
	// 5) (num1 - num2) x (num2 + num3) x (num3 % num1);


	int num1, num2, num3;
	int result;

	printf("정수 3개 입력: ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	//1번
	printf("\nnum1 - num2 = %d\n", num1 - num2);
	printf("num1 + num2 = % d\n", num1 + num2);

	//2번
	printf("%d x %d + %d = %d\n", num1, num2, num3, num1 * num2 + num3);

	//3번
	printf("num1의 제곱: % d\n", num1 ^ 2);

	//4번
	printf("num1/num2 의 몫: %d\nnum1/num2의 나머지: %d\n", num1 / num2, num1 % num2);

	//5번
	result = (num1 - num2) * (num2 + num3) * (num3 % num1);

	printf("(%d - %d) x (%d + %d) x (%d %% %d) = %d\n", num1, num2, num2, num3, num3, num1, result);

	return 0;
	*/





//}