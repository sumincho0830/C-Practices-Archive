//#include <stdio.h>

//int main(void) {

	// 예제 1
	/*
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2. 뺄셈 3. 곱셈 4. 나눗셈 \n");
	printf("선택?");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력:");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
	{
		result = num1 + num2;
		printf("%f + %f = %f\n", num1, num2, result);
	}

	if (opt == 2)
	{
		result = num1 - num2;
		printf("%f - %f = %f\n", num1, num2, result);
	}

	if (opt == 3)
	{
		result = num1 * num2;
		printf("%f * %f = %f\n", num1, num2, result);
	}

	if (opt == 4)
	{
		result = num1 / num2;
		printf("%f / %f = %f\n", num1, num2, result);
	}
	*/

	// 1이상 100미만의 정수 중에서 3의 배수이거나 4의 배수인 정수를 순서대로 출력
	/*
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 || i % 4 == 0) {
			printf("%d\n", i);
		}
	}
	*/ // 혼자 해결함!

	// 예제 2
	/*
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	if (num <= 0)
	{
		printf("입력 값은 0보다 작다.\n");
	}
	else
	{
		printf("입력 값은 0보다 작지 않다.\n");
	}

	return 0;
	*/

	// 사칙연산 + if문 
	/*
	int opt;
	double num1, num2;
	double result;

	printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n");
	printf("선택?");
	scanf_s("%d", &opt);
	printf("두 개의 실수 입력:");
	scanf_s("%lf %lf", &num1, &num2);

	if (opt == 1)
	{
		result = num1 + num2;
	}
	else if(opt == 2)
	{
		result = num1 - num2;
	}
	else if (opt == 3)
	{
		result = num1 * num2;
	}
	else
	{
		result = num1 / num2;
	}
	// 조건을 단 한개만 충족
	printf("결과: %f", result);
	*/

	// 삼 항 연산자 // (조건) ? data1 : data2 => (조건) ? (true) : (false)
	/*
	int num, abs;
	printf("정수 입력: ");
	scanf_s("%d", &num);

	abs = num>0 ? num : num * (-1);
	printf("절댓값: %d\n", abs);
	return 0;
	*/

	// 문제 8-1 
	
	// 문제 1
	/*
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i%7 == 0 || i%9 == 0)
		{
			printf("%d ", i);
		}
	}
	*/

	// 문제 2
	/*
	int num1, num2;
	int operand1, operand2;
	int diff;
	
	printf("두 개의 정수 입력: ");
	scanf_s("%d %d", &num1, &num2);
	
	// 조건이 true일 경우 op1에는 num1, op2에는 num2가 입력됨
	// 조건이 false일 경우 op1에는 num2, op2에는 num1이 입력됨
	operand1 = num1 >= num2 ? num1 : num2; // op1에 항상 더 큰 수를 저장
	operand2 = num1 >= num2 ? num2 : num1;

	diff = operand1 - operand2;

	printf("\n두 정수의 차: %d\n", diff);
	*/
	
	// 문제 3
	// 학점 출력 프로그램
	/*
	int lang, eng, math;
	double avg = 0;
	char score = "";

	printf("[점수 입력]\n");
	printf("국어: ");
	scanf_s("%d", &lang);

	printf("영어: ");
	scanf_s("%d", &eng);

	printf("수학: ");
	scanf_s("%d", &math);

	avg = (lang + eng + math) / 3;

	if (avg >= 90)
	{
		score= "A";
	}
	else if(avg >= 80)
	{
		score = "B";
	}
	else if (avg >= 70)
	{
		score = "C";
	}
	else if (avg >= 50)
	{
		score = "D";
	}
	else 
	{
		score = "F";
	}

	printf("평균: %f\n", avg);
	printf("학점: %c\n", score);
	*/

	// 문제 4
	// 두 수의 차 구하기 with 조건연산자 (2번에서 이미 완료)
	
	// break문
	/*
	int sum = 0, num = 0;
	while (1)
	{
		sum += num;
		if (sum > 5000)
			break;  // break문 실행, 따라서 반복문 탈출
		num++;
	}
	printf("sum: %d\n", sum);
	printf("num: %d\n", num);
	return 0;
	*/

	// continue 예제
	/*
	int num;

	for (num = 1; num < 20; num++)
	{
		if (num%3==0 || num%2==0)
		{
			continue; // while반복문을 빠져나온다
		}
		printf("%d\n", num);
	}
	*/

	// 문제 8-2
	// 문제 1
	// 구구단 짝수단만, 각 단의 숫자 만큼만 
	/*
	int i;
	int num;

	for (i = 2; i < 10; i++)
	{
		if (i%2 != 0)
		{
			continue;
		}
		for (num = 1; num < 10; num++)
		{
			if (num > i)
			{
				break;
			}
			printf("%d x %d = %d\n", num, i, num * i);
		}
		printf("\n");
	}*/

	// 문제 2
	/*
	int A = 1, Z = 1;
	int result; 

	for (A = 0; A<10 ; A++)
	{	
		for (Z = 0; Z < 10; Z++)
		{
			if (A==Z)
			{
				continue;
			}

			result = (A * 10 + Z) + (Z * 10 + A);
			if (result == 99)
			{
				printf("A: %d , Z: %d\n", A, Z);
			}
		}
	}
	*/
	
	
	// switch문 
	/*
	int num;
	printf("1 이상 5 이하의 정수 입력: ");
	scanf_s("%d", &num);

	switch (num)
	{
	case 1:
		printf("1은 ONE\n");
		break;
	case 2:
		printf("2는 TWO\n");
		break;
	case 3:
		printf("3은 THREE\n");
		break;
	case 4:
		printf("4는 FOUR\n");
		break;
	case 5:
		printf("5는 FIVE\n");
		break;
	default:
		break;
	}
	*/

	//switch문 - break문 생략
	/*
	char sel;
	printf("M 오전, A 오후, E 저녁\n");
	printf("입력: ");
	scanf_s("%c", &sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning\n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon\n");
		break;
	case 'E':
	case 'e':
		printf("Evening\n");
		break;
	default:
		break;
	}
	*/

	// 문제 8-3
	/*
	int n = 0;
	printf("0 이상의 정수 입력: ");
	scanf_s("%d", &n);

	switch (n/10)//정수 연산으로 나머지는 버려진다(소실) 
		//switch문의 case 조건에는 상수(정수, 실수, 문자, 문자열)만 올 수 있다
	{
	case 0:
		printf("0이상 10미만");
		break;
	case 1:
		printf("10이상 20미만");
		break;
	case 2:
		printf("20이상 30미만");
		break;
	case 3:
		printf("30이상 40미만");
		break;

	default:
		break;
	}
	*/

	// goto 구문
	/*
	int num;
	printf("자연수 입력: ");
	scanf_s("%d", &num);

	if (num == 1)
	{
		goto ONE;
	}
	else if(num == 2)
	{
		goto TWO;
	}
	else
	{
		goto OTHER;
	}

ONE:
	printf("1을 입력하셨습니다!\n");
	goto END;
TWO:
	printf("2를 입력하셨습니다!\n");
	goto END;
OTHER:
	printf("3 혹은 다른 값을 입력하셨군요!\n");
END:
	return 0;
	*/

//}