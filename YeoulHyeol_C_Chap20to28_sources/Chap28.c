#define _CRT_SECURE_NO_WARNINGS
//#define _NO_CRT_STDIO_INLINE
#include <stdio.h>


// ���� 1)
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
	printf("\n����: "); scanf("%s", book.author);
	printf("\n����: "); scanf("%s", book.title);
	printf("\n������ ��: "); scanf("%d", &book.page);
	printf("\n\n");
	return book;

}

void ShowInfo(INFO* book)
{
	printf("����: %s\n", book->author);
	printf("����: %s\n", book->title);
	printf("������ ��: %d\n", book->page);
	printf("\n\n");
}

int main(void)
{
	INFO books[10];
	int i;

	printf("���� ���� �Է�\n\n");
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

// ���� 2)
// ���� �ذ��ϱ�
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
	printf("\n����: "); scanf("%s", book->author);
	printf("\n����: "); scanf("%s", book->title);
	printf("\n������ ��: "); scanf("%d", (*book).page);
	printf("\n\n");
	return book;

}

void ShowInfo(INFO* book)
{
	printf("����: %s\n", book->author);
	printf("����: %s\n", book->title);
	printf("������ ��: %d\n", book->page);
	printf("\n\n");
}

int main(void)
{
	INFO* books[10];
	int i;

	printf("���� ���� �Է�\n\n");
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

// ���� 3)
/*
typedef struct complex
{
	double realNum;
	double imgNum;
}Complex;

void Add(Complex* A, Complex* B)
{
	printf("�� ����� ��: %f + %fi", (A->realNum + B->realNum), (A->imgNum + B->imgNum));
}

void Mul(Complex* A, Complex* B)
{
	double real = (A->realNum) * (B->realNum) - (A->imgNum) * (B->imgNum);
	double img = (A->imgNum) * (B->realNum) + (A->realNum) * (B->imgNum);

	printf("�� ����� ��: %f + %fi",real, img);
}

int main(void)
{
	Complex A;
	Complex B;
	printf("���Ҽ� �Է�1 [�Ǽ� ���]: "); scanf("%lf %lf", &A.realNum, &A.imgNum);
	printf("���Ҽ� �Է�1 [�Ǽ� ���]: "); scanf("%lf %lf", &B.realNum, &B.imgNum);

	Add(&A, &B);
	Mul(&A, &B);

}
*/