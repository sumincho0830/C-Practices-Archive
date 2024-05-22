//#include <stdio.h>

//int main(void) {
	// 중괄호 생략 반복문
	/*
	int num = 0;
	while (num < 5)
		printf("Hello world! %d\n", num++); // 후치연산으로 먼저 서식문자에 대입 후 숫자를 올림
	*/

	// 구구단 출력 예제
	/*
	int num = 1;
	int i = 0;

	while (num<=9)
	{
		while (i<=9)
		{
			printf("%d x %d = %d\n", num, i, num * i);
			i++;
		}

		num += 1;
	}
	return 0;
	*/

	// 문제 1 & 문제 2
	/*int num, i;
	printf("Enter a positive integer: ");
	scanf_s("%d", &num);
	i = 1;

	while (i <= num) {

		printf("Hello world!\n");
		printf("%d\n",3*i);
		i++;

	}
	*/

	// 문제 3
	/*
	int num =1;
	int i = 0;

	while (num != 0)
	{
		printf("\nEnter an integer : ");
		scanf_s("%d", &num);
		i += num;
	}

	printf("입력된 정수의 총합: %d\n",i);
	return 0;
	*/
	// 문제 4
	// 구구단 역순으로 출력
	/*
	int num;
	int i = 9;
	printf("Enter an Integer:");
	scanf_s("%d", num);

	while (i>=0)
	{
		printf("%d x %d = %d", num, i, num * i);
		i--;
	}
	*/

	// 문제 5
	/*
	int i = 0;
	int rep;
	double num = 0;
	double total = 0;
	double average;

	printf("몇 개의 정수를 입력할까요?:");
	scanf_s("%d", &rep);

	while (i++ < rep)
	{
		printf("\n정수를 입력하세요:");
		scanf_s("%d", &num);
		total += num;
	}

	average = total / rep;
	printf("\naverage: %d\n", average);
	*/

	// 중첩 While문으로 표현하기
	/*
	int cur = 2;
	int is = 0;

	while (cur < 10)
	{
		is = 1; // 새로운 단의 시작을 위해서
		while (is < 10)
		{
			printf("%d x %d = %d\n", cur, is, cur * is);
			is++;
		}

		printf("\n");
		cur++;
	}
	*/

	// 문제 7-2 
	// 문제 1
	// 5개의 정수 입력받기
	// 그 수의 합을 출력
	// 정수는 1이상 // 미만이면 재입력 요청
	// 1 이상의 정수 5개를 입력 받을 수 있도록 프로그램 작성
	// while문 사용
	/*
	int i = 0;
	int num1 = 0;
	int total = 0;

	while (i < 5)
	{

		while (num1 <= 0)
		{
			printf("0보다 큰 5개의 정수를 입력하세요 (%d번째):", i+1);
			scanf_s("%d", &num1); //num을 초기화하면서 0이 아니게 됨. 루프를 빠져나옴.

		}
		// 조건을 충족하면 루프를 빠져나와 상위 루프가 카운트 되도록.
		// 조건을 충족하지 못하면 루프를 빠져나오지 못하도록
		total += num1;
		num1 = 0;
		i++;
	}

	printf("\n정수의 총합은: %d \n", total);
	*/

	// 문제 2 
	// 출력문으로 그림
	/*
	int i = 0;
	int num = 0;

	while (num < 5)
	{

		while (i < num) 
		{
			printf("o ");
			i++;
		}
		i = 0;
		printf("*\n");
		num++;
		
	}
	*/

	// Do~while문 예제
	/*
	int i =1; 
	int total = 0;
	do
	{
		printf("정수를 입력하세요(끝내려면 0입력):");
		scanf_s("%d", &i);
		total += i;

	} while (i != 0);
	printf("\n총합은: %d", total);
	*/
	
	// 문제 7-3
	// 문제 1 
	// do~while문을 while문으로 재구성해보기
	/*
	int i = 1;
	int total = 0;

	while (i != 0)
	{
		printf("정수를 입력하세요(끝내려면 0입력):");
		scanf_s("%d", &i);
		total += i;

	}
	printf("\n총합은: %d", total);
	*/

	/*
	int i;
	int total = 0;

	printf("정수를 입력하세요(끝내려면 0입력):");
	scanf_s("%d", &i); //i 초기화

	while (i != 0) // i가 0이 아니라면 실행에 옮김
	{
		printf("정수를 입력하세요(끝내려면 0입력):");
		scanf_s("%d", &i);
		total += i;

	}
	printf("\n총합은: %d", total);
	*/

	// 문제 2
	// 0이상 100이하의 숫자에서 짝수만 더하기
	/*
	int i = 0; // 0은 더해봤자 같으니 1부터 시작 
	int total = 0; 

	do
	{
		total += i; // 처음엔 0만 더해짐
		i += 2;// 0 -> 2// 계속 1씩 더해지도록 만들기
	} while (i<=100); // 어차피 2씩 더해지니 1%2==0 조건 필요 x 

	printf("짝수의 합: %d", total);
	*/

	// 문제 3
	// 구구단 예제 do~while로 풀어보기
	/*
	int i = 1, num = 2;
	do
	{
		i = 1;
		do
		{
			printf("%d x %d = %d\n", num, i, i*num);
			i++;

		} while (i < 10);
		printf("\n");
		num++;
	} while (num < 10);
	*/


	// For문 예제
	/*
	int total = 0;
	int i, num;
	printf("0부터 num까지의 덧셈, num은? ");
	scanf_s("%d", &num);

	for (i = 0; i <= num; i++)
	{
		total += i;
	}

	printf("0부터 %d까지의 덧셈 결과: %d \n", num, total);
	*/
	
	/*
	double total = 0.0;
	double input = 0.0;
	int num = 0;

	for (num=0; input >=0.0;num++ )
	{
		total += input;
		printf("실수 입력 (minus to quit):");
		scanf_s("%lf", &input);
	}
	printf("평균: %f \n", total / (num - 1));
	*/

	// 문제 7-4
	// 문제 1
	// 두 개의 정수 입력 받기
	// 정수 포함. 정수 사이의 정수의 합을 계산해서 출력
	/*
	int num1 = 0;
	int num2 = 0;
	int total = 0;

	printf("연속적으로 더할 정수의 범위를 입력하시오: ");
	scanf_s("%d %d", &num1, &num2);

	for (total = 0 ; num1 <= num2; num1++)
	{
		total += num1;
	}

	printf("%d와 %d 사이의 정수의 합: %d \n", num1, num2, total);
	*/

	// 문제 2
	// n! = 1 x 2 x 3 x ... x n
	/*
	int i = 1; 
	int num;
	int fact = 1;

	printf("정수 입력: ");
	scanf_s("%d", &num);

	for (i = 1; i <= num; i++)
	{
		fact *= i;
	}

	printf("%d의 팩토리얼은: %d", num, fact);
	*/
//}