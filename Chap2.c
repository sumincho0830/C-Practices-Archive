#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

// 11) 문자형 변수 이해하기
/*
main() 
{
	char ch;
	unsigned char uch;
	char k;

	ch = 200; // char의 범위는 -128 ~ +127 이기 때문에 다른 값이 출력된다(다른 부분 메모리를 침범하게 되나?)
	uch = 200;
	k = 'a';

	printf("%d\n", ch);
	printf("%d\n", uch);
	printf("%d\n", k);
}
*/

// 12) 정수형 변수 이해하기
/*
main() 
{
	int i;
	unsigned int j;
	int k;

	i = 2000000000;
	j = 4000000000;
	k = 'b';

	printf("%d\n", i);
	printf("%u\n", j); // 서식문자 주의할 것
	printf("%d\n", k);
}
*/

// 13) 실수형 변수 이해하기 (float)
/*
main()
{
	float d;
	double d1;
	double d2;

	d = 3.141592;
	d1 = 1234567890;
	d2 = 'c'; // 99

	printf("%E\n", d); // 왜 %E?
	printf("%E\n", d1);
	printf("%E\n", d2);

}
*/

// 14) 논리형 변수 이해하기 (bool)
/*
main()
{
	int b;
	int j;

	b = 10 > 5; // true. 1 이상의 숫자 반환
	j = 10 > 20; // false. 0 반환

	printf("논리형 변수 b의 값은: %d\n", b);
	printf("논리형 변수 j의 값은: %d\n", j);

	if (b)
	{
		printf("10>5의 식은 참입니다.\n");
			
	}
	else {
		printf("10>5의 식은 거짓입니다.\n");

	}

	if (j)
	{
		printf("10>20의 식은 참입니다.\n");

	}
	else
	{
		printf("10>20의 식은 거짓입니다.\n");

	}

	if (-1)
	{
		printf("-1은 참입니다.\n");
	}
	else
	{
		printf("-1은 거짓입니다.\n");

	}
}
*/

// 활용하는 예시를 아주 많이 보는 게 좋겠다

// 15) 문자열형 변수 이해하기(char*)
// 문자열형 변수는 "포인터"
/*
main() {
	
	// char형의 배열을 선언하면 자동으로 문자열로 인식. 
	//이 배열의 길이는 4글자 + \n까지 포함하여 총 5로 자동 설정 & 저장됨
	char str[] = "대한민국";
	char* j = "I love Korea"; // 포인터 변수에 문자열 저장

	printf("문자열형 변수 str의 값은: %s\n", str); // %s를 사용하면 문자열 str을 바로 출력할 수 있음
	printf("문자열형 변수 j의 값은 %s\n", j);// j는 문자열 포인터이기 때문에 이렇게 출력하면...주소를..반환하게 됨..! 배열이니까 배열이름은 주소이고, %s는 그 주소에 있는 문자열을 반환하는 서식 먼자열임

}
*/

// 16) 문장형 상수 이해하기(char)
/*
#define HUNDRED 100 // 매크로

const char j = 10; // 전역변수

main()
{
	// HUNDRED = 200; // 에러 - 매크로
	// j = 200; // 에러 - 상수

	printf("문자형 상수 HUNDRED의 값은 %d\n", HUNDRED);
	printf("문자형 상수 j의 값은 %d\n", j);

}
*/

// 17) 정수형 상수 이해하기(int)
/*
#define HUNDRED_THOUSAND 100000
const j = 200000; // 만약 형식 지정을 안 하면? -> 그래도 실행은 됨
main()
{
	// HUNDRED_THOUSAND = 100000;
	// j = 200000;

	printf("%d\n", HUNDRED_THOUSAND);
	printf("%d\n", j);
}
*/

// 18) 실수형 상수 이해하기(double)
/*
#define PI 3.141592

const double j = 1.23456789;

main()
{
	printf("%f %f", PI, j); // printf함수에는 %lf가 적용이 되지 않는다
}
*/

// 19) 논리형 상수 이해하기 (bool)
/*
#define TRUE 1
#define FALSE 0

main()
{
	if (TRUE)
	{
		printf("TRUE의 값은 참입니다");
	}
	else
	{
		printf("TRUE의 값은 거짓입니다");
	}

	if(FALSE)
	{
		printf("FALSE의 값은 참입니다");
	}
	else // 조건이 FALSE이므로 여기가 출력됨
	{
		printf("FALSE의 값은 거짓입니다");
	}
	
}
*/

// 20) 문자열형 상수 이해하기 (char)
/*
#define KOREA "대한민국"
#define BOOK "This is a book"

const char* SOCCER = "나는 축구를 좋아합니다."; //크기는 25

main()
{
	printf("문자열형 상수 KOREA의 값: %s, %d\n", KOREA, sizeof(KOREA));
	printf("문자열형 상수 BOOK의 값: %s, %d\n", BOOK, sizeof(BOOK));
	printf("문자열형 상수 SOCCER의 값: %s, %d\n", SOCCER, sizeof(SOCCER)); // 왜 크기가 8...?

	return 0;
}
*/

// 21) 대입 연산자 이해하기 (=)
/*
main()
{
	int x = 1;
	int y = 2;
	int z;
	int zz;

	z = x + y;

	zz = printf("z의 값:%d\n", z); // printf의 반환값은 출력문 (첫 번째 인자)의 크기 (여기서는 9 정도?)
	printf("zz의 값: %d\n", zz);
}
*/

// 22) 부호 연산자 이해하기 (+,-)
/*
main()
{
	int x = +4;
	int y = -2;

	printf("x + (-y) = %d\n", x + (-y));
	printf("-x + (+y) = %d\n", -x + (+y));
}
*/

// 23) 사칙 연산자 이해하기 (+,-,*,/)
/*
main()
{
	int x = 4;
	int y = 2;
	int z;

	z = x + y;
	printf("%d ", z);
	z = x - y;
	printf("%d ", z);
	z = x * y;	
	printf("%d ", z);
	z = x / y;
	printf("%d ", z);
	z = (x + y) * (x - y);
	printf("%d ", z);
	z = (x * y) + (x / y);
	printf("%d ", z);
	z = x + y + 2004;
	printf("%d ", z);
	z = 2004 - x - y;
	printf("%d ", z);
}
*/

// 24) 증감 연산자 이해하기 (++,--)
/*
main()
{
	int x = 1;
	printf("x=%d\n", x++); // x자체의 값을 변경. 출력: 1/ 값: 2 저장
	printf("x=%d\n", x++); // 출력: 2/ 값: 3 저장
	printf("x=%d\n", ++x); // 값: 4/ 출력: 4
	printf("x=%d\n", x--); // 출력: 4/ 값: 3
	printf("x=%d\n", x--); // 출력: 3/ 값: 2
	printf("x=%d\n", --x); // 값: 1/ 출력: 1
	// 1 2 4 4 3 2
}
*/

// 25) 관계 연산자 이해하기 (<, >, =, <=, >=, !=)
/*
main()
{
	int x = 1;
	int y = 2;
	int z = 3;

	if (x == y)printf("x는 y와 같습니다.\n");
	if (x != y)printf("x는 y와 같지 않습니다.\n");
	if (x > y)printf("x는 y보다 큽니다.\n");
	if (x < y)printf("x는 y보다 작습니다.\n");
	if (x >= y)printf("x는 y보다 크거나 같습니다.\n");
	if (x <= y)printf("x는 y보다 작거나 같습니다.\n");
}
*/

// 26) 논리 연산자 이해하기 (||, &&, !)
/*
main()
{
	int x = 5;
	int y = 2;

	if (x > 0 && x < 10) // x가 0보다 크고 10보다 작다면
		printf("0>x<10\n");
	if (x < 0 || y == 2) // x가 0보다 작거나 y==2라면
		printf("x가 0보다 작거나, y는 2입니다.\n");
	if(!(x>y))
		printf("x가 y보다 크지 않습니다.\n");

}
*/

// 27) 조건 연산자 이해하기 (:?)
/*
main()
{
	int x = 1;
	int y = 2;
	int max;

	max = x > y ? x : y;
	printf("%d", max);

	// 동일한 구문
	if (x > y)max = x;
	else max = y;
}
*/

// 28) 쉼표 연산자 이해하기(,)
/*
main()
{
	int x = 1, y = 2, max;

	max = x > y ? x : y;
	printf("max = %d, x = %d, y = %d\n", max, x, y);
}
*/

// 29) 비트 연산자 이해하기 (|, &, ~, ^, <<, >>)
/*
main()
{
	unsigned char ch = 255, mask = 0x75;

	printf("%d\n", ch);
	printf("%d\n", ch & mask);
	printf("%d\n", (char)~ch);
	printf("%d\n", ch ^ ch);
	printf("%d\n", ch >> 1);
	printf("%d\n", mask << 1);
}
*/

// 30) 캐스트 연산자 이해하기 
/*
main()
{
	int x = 5, y = 2;

	printf("%d\n", x / y);
	printf("%f\n", (double)x / y);
}
*/

// 31) sizeof 연산자 이해하기
/*
main()
{
	char i;
	int j;
	double k;

	printf("%d\n", sizeof(i));
	printf("%d\n", sizeof(j)); 
	printf("%f\n", sizeof(k));
}
*/

// 32) 중첩 조건문 이해하기 (Understanding Nested Conditional statements)
/*
main()
{
	int i = 1;
	int j = 2;
	int k = 7;

	if (i==1)
	{
		if (j == 2) 
		{
			if (k == 3)
				printf("i=1, j=2, k=3입니다.");
			else if (k == 4)
				printf("i=1, j=2, k=4입니다.");
			else if (k == 5)
				printf("i=1, j=2, k=5입니다.");
			else
				printf("i = 1, j = 2, k = %d입니다.", k);
		}
	}
}
*/

// 33) 중첩 순환문 이해하기 (for~continue~break)
/*
main()
{
	int i;
	int j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d x %d = %2d\n", i, j, i * j); 
		}
		printf("\n");
	}
}
*/

// 34) 조건 선택문 이해하기(switch~case~default)
/*
main()
{
	int i = 5;

	switch (i) //i를 기준으로 switch
	{
	case 1:
		printf("i는 1입니다.");
	case 2:
		printf("i는 2입니다.");
	case 3:
		printf("i는 3입니다.");
	default:
		printf("i는 %d입니다", i);
		break;
	}
}
*/

// 35) 조건 순환문 이해하기1 (while~continue~break)
/*
main()
{
	int i = 1;
	int hap = 0;

	while (i <=10)
	{
		hap += 1; i++;
		if (i == 5)continue;
		if (i == 7)break;
	}

	printf("hap = %d\n", hap);
}
*/

// 36) 조건 순환문 이해하기2 (while~continue~break)
/*
main()
{
	int i = 1;
	int hap = 0;

	
	while (i < 1)
	{
		hap += i;
		i++;

	}

	printf("hap = %d", hap);
}
*/

// 37) 무조건 분기문 이해하기
/*
main()
{
	int i;
	int j;

	for (i = 1; i <= 100; i++)
	{
		for (j = 1; j <= 9; j++) 
		{
			printf("%d x %d = %2d\n", i, j, i * j);
			if (i == 9 && j == 9) goto ku_ku_end;
		}
	}

ku_ku_end:
printf("hello");
}
*/

// 38) 문자열 이해하기
/*
#define ASCII_BEGIN 0
#define ASCII_END 255

main()
{
	int i;
	char ch[] = "Hello"; // 문자열은 배열에만 저장 가능, single quotation쓰면 오류남
	printf("%s", ch);
	
	for (i = ASCII_BEGIN; i <= ASCII_END; i++)
	{
		printf("ASCII 코드 (%3d), 문자='%c'\n", i, i); //
	}
	
}
*/

// 39) 배열 이해하기
/*
main()
{
	int kor[10] = { 100, 90, 35, 75, 55, 95, 80, 90, 70 };
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", kor[i]);
	}
}
*/

// 40) 메모리 이해하기
/*
main()
{
	int i = 0;
	int j = 1;

	printf("값=%d, 메모리주소=%p\n", i, &i);
	printf("값=%d, 메모리주소=%p\n", j, &j);

}
*/

// 41) 포인터 이해하기(*)
/*
main()
{
	int saram_A = 0;
	int saram_B = 0;
	int* pointer;
	int* psaram;

	pointer = &saram_A; // 포인터 변수에 사람A의 주소값을 저장
	*pointer = 1; // 주소에 접근하여 값 변경
	printf("%d, %d\n", saram_A, *pointer);

	psaram = &saram_A; // 포인터 변수에 사람A의 주소값을 저장
	*psaram = 2; // 주소에 접근하여 값 변경
	printf("%d, %d, %d\n", saram_A, *pointer, *psaram);

	pointer = &saram_B;
	*pointer = 3;
	printf("%d, %d, %d\n", saram_A, saram_B, *pointer);

	psaram = &saram_B;
	*psaram = 4;
	printf("%d, %d, %d, %d\n", saram_A, saram_B, *pointer, *psaram);
}
*/

// 42) 널(NULL)문자 이해하기
/*
int length(char* pstr); // 함수명 정의

main()
{
	int len = length("abcde"); // 주소를 받아야 하는데...? 아 문자열이 곧 첫째 요소의 배열 및 주소?

	printf("길이 = %d", len);
}

int length(char* pstr)
{
	int len = 0;
	while (*pstr != NULL) // pstr에 저장된 주소에 접근한 값이 NULL이 아니면 
	{
		pstr++; 
		len++;
	}

	return len;
}
*/

// 43) 구조체 이해하기
/*
struct tagSungJuk
{
	int kor;
	int eng;
	int math;
};

main()
{
	struct tagSungJuk SJ; // 구조체 변수 선언

	SJ.kor = 100;
	SJ.eng = 95;
	SJ.math = 99;

	printf("총합: %d", SJ.eng + SJ.kor + SJ.math);
}
*/

// 44) 공용체 이해하기
/*
union tagVariant
{
	int i;
	float d;
};

main()
{
	union tagVariant V;
	V.i = 0;
	V.d = 5.5;

	printf("V.i = %d\n", V.i);
	printf("V.d = %f\n", V.d); // float인 변수만 %f 서식문자에 대입할 수 있음
}
*/

// 45) 열거형 이해하기 
/*
enum {Sun = 0, Mon, Tue, Wed, Thur, Fri, Sat}; // 열거형은 이름이 없어도 됨
// 열거형은 상수 나열식으로 1씩 증가하며 자동 초기화됨
main()
{
	printf("%d\n", Sun);
	printf("%d\n", Mon);
	printf("%d\n", Tue);
	printf("%d\n", Wed);
	printf("%d\n", Thur);
	printf("%d\n", Fri);
	printf("%d\n", Sat);

}
*/

// 46) 데이터형 정의하기
/*
#define true 1
#define false 0

typedef int bool; // bool은 int형 변수

main()
{
	bool bCondition; // int형 변수형인 bool형 변수인 bCondition을 선언

	bCondition = true; // bool 타입 bCondition에 true매크로 대입 . 매크로는 선행처리기에 의해 1로 치환. 결과적으로 bCondition에는 1이 저장됨. 

	if (bCondition==true) 
	{
		printf("조건식은 true입니다.");
	}
}
*/

// 47) 함수와 인수 이해하기
// 데이터형 안 맞음
/*

int print(char* string); // 함수 선언

main()
{
	print("This is a function!"); 
}

int print(char* string)
{
	int len = 0;

	while ((*string) != NULL)
	{
		print("%c", *string); // 문자열의 요소를 하나씩 출력
		string++; // 주소 1증가. 다음 요소로 넘어가기.
		len++;// 배열의 길이 측정
	}

	return len;
}
*/

// 48) 변수의 범위 이해하기
/*
void print_x(int x);
void print_gx(void); //인자가 없는 함수

int x = 20;

main()
{
	int x = 5;
	printf("x = %d\n", x);

	print_x(10);
	print_gx();
}

void print_x(int x)
{
	printf("x = %d\n", x);
}

void print_gx(void)
{
	printf("gx = %d\n", x);
}
*/

// 49) #include문 이해하기
/*
main()
{
	int ch;

	printf("아무 키나 누르세요...\n");

	ch = _getch(); // getchar과 같은가? 뭐여 이게...
	printf("%c 키가 눌려졌습니다.\n", ch);

}
*/

// 50) 매크로 이해하기
/*
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

main()
{
	int i, j;

	i = 5;
	j = 7;

	printf("최댓값은 %d입니다.\n", MAX(i, j));
	printf("최솟값은 %d입니다.\n", MIN(i, j));
}
*/
