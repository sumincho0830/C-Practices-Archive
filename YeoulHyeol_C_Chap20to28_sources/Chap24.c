#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


// 예제 1) 파일 열기
/*
int main(void) {

	FILE* fp = fopen("data1.txt", "wt");
	if (fp==NULL)
	{
		puts("파일 오픈 실패!");
		return -1;
	}
	fputs("Hello", fp); // 위에 생성한 fp 스트림을 통해 'A'라는 문자 입력하기
	
	fclose(fp);
	return 0;
}
*/

// 예제 2) 파일로부터 데이터 읽기
/*
int main(void) {
	int ch, i;
	FILE* fp = fopen("data.txt", "rt"); // 읽기 모드로 열기 위해서는 파일이 이미 형성되어 있어야 함
	if (fp==NULL)
	{
		printf("파일오픈 실패!");
		return 0;
	}

	for (i = 0; i < 5; i++)
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fclose(fp);
	return 0;
}
*/

// 예제 3) 파일 입출력 함수의 기본
// 파일 생성
/*
int main(void) {

	FILE* fp = fopen("simple.txt", "wt"); //쓰기모드, 텍스트 파일

	if (fp==NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);

	fputs("My name is Hong \n", fp);
	fputs("Your name is Yoon \n", fp);

	fclose(fp);
	return 0;

}
*/

// 파일에서 데이터 읽기
/*
int main(void) {
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp==NULL)
	{
		printf("파일오픈 실패!\n");
		return -1;
	}

	ch = fgetc(fp); // fp스트림에 연결되어 있는 파일로부터 문자 한 개 읽어오기
	printf("%c \n", ch);
	ch = fgetc(fp); // fp스트림에 연결되어 있는 파일로부터 문자 한 개 읽어오기
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp); // 문자열 구분 기준은 <\n>
	printf("%s \n", str);
	fgets(str, sizeof(str), fp);
	printf("%s \n", str);

	fclose(fp);
	return 0;
}
*/

// feof함수
/*
int main(void) {
	FILE* src = fopen("data.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch;

	if (src==NULL || des==NULL)
	{
		printf("파일오픈 실패!");
		return -1;
	}

	while ((ch=fgetc(src)) != EOF) // fgetc로 가져온 src의 내용이 EOF가 아니라면 (End of File)
	{
		fputc(ch, des); // 쓰기 전용인 des 스트림을 통해 dst.txt파일에 입력
	}
	if (feof(src)!=0)
	{
		puts("파일복사 완료!");
	}
	else {
		puts("파일 복사 실패!");
	}

	fclose(src);
	fclose(des);

	return 0;   
}
*/

/*
int main(void) {
	FILE* src = fopen("data.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char str[20];

	if (src==NULL || des==NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	while ((fgets(str,sizeof(str),src))!=NULL) //src에서 읽어들인 데이터가 NULL이 아니라면
	{
		fputs(str, des); //des로 str 문자열을 출력
	}

	if (feof(src) != 0)
		puts("파일 복사 완료");
}
*/

// 바이너리 데이터 입출력 함수 fread and fwrite 
/*
int main(void) {
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin", "wb");
	char buf[20];
	int readCnt;

	if (src==NULL || des==NULL)
	{
		puts("파일오픈 실패!");
		return -1;
	}
	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt<sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, sizeof(buf), des);
				puts("파일 복사 완료");
				break;
			}
			else
			{
				puts("파일 복사 실패");
				break;
			}

			fwrite((void*)buf, 1, sizeof(buf), des);
		}
		}

	fclose(src);
	fclose(des);
	return 0;
}
*/

// 문제 24-1 [문자열 방식의 데이터 입출력]

// 문제 1) 파일 생성 및 문자열 저장
/*
int main(void) 
{
	FILE* fp = fopen("mystory.txt", "wt");

	fputs("#이름: 윤성우\n",fp);
	fputs("#주민번호: 900208-1012589\n",fp);
	fputs("#전화번호: 010-5693-8006\n",fp);

	fclose(fp);
	return 0;

}
*/


// 문제 2) 파일 불러오기 및 내용 수정
/*
int main(void) {

	FILE* fp = fopen("mystory.txt", "at");

	fputs("#즐겨먹는 음식: 짬뽕, 탕수육\n", fp);
	fputs("#취미: 축구\n", fp);

	fclose(fp);
	return 0;
}
*/

// 문제 3) 파일의 내용을 읽어와서 출력
/*
int main(void) {
	FILE* fp = fopen("mystory.txt", "rt");
	char str[100];

	while ((fgets(str, sizeof(str), fp))!=NULL)
	{
		printf(str); // 이렇게 해도 됨!! prinft함수는 서식 문자열을 반드시 사용할 필요는 없음
	}
	
	fclose(fp);
	return 0;

	printf("%s \n", str);
}
*/


// 예제 4) 서식에 따른 데이터 입출력 (파일 대상)
/*
int main(void) {
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "wt");
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("이름 성별 나이 순 입력: ");
		scanf("% s % c % d", name, &sex, &age);
		printf("\n");
		getchar(); // 버퍼에 남아있는 \n의 소멸을 위해 읽기 함수 사용
		fprintf(fp, "%s %c %d", name, sex, age); // 입력 받아 변수에 저장한 값을 파일에 출력
	}

	fclose(fp);
	return 0;
}
*/

// 예제 5) fscanf의 EOF 반환
/*
int main(void) {
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "rt");
	int ret;

	while (1) // 참일 동안
	{
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret==EOF)
		{
			break;
		}
		printf("%s %c %d", name, sex, age);
	}

	fclose(fp);
	return 0;
}
*/

// 예제 6) 구조체 변수 바이너리 형식 입출력
/*
typedef struct fren {
	char name[10];
	char sex;
	int age;
} Friend;

int main(void) {
	FILE* fp;
	Friend myfriend1;
	Friend myfriend2;

	// file write //
	fp = fopen("friend.bin", "wb"); // 파일 생성
	printf("이름, 성별, 나이 순 입력: ");
	scanf("%s %c %d", myfriend1.name, &myfriend1.sex, &myfriend1.age);
	fwrite((void*)&myfriend1, sizeof(myfriend1), 1, fp);
	fclose(fp);

	// file read //
	fp = fopen("friend.bin", "rb"); // 파일 읽기 모드로 열기
	fread((void*)&myfriend2, sizeof(myfriend2), 1, fp);
	printf("이름, 성별, 나이 순 입력: ");
	scanf("%s %c %d", myfriend2.name, myfriend2.sex, myfriend2.age);
	fclose(fp);

	return 0; 
}
*/

// 예제 7) fseek 함수(파일 지시자 이동)
/*
int main(void) {
	// 파일 생성
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp); // 파일에 쓰기
	fclose(fp);

	// 파일 개방
	fp = fopen("text.txt", "rt");
	
	// SEEK_END test
	fseek(fp, -2, SEEK_END); //뒤에서 앞으로 2만큼 이동
	putchar(fgetc(fp)); //fp에서 가져온 문자 1개를 출력
	// SEEK_SET test
	fseek(fp, 2, SEEK_SET); // 앞에서 뒤로 2만큼 이동
	putchar(fgetc(fp)); //fp에서 가져온 문자 1개를 출력
	// SEEK_CUR test
	fseek(fp, 2, SEEK_CUR); // 현재 위치에서 뒤로 2만큼 이동
	putchar(fgetc(fp)); //fp에서 가져온 문자 1개를 출력

	fclose(fp);
	return 0;
}
*/

// 예제 8) 파일 지시자의 현위치: ftell함수
/*
int main(void)
{
	long fpos;
	int i;

	// 파일 생성
	FILE* fp = fopen("text1.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	// 파일 개방
	fp = fopen("text.txt", "rt");

	for (i = 0; i < 4; i++)
	{
		putchar(fgetc(fp)); // 문자 1개 가져옴-> 그걸 출력
		fpos = ftell(fp);
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);
	}

	fclose(fp);
	return 0;
}
*/

// 문제 24-2 [파일 크기를 바이트 단위로 계산하기]
/*
long GetFileSize(FILE* fp)
{
	long fpos;
	long fsize;

	fpos = ftell(fp); // 지시자의 현위치. 나중에 다시 돌려놔야 하므로.

	fseek(fp, 0, SEEK_END); // 파일의 제일 마지막으로 지시자 이동
	fsize = ftell(fp); // 옮겨진 지시자의 값은 파일의 크기와 동일 (가장 끝이기 때문)

	fseek(fp, fpos, SEEK_SET);// 파일의 처음부터 인자를 받았을 때 지시자의 위치까지 이동(초기화)

	return fsize;
}

int main(void)
{
	char str[100];
	FILE* fp = fopen("ABC.txt", "wt");
	
	fputc("A", fp);
	fputc("B", fp);
	fputc("C", fp);

	fclose(fp);

	fp=fopen("ABC.txt", "rt");
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의 크기: %d", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("파일의 크기: %d", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);

	// 왜 2번 출력?
	fclose(fp);
	return 0;

}
*/


// 바이너리 파일의 입출력
/*
int main(void) {
	FILE* src = fopen("notes.png", "wb");
	FILE* des = ("dst.bin", 'wb');
	char buf[20];
	int readCnt;

	if (src==NULL || des==NULL)
	{
		puts("파일 오픈 실패");
		return -1;
	}
	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt<sizeof(buf),src)
		{
			if (feof(src) != 0) {
				fwrite((void*)buf, 1, readCnt, des);
				puts("파일 복사 완료");
				break;
			}
			else
			{
				puts("파일 복사 실패");
			}
			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);
	return 0;
}
*/