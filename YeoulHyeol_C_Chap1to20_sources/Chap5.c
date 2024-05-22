//#include <stdio.h>

//int main(void) {

	// 강제 형 변환 (명시적 형 변환)
	/*
	int num1 = 3, num2 = 4;
	double result;
	result = (double)num1 / num2; // 이러면 정수의 연산이 먼저 일어나고 정수 결괏값이 한 번 더 double로 변환된다
	printf("Quotient: %f", result);
	*/

	// 자동 형 변환
	/*
	double num1 = 245;
	int num2 = 3.1415;
	int num3 = 129;
	char ch = num3;

	printf("정수 245를 실수로: %f\n", num1);
	printf("실수 3.1415를 정수로: %d\n", num2);
	printf("큰 정수 129를 작은 정수로: %d\n", ch);
	return 0;
	*/

	// 상수의 자료형
	/*
	printf("literal int size: %d\n", sizeof(7));
	printf("literal double size: %d\n", sizeof(7.14));
	printf("literal char size: %d\n", sizeof('A')); // 문자 상수는 int형으로 저장됨 (유닛코드)
	*/

	// 문제 1
	// 직사각형의 넓이 계산
	/*
	int x1 = 0, x2 = 0;
	int y1 = 0, y2 = 0;
	int area = 0;

	printf("Enter top left coordinates(x,y): ");
	scanf_s("%d %d",&x1, &y1);
	printf("Enter bottom right coordinates(x,y): ");
	scanf_s("%d %d", &x2, &y2);

	area = (x2 - x1) * (y2 - y1);

	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.",area );
	*/

	// 문제 2
	// 두 개의 실수를 double로 입력받고 사칙연산 결과 보기
	/*
	double num1, num2;

	printf("Enter two real numbers: ");
	scanf_s("%lf %lf", &num1, &num2);

	printf("\nAddition: %lf\n", num1 + num2);
	printf("Subtraction: %lf\n", num1 - num2);
	printf("Multiplication: %lf\n", num1 * num2);
	printf("Division: %lf\n", num1 / num2);
	*/

	// 문제 3

	// Appendix A의 아스키 모드 표를 참조하여
	// 1) 아스키 코드를 구성하는 값의 범위는 어덯게 되는가? char 이므로 -128~127
	// 2) 대문자 A에서 대문자 Z까지 값이 어떻게 증가하는가? 1씩 증가
	// 3) 알파벳 대문자와 소문자 간의 값의 차이는 얼마인가? 32

	// 문제 4
	// ASCII코드 변환
	/*
	char ch1;
	printf("Enter a character/alphabet: ");
	scanf_s("%c", &ch1);
	printf("The coordinating ASCII number is: %d ", ch1);
	*/

	// 문제 5
	/*
	int i;
	printf("Enter a number: ");
	scanf_s("%d", &i);
	printf("\nThe ASCII code for %d is %c\n", i, i);
	*/

	// 아스키 코드 (ASCII)
	/*
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%c %d \n", ch1, ch1);
	printf("%c %d \n", ch2, ch2);
	printf("%c %d \n", ch3, ch3);
	printf("%c %d \n", ch4, ch4);
	return 0;
	*/

	// float를 활용한 원의 넓이 계산
	/*double rad = 0, pi = 3.1415, area = 0;

	printf("원의 반지름 입력: ");
	scanf_s("%lf", &rad);

	area = rad * rad * pi;
	printf("\n원의 넓이: %lf", area);

	return 0;
	*/

	// 자료형 선택 기준고 연산 시의 형 변환
	/*
	char num1 = 1, num2 = 2, result1 = 0;
	short num3 = 300, num4 = 400, result2 = 0;

	printf("size of num1 & num2: %d, %d, \n", sizeof(num1), sizeof(num2));
	printf("size of num3 & num4: %d, %d, \n", sizeof(num3), sizeof(num4));

	printf("size of char add: %d \n", sizeof(num1+num2));
	printf("size of short add: %d \n", sizeof(num3+num4));

	result1 = num1 + num2;
	result2 = num3 + num4; 
	printf("size of result1 & result 2: %d, %d\n", sizeof(result1), sizeof(result2));

	*/
	
	//자료형
	/*char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;
	printf("변수 ch의 크기: %d 바이트\n", sizeof ch);
	printf("변수 inum의 크기: %d 바이트\n", sizeof(inum));
	printf("변수 dnum의 크기: %d 바이트\n", sizeof(dnum));

	printf("char의 크기: %d\n", sizeof(char));
	printf("int의 크기: %d\n", sizeof(int));
	printf("long의 크기: %d\n", sizeof(long));
	printf("long long의 크기: %d\n", sizeof(long long));
	printf("float의 크기: %d\n", sizeof(float));
	printf("double의 크기: %d\n", sizeof(double));
	*/

//}