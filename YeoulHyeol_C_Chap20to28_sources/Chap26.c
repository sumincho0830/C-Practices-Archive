/*#include <stdio.h>

#define NAME "홍길동"
#define age 24
#define PRINT_ADDR puts("주소: 경기도 용인시\n");

int main(void)
{
	printf("이름: %s\n", NAME);
	printf("나이: %d\n", age);
	PRINT_ADDR;
	return 0;
}

// NULL도 어딘가에 선언된 매크로

*/


/*
#include <stdio.h>

#define SQUARE(X) X*X

int main(void)
{
	int num = 20;

	printf("square of num: %d\n", SQUARE(num));
	printf("square of -5: %d\n", SQUARE(-5));
	printf("square of 2.5: %g\n", SQUARE(2.5)); // 실수형도 가능..? 매크로는 데이터 형을 지정하지 않아도 되나?

	printf("Square of 3+2: %d\n", SQUARE(3 + 2)); // 비정상적 결과 출력
	return 0;

}

*/