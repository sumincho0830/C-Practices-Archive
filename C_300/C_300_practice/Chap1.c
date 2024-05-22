#include <stdio.h>

// 1) C 프로그램 시작하기
/*
int main(void)
{
	printf("안녕하세요");
}
*/

// 2) 변수형 개념 배우기
/*
Show(int z) {
	printf("%d", z);
}
main()
{
	int x, y, z;

	x = 1, y = 2;

	z = x + y;
	
	Show(z);
}
*/

// 3) 상수형 개념 배우기
/*
#define X 1
#define PI 3.141592

main()
{
	double z;

	z = X + PI;
	printf("%f", z);
}
*/

// 4) 연산자 개념 배우기
/*
main()
{
	int x, y;
	x = -10, y = x + 5;
	if (x>y)
	{
		printf("x의 값이 y보다 큽니다");
	}
	else
	{
		printf("x의 값이 y보다 작거나 같습니다");
	}
}
*/

// 5) 조건문 개념 배우기(if~else)
/*
main()
{
	int x, y, z;
	x = 20, y = 10;
	z = x > y ? x : y;

	if (x<y)
	{
		printf("x의 값이 y보다 큽니다\n");
	}
	else
	{
		printf("x의 값이 y보다 작거나 같습니다\n");
	}

	printf("둘 중 더 큰 값은: %d \n", z);
}
*/

// 6) 순환문 개념 배우기(for)
/*
main()
{
	int i;
	int hap = 0;

	for (i = 1; i <= 10; i++)
	{
		if (hap!=0)
		{
			printf("+");
		}
		hap += i;
		printf("%d",hap);
	}
	printf("\n");

	printf("1부터 10까지의 합: %d\n", hap);
}
*/

// 7) 문자열 개념 배우기
/*
main()
{
	printf("대한민국");
}
*/

// 8) 함수 개념 배우기
/*
int hapf(int val);

main()
{
	printf("1부터 10까지의 합은 %d\n", hapf(10));
	printf("1부터 100까지의 합은 %d\n", hapf(100));
	printf("1부터 1000까지의 합은 %d\n", hapf(1000));

}

int hapf(int val)
{
	int i;
	int hap = 0;

	for (i = 1; i <= val; i++)
	{
		hap += val;
	}

	return hap;
}
*/
