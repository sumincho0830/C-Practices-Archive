#define _CRT_SECURE_NO_WARNINGS
//#define _NO_CRT_STDIO_INLINE
#include <stdio.h>


// 문제 1)
/*
typedef struct info
{
	char title[20];
	char author[20];
	int page;
} INFO;


INFO GetInfo()
{
	INFO book;
	printf("\n저자: "); scanf("%s", book.author);
	printf("\n제목: "); scanf("%s", book.title);
	printf("\n페이지 수: "); scanf("%d", &book.page);
	printf("\n\n");
	return book;

}

void ShowInfo(INFO* book)
{
	printf("저자: %s\n", book->author);
	printf("제목: %s\n", book->title);
	printf("페이지 수: %d\n", book->page);
	printf("\n\n");
}

int main(void)
{
	INFO books[10];
	int i;

	printf("도서 정보 입력\n\n");
	for (i = 0; i < 3; i++)
	{
		books[i] = GetInfo();
	}

	for (i = 0; i < 3; i++)
	{
		ShowInfo(&books[i]);
	}
}
*/

// 문제 2)
// 오류 해결하기
/*
typedef struct info
{
	char title[20];
	char author[20];
	int page;
} INFO;


INFO* GetInfo()
{
	INFO* book = (INFO*)malloc(sizeof(INFO));
	printf("\n저자: "); scanf("%s", book->author);
	printf("\n제목: "); scanf("%s", book->title);
	printf("\n페이지 수: "); scanf("%d", (*book).page);
	printf("\n\n");
	return book;

}

void ShowInfo(INFO* book)
{
	printf("저자: %s\n", book->author);
	printf("제목: %s\n", book->title);
	printf("페이지 수: %d\n", book->page);
	printf("\n\n");
}

int main(void)
{
	INFO* books[10];
	int i;

	printf("도서 정보 입력\n\n");
	for (i = 0; i < 3; i++)
	{
		books[i] = GetInfo();
	}

	for (i = 0; i < 3; i++)
	{
		ShowInfo(books[i]);
	}
}
*/

// 문제 3)
/*
typedef struct complex
{
	double realNum;
	double imgNum;
}Complex;

void Add(Complex* A, Complex* B)
{
	printf("두 허수의 합: %f + %fi", (A->realNum + B->realNum), (A->imgNum + B->imgNum));
}

void Mul(Complex* A, Complex* B)
{
	double real = (A->realNum) * (B->realNum) - (A->imgNum) * (B->imgNum);
	double img = (A->imgNum) * (B->realNum) + (A->realNum) * (B->imgNum);

	printf("두 허수의 곱: %f + %fi",real, img);
}

int main(void)
{
	Complex A;
	Complex B;
	printf("복소수 입력1 [실수 허수]: "); scanf("%lf %lf", &A.realNum, &A.imgNum);
	printf("복소수 입력1 [실수 허수]: "); scanf("%lf %lf", &B.realNum, &B.imgNum);

	Add(&A, &B);
	Mul(&A, &B);

}
*/