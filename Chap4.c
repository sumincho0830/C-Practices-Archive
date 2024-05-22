#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>

// 201) scanf() 함수 100% 활용하기 (scanf)
/*
#define scan(d,x,y) printf(#d "형(%" #x")을 입력하세요\n");\
					scanf(#x, &y);\
					printf("scanf%"#x":"#x"\n\n",y)
void main(void)
{
	char ch = 0;
	short int si = 0;
	int i = 0;
	int o8 = 0;
	int x16 = 0;
	unsigned ui = 0; // unsigned int? 형이 없는데?
	long l = 0;
	float f = 0;
	char s[100] = { 0, };

	scan(char, %c, ch);
	scan(short, %hd, si);
	scan(int, %d, i);
	scan(unsigned, %ui, ui);
	scan(long, %d, l);
	scan(8진수, %o, o8);
	scan(16진수, %x, x16);
	scan(고정소수점, %f, f);
	scan(문자열, %s, s);
}
*/

// 202) printf() 함수 100% 활용하기 (printf)
/*
void main(void)
{
	int i;
	char* pi;
	char* string = "books";

	// 문자, 정수값
	printf("[%c]\n", 'A');
	printf("[%d]\n", 7);
	printf("[%i]\n", 7); // %i는 뭐지? 
	printf("[%5d]\n", 7); // 5자리 채우기
	printf("[%05d]\n", 7); // 5자리 채우는데, 빈칸은 0으로 채우기
	printf("[%+d]\n", -12345); //양수로 전환
	printf("[%+d]\n", 12345); // 음수로 전환
	printf("[% d]\n", -12345); // 변화 x
	printf("[%u]\n", 12345); // 변화 x
	printf("[%u]\n", -12345); // unsinged이기 때문에 음수의 이진수 부호에 해당하는 양수를 출력

	// 8진수, 16진수
	printf("[%x]\n", 0xFF);
	printf("[%X]\n", 0xFF);
	printf("[%#x]\n", 0xFF);
	printf("[%#x]\n", 12345);
	printf("[%o]\n", 0123); // 8진수
	printf("[%#o]\n", 0123);
	printf("[%f]\n", 3.141592);
	printf("[%5f]\n", 3.141592); // 5자리 채우기..?
	printf("[%.f]\n", 3.141592); // 소수점 아래 표시 x
	printf("[%.2f]\n", 3.141592); // 소수점 아래 2자리까지
	printf("[%2.2f]\n", 3.141592); // 소수점 위로 최대 2자리(?), 아래로 2자리
	printf("[%5.5f]\n", 3.141592); // 소수점 위로 5자리, 아래로5자리
	printf("[%20.5f]\n", 3.141592); // 위로 20자리, 아래로 5자리?
	printf("[%-20.5f]\n", 3.141592); // 이건 뭐야..

	// 부동소수점
	printf("[%e]\n", 3.141592);
	printf("[%E]\n", 3.141592);
	printf("[%5e]\n", 3.141592);
	printf("[%.e]\n", 3.141592);
	printf("[%.2e]\n", 3.141592);
	printf("[%2.2e]\n", 3.141592);
	printf("[%5.5e]\n", 3.141592);
	printf("[%20.5e]\n", 3.141592);
	printf("[%20.2E]\n", 1.2e+10);
	printf("[%-20.2E]\n", 1.2e+10);

	// 스마트형 
	printf("[%g]\n", 3.141592); // 알아서 길이를 지정..?

	// 문자열형
	printf("[%s]\n", string);
	printf("[%10s]\n", string); // 10자리 채우고 오른쪽 정렬
	printf("[%-10s]\n", string); // 10자리 채우고 왼쪽정렬
	printf("[%2s]\n", string); // 최소 2자리 채우기?
	printf("[%2.2s]\n", string); //최소 2자리 채우고, 최대 2개 까지?
	printf("[%3.2s]\n", string); //최소 3자리 채우고, 최대 2개 출력
	printf("[%010s]\n", string); // 최소 10자리 채우되, 0으로 빈칸 채우기

	// 포인트형
	printf("[%p]\n", &i);
	printf("[%p]\n", &pi);
}
*/

// 203) 삼각형 출력하기 (for)
/*
void main(void)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++) 
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

// 204) 값을 입력받아 홀수/짝수 구분하기 (%)
/*
void main(void)
{
	int num;
	printf("숫자를 입력하세요:");
	scanf("%d", &num);

	if (num%2==0) printf("%d는 짝수입니다.\n", num);
	else printf("%d는 홀수입니다.\n", num);
}
*/

// 205) 1~100까지 홀수의 합 구하기
/*
void main(void)
{
	int i, hap = 0;

	for (i = 1; i <=100; i++) // repeat 101 times // 상관..은 없는데 가독성을 위해서 i=1로 쓰는 게...
	{
		if (i % 2) // 0이 아니라면 == 홀수라면
		{
			hap += i;
		}
	}
	printf("1~100까지의 홀수의 합: %d\n", hap);
}
*/

// 206) 21~50 범위의 난수 발생시키기
/*
#include <stdlib.h>
#include <time.h>

void main(void)
{
	int i, rand_num;

	srand(time(NULL));// 1970년으로부터 지금까지 지난 초를 반환 -> 이걸 seed로 삼음

	for (i = 0; i < 10; i++)
	{
		rand_num = rand() % 30 + 21;
		printf("[%d]\n", rand_num);
	}
}
*/

// 207) 변수의 번지 출력하기 (&연산자)
/*
void main(void)
{
	int i = 127;
	int j;

	printf("%d, %x\n", i, i);
	printf("%#x\n", &i);
	printf("%#x\n", &j);
}
*/

// 208) 정수값을 16진수 문자열로 변환하기 (itoa)
/*
#include <stdlib.h>

void main(void)
{
	char buff[100];
	int radix = 16;

	_itoa(10, buff, radix);
	puts(buff);

	_itoa(255, buff, radix);
	puts(buff);
}
*/

// 209) 2진수/ 16진수 문자열을 정수값으로 변환하기 (strtol)
/*
#include <stdlib.h>

void main(void)
{
	char string1[] = "1010";
	char string2[] = "ff";
	char* stop;
	long value;

	value = strtol(string1, &stop, 2); // stop은 끝 포인터
	printf("2진 문자열 \"%s\"를 정수로 바꾸면 %d입니다.\n", string1, value); 

	value = strtol(string2, &stop, 16);
	printf("16진 문자열 \"%s\"을 정수로 바꾸면 %d입니다.\n", string2, value);
}
*/

// 210) 2진수 문자열을 16진수 문자열로 변환하기 (strtol, itoa)
/*
#include <stdlib.h>

void main(void)
{
	int radix = 16; 
	int base = 2;
	char string[] = "10101011";
	char* stop;
	long value;
	char buff[100];

	value = strtol(string, &stop, base); //string을 한 번 정수로 변환
	_itoa(value, buff, radix); // 변환한 정수를 다시 문자열로 변환해서 버퍼에 저장
	puts(buff);
}
*/
// 211) 소문자를 대문자로 변환하기 
/*
#include <string.h>

void main(void)
{
	char string[] = "abcdefghijklmnopqrstuvwxyz"; //포인터이거나 배열이거나
	unsigned i, len;

	puts(string);

	len = strlen(string); // 뮨자열의 길이를 저장 (null문자 전까지) == 배열 길이 -1

	for (i = 0; i < len; i++)
	{
		string[i] = string[i] & 0xDF;
	}

	puts(string);
}
*/

// 212) 비트 연산을 사용하여 변수값을 0으로 만들기
/*
void main(void)
{
	int i = -5;

	printf("i=%d\n", i);
	i = i ^ i;

	printf("i=%d\n", i);
}
*/

// 213) 비트 쉬프트 연산을 사용하여 곱셈 구현하기 (<<)
/*
void main(void)
{
	char value = 2;

	value = value << 1; // 1자리 이동 == *2
	printf("value: %d\n", value);
}
*/

// 214) 비트 쉬프트 연산을 사용하여 나눗셈 구현하기 (>>) // 오른쪽으로 이도하면 나눗셈
/*
void main(void)
{
	char value = 4;
	value = value >> 1;
	printf("value:%d\n", value);
}
*/

// 215) 문자열에서 특정 문자열의 인덱스 구하기 (strstr)
/*
#include <string.h>
void main(void)
{
	char string[] = "This is a book";
	char* pos;

	pos = strstr(string, "book"); // book이라는 문자열의 stirng 내 위치

	if (pos) // if(pos != NULL)
	{
		printf("book을 %d번째에서 찾았습니다.\n", pos-string); // pos가 10이고 string이 0이면 10번째
		printf("%s\n", &string[pos-string]); // 메모리의 주소가 어디에 있을지 모르기 때문에 string을 빼준다
	}
}
*/

// 216) 문자열을 콤마와 공백으로 분리하기 (strtok)
/*
#include <string.h>

void main(void)
{
	char string[] = "a12,b34,c56";
	char* token;

	token = strtok(string, ", ");//string tokeize

	while (token) // token이 0이 아닐 때 까지
	{
		puts(token); // token을 출력하고
		token = strtok(NULL, ", ");
	}
}
*/

// 217) 문자열을 공백으로 분리하여 여러 개의 문자열로 만들기 (strtok)
/*
#include <string.h>
void main(void)
{
	char string[] = "(a12),(b34),(c56)";
	char* token;

	token = strtok(string, "(123456),"); // 구분자 한 번에 여러개 지정 가능

	while (token)
	{
		puts(token);
		token = strtok(NULL, "(123456),");
	}
}
*/

// 218) 문자열에서 숫자만 추출해내기 (isdigit)
/*
#include <ctype.h>
void main(void)
{
	char* string = "(02) 1111-2222";
	char buff[20] = { 0, };
	int i = 0;

	while (*string)
	{
		if (isdigit(*string)) //string의 값에서 추출한 정수값이 NULL이 아니라면
		{ 
			buff[i++] = *string; // 이번 주소의 값을 넣고
		}
		string++; // 다음 주소로
	}
	puts(buff);
}*/

// 219) 문자열에서 알파벳만 추출해내기 (isalpha)
/*
#include <ctype.h>
void main(void)
{
	char* string = "temperature:200";
	char buff[20] = { 0, };
	int i = 0;

	while (*string) // null에서 멈춤
	{
		if (isalpha(*string)) // 변환
		{
			buff[i++] = *string;
		}
		string++;
	}
	puts(buff);
}
*/

// 220) 문자열에서 한글만 추출해내기
/*
void main(void)
{
	unsigned char* string = "대한민국 Korea";
	unsigned char buff[20] = { 0, };
	int i = 0;

	while (*string) //string의 값이 null이 아닐 때
	{
		if (*string>127)
		{
			buff[i++] = *string;
		}
		string++;
	}
	puts(buff);
}
*/

// 221) 알파벳이 아닌 첫 문자의 위치 검출하기 (strspn)
/*
#include <string.h>
void main(void)
{
	char* string = "it's good";
	char* find = "abcdefghijklmnopqrstuvxyz";
	int nIndex;

	nIndex = strspn(string, find);// find와 겹치지 않는 첫 문자의 위치를 반환 //알파벳 소문자가 아닌 첫 번재 요소의 위치
	printf("%d위치에서 알파벳이 아닌 첫 문자를 찾았습니다.\n", nIndex);
}
*/

// 222) 문자열에서 숫자가 시작되는 위치 추출하기 (strscspn)
/*
#include <string.h>

void main(void)
{
	char string[] = "사자 3마리, 코끼리 5마리, 사슴 4마리";
	char* find = "0123456789";
	int index; 

	index = strcspn(string, find); //strspn은 일치되지 않는, strcspn은 일치되는 첫 요소의 주소를 반환
	printf("%d위치에서 일치되는 첫 숫자를 발견하였습니다.",index);
}
*/

// 223) 문자열을 특정 문자 위치에서 잘라내기 (strchr) // string chr?
/*
#include <string.h>

void main(void)
{
	char string[] = "a.book";
	char* pstr = string, * pfind = string;
	int i = 0;

	while (pfind)
	{
		pfind = strchr(pstr, 'a');

		if (pfind==NULL)
		{
			pfind - strchr(pstr, '.');
			if (pfind)
			{
				pstr = &string[++i];
			}
		}
		else
		{
			pstr = &string[++i];
		}
	}
	puts(pstr);
}
*/

// 224) 문자열의 좌우 공백 제거하기 (isspace)
/*
#include<string.h>
#include<ctype.h>

void main(void)
{
	char* string = " 123 ";
	char buff[20] = { 0, };
	int i = 0;

	printf("string의 길이: %d\n", strlen(string));

	while (*string)
	{
		if (!isspace(*string)) buff[i++] = *string; //공백이 아니면 string의 요소를 buff에 저장
		string++;
	}
	puts(buff);
	printf("string의 길이: %d\n", strlen(buff));
}
*/

// 225) 문자열의 좌우 특정 문자들 제거하기 (strspn, strcspn)
/*
#include<string.h>
void main(void)
{
	char string[] = " .;;abc;;. ";
	char* sep = " .;";
	int nIndex1, nIndex2;

	nIndex1 = strspn(string, sep);
	nIndex2 = strcspn(&string[nIndex1], sep);
	(&string[nIndex1])[nIndex2] = 0;
	printf("%s\n", &string[nIndex1]);
}
*/

// 226) 문자열을 NULL로 채우기

// 226) 문자열을 NULL로 채우기 (strset)
/*
#include<string.h>
void main(void)
{
	char buff[] = "암호는 Korea입니다.";

	puts(buff);
	_strset(buff, 0);
	printf("[%s]\n", buff);
}
*/

// 227) 문자열의 첫 글자를 대문자로 변환하기
/*
#include <string.h>
#include<ctype.h>
void main(void)
{
	char buff[] = "boy is man", * pos = buff;

	while (pos)
	{
		if (isalpha(buff[0]) && pos == buff) 
		{
			buff[0] &= 0xDF;
			pos++;
		}
		else if (pos=strpbrk(pos,""))
		{
			*++pos &= 0xDF;
		}
	}
	printf(buff);
}
*/

// 228) 문자열에서 특정 위치의 문자 교체하기 (strnset)
/*
#include<string.h>

void main(void)
{
	char string[] = "암호는 Korea입니다.";
	char* pstr;

	pstr = strstr(string, "Korea"); //검색하기

	if (pstr)
	{
		_strnset(pstr, '*', 5); //5만큼 *로 대체
	}
	puts(string);
}
*/

// 229) 문자열에 대한 임시 저장소 만들기 (strdup)
/*
#include<string.h>
#include<malloc.h>

void main(void)
{
	char buff[] = "문자열 복제하기";
	char* dup;

	dup = _strdup(buff); // 내부적으로 malloc함수를 사용하는듯? // string duplicate
	if (dup)
	{
		strcpy(buff, "다른 문자열");
		puts(buff);
		puts(dup);
		free(dup);
	}
}
*/

// 230) 메모리를 1MB 할당하고 해제하기 (malloc, free)
/*
#include<string.h>
#include<malloc.h>

void main(void)
{
	char* pbuf;

	pbuf = malloc(100 * 10000); // 데이터 형은..?

	if (pbuf)
	{
		memset(pbuf, 0, 100 * 10000);
		strcpy(&pbuf[0], "서울시 양천구 목동");
		puts(&pbuf[9]);
		free(pbuf);
	}
}
*/

// 231) 메모리를 100MB 할당하고 해제하기
/*
#include<string.h>
#include<malloc.h>

#define MEGA_BYTE 1048576

void main(void)
{
	char* pbuf;

	pbuf = malloc(100 * MEGA_BYTE);

	if (pbuf)
	{
		memset(pbuf, 0, 100 * MEGA_BYTE);

		strcpy(&pbuf[0], "서울시 양천구 목동"); // pbuf의 0번에 저장
		puts(&pbuf[0]);

		strcpy(&pbuf[104857500], "부산시 강서구 미음동");
		puts(&pbuf[104857500]);

		free(pbuf);
	}
}
*/

// 232) void형 포인터를 사용한 다양한 배열 복사하기
/*
void array_copy(void* dest, const void* src, int size);

void main(void)
{
	char array1[100] = "array of char";
	char array2[100] = { 0, };
	int array3[5] = { 1,2,3,4,5 };
	int array4[5] = { 0, };

	printf("array1: [%s]\n", array1);
	printf("array2: [%s]\n", array2);
	printf("array3: [%d]\n", array3[0]);
	printf("array4: [%d]\n", array4[0]);

	array_copy(array2, array1, sizeof(array1));
	array_copy(array4, array3, sizeof(array3));

	printf("array1: [%s]\n", array1);
	printf("array2: [%s]\n", array2);
	printf("array3: [%d]\n", array3[0]);
	printf("array4: [%d]\n", array4[0]);

}

void array_copy(void* dest, const void* src, int size) // 포인터 변수, 상수 포인터, 정수
{
	while (size--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
}
*/

// 233) 텍스트 파일을 한 줄씩 쓰기 (fopen, fputs, fclose)
/*
void main(void)
{
	FILE* fp;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp != NULL)
	{
		fputs("대한민국\n", fp);
		fputs("대한민국\n", fp);
		fputs("대한민국\n", fp);
		fputs("대한민국\n", fp);
		fputs("대한민국\n", fp);

		fclose(fp);
	}
}
*/

// 234) 텍스트 파일을 한 줄씩 읽기 (fgets)
/*
void main(void)
{
	FILE* fp;
	char buff[100];

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp != NULL)
	{
		while (!feof(fp)) //EOF가 아닐 때
		{
			fgets(buff, 100, fp);
			printf(buff);
		}
	}

	fclose(fp);
}
*/

// 235) 텍스트 파일 쓰기 (fwrite)
/*
void main(void)
{
	FILE* fp;
	char* string = "우리강산\n";

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp != NULL)
	{
		fwrite(string, 1, strlen(string), fp);//string에 있는 내용을 적을 것. 각 블록 크기는 1바이트(char). string의 길이만큼, fp에
		fwrite(string, 1, strlen(string), fp); 
		fwrite(string, 1, strlen(string), fp);
		fclose(fp);
	}
}
*/

// 236) 텍스트 파일 읽기 (fread)
/*
void main(void)
{
	FILE* fp;
	char buff[100] = { 0, };
	int len;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp !=NULL)
	{
		while (!feof(fp)) 
		{
			len = fread(buff, 1, 9, fp); //버퍼, 블록 크기, 개수, 스트림
			if (ferror(fp) || len < 9) break;
			printf("read: %d, %s", len, buff); //len에는 요소의 개수가 저장됨 (길이)
		}
	}
	else
	{
		puts("오류");
	}

	fclose(fp);
}
*/

// 237) 이진 파일 쓰기 (fwrite)
/*
void main(void)
{
	FILE* fp;
	char buff[5];
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.bin", "w+b");

	buff[0] = '@';
	buff[1] = 0;
	buff[2] = 0x01;
	buff[3] = 0x03;
	buff[4] = 0x61;

	if (fp != NULL)
	{
		fwrite(buff, 1, 5, fp);
		fclose(fp);
	}
}
*/

// 238) 이진 파일 읽기 (fread)
/*
void main(void)
{
	FILE* fp;
	char buff;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.bin", "rb");

	if (fp != NULL)
	{
		while (!feof(fp))
		{
			fread(&buff, 1, 1, fp);//fp에서 읽어온 값을 buff에 저장
			if (!feof(fp)) printf("%d(%#x)\n", buff, buff);
		}
	}
	fclose(fp);

}
*/

// 239) 파일을 다른 디렉터리로 이동하기 (rename)
/*
void main(void)
{
	char* filename = "C:\\Users\\sumin\\Downloads\\file.txt";
	char* movefile = "C:\\temp\\file.txt";

	if (rename(filename,movefile) != 0) //파일을 이동시킨 결과가 0이 아니라면 (성공 시 0반환)
	{
		perror("파일 이동 에러");
	}
	else
	{
		puts("파일이 이동되었습니다.");
	}
}
*/

// 240) 파일 복사하기 (fread, fwrite)
/*
void main(void)
{
	FILE* fpR, * fpW;
	char buff;
	int len;

	fpR = fopen("C:\\Users\\sumin\\Downloads\\file.bin", "rb");

	if (fpR == NULL)
	{
		perror("파일 읽기 개방 에러");
		return;
	}

	fpW = fopen("C:\\Users\\sumin\\Downloads\\file_copy.bin", "w+b");

	if (fpW == NULL)
	{
		perror("파일 쓰기 개방 에러");
		fclose(fpR);
		return;
	}

	while (!feof(fpR))
	{
		len = fread(&buff, 1, 1, fpR);

		if (ferror(fpR))
		{
			perror("파일 읽기 에러");
			_fcloseall();
			return;
		}

		if (len > 0) //if(!feof(fpR))
		{
			fwrite(&buff, 1, 1, fpW);
			if (ferror(fpW))
			{
				perror("파일 쓰기 에러");
				_fcloseall();
				return;
			}
		}
	}

	_fcloseall();

	puts("파일을 성공적으로 복사하였습니다.");
}
*/

// 241) 두 개의 파일 합치기
/*
#define FILEREAD 4096
void main(void)
{
	FILE* fpR1, * fpR2, * fpW;
	char buff[FILEREAD];
	int len;

	fpR1 = fopen("C:\\Users\\sumin\\Downloads\\file.bin", "rb");

	if (fpR1 == NULL)
	{
		perror("파일 읽기 개방 에러");
		return;
	}

	fpR2 = fopen("C:\\Users\\sumin\\Downloads\\file_copy.bin", "rb");

	if (fpR2 == NULL)
	{
		perror("파일 읽기 개방 에러");
		_fcloseall();
		return;
	}

	fpW = fopen("C:\\Users\\sumin\\Downloads\\file2.bin", "w+b");
	if (fpW == NULL)
	{
		perror("파일 쓰기 개방 에러"); 
		_fcloseall();
		return;
	}

	while (!feof(fpR1))
	{
		len = fread(buff, 1, FILEREAD, fpR1); //파일 내용을 버퍼에 복제
		if (ferror(fpR1))
		{
			perror("파일 읽기 에러 1");
			_fcloseall();
			return;
		}

		if (len > 0)
		{
			fwrite(buff, 1, len, fpW);
			if (ferror(fpW))
			{
				perror("파일 쓰기 에러 1");
				_fcloseall();
				return;
			}
		}
	}

	while (!feof(fpR2))
	{
		len = fread(buff, 1, FILEREAD, fpR2);
		if (ferror(fpR2))
		{
			perror("파일 읽기 에러 2");
			_fcloseall();
			return;
		}

		if (len > 0) //파일 읽기에 실패하지 않은 경우
		{
			fwrite(buff, 1, len, fpW);
			if (ferror(fpW))
			{
				perror("파일 쓰기 에러 2");
				_fcloseall();
				return;
			}
		}
	}

	_fcloseall();

	puts("파일이 성공적으로 합쳐졌습니다.");
}
*/

// 242) 파일에서 특정 문자열 검색하기 (strstr)
// 흠...
/*
#include<string.h>

void main(void)
{
	FILE* fp, *fpW;
	char buff[200];
	int line = 1;

	fpW = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");
	if (fpW == NULL)
	{
		perror("파일 쓰기 개방 에러");
		return;
	}
	else
	{
		fputs("대한민국은 축구를 좋아한다.", fpW);
	}

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");
	if (fp == NULL)
	{
		perror("파일 읽기 개방 에러");
		return;
	}


	while (!feof(fp))
	{
		fgets(buff, 200, fp); //fp에서 200만큼 읽어봐서 buff에 저장

		if (strstr(buff,"대한민국"))
		{
			printf("Line(%2d): %s\n", line, buff);
		}
		line++;
	}
	_fcloseall();
}
*/

// 243) 파일에서 특정 문자열 교체하기
/*
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

void main(void)
{
	FILE *fpR, * fpW;
	char buff[200];
	char *pbuf, *dup;
	int len, pos1, pos2;

	fpR = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");// 파일 읽기 모드로 열기
	if (fpR == NULL) // 스트림이 제대로 개방되었는지 확인하기
	{
		perror("파일 읽기 개방 에러");
		return;
	}


	fpW = fopen("C:\\Users\\sumin\\Downloads\\file_change.txt", "w+"); // 쓰기 모드로 열기
	if (fpW == NULL) // 스트림이 개방되었는지 확인하기
	{
		perror("파일 쓰기 개방 에러");
		_fcloseall();
		return;
	}

	while (!feof(fpR)) // 파일의 끝이 아닐 동안
	{
		fgets(buff, 200, fpR); // fpR에서 200요소만큼 데이터를 읽어와서 버퍼에 저장
		pbuf = strstr(buff, "대한민국"); // 있으면 1반환? 위치 반환? 
		// strstr의 기능? buff에서 ""대한민국"을 검색(포함된 것은 모두 검색)
		// 반환값: 검색 요소가 가장 처음 나온 위치
		// 대한민국이 검색된 위치 (배열에서 몇 번째인지가 아닌, 실 주소 반환)

		if (pbuf) // 검색 요소가 등장한 위치가 NULL이 아니라면 (존재하긴 한다면) //if문은 0과 1을 기준으로 판별한다고 했는데, 이 0과 1은 NULL이 기준인가? 아니면 정말 정수 0이 기준인가? 같은 것인가?
		{
			len = strlen(buff); // 읽은 문자열의 길이
			pos1 = pbuf - buff; 

			dup = _strdup(buff); // 버퍼에 있는 값을 임시 메모리를 할당하여 저장하고 그 주소를 dup에 저장
			_strnset(&buff[pos1], 0, len-pos1);
			strcat(buff, "한국");

			pos1 = pbuf - buff + strlen("대한민국"); // pos1은 처음으로 검색된 문자열이 끝나는 위치를 가리킨다
			pos2 = pbuf - buff + strlen("한국"); 

			strcpy(&buff[pos2], &dup[pos1]);
			free(dup);
		}

		
		fputs(buff, fpW);
		
	}
	_fcloseall();
	puts("대한민국을 모두 한국으로 교체하였습니다.");
}
*/

// 연습
/*
void main(void)
{
	FILE* fpR;
	char buff[200];
	fpR = fopen("C:\\Users\\sumin\\Downloads\\file_change.txt", "r");

	if (fpR == NULL)
	{
		perror("Failed to open file in reading mode");
		fclose(fpR);
		return; //이건 왜 쓰는걸까...
	}

	while (!feof(fpR)) //feof는 EOF시 0을 반환
	{
		fgets(buff, sizeof(buff), fpR);

		puts(buff);
	}

	fclose(fpR);
}
*/

// 244) 연/월/일 시:분:초 출력하기 (time, localtime)
/*
#include <time.h>

void main(void)
{
	FILE* fp;
	char buff[200];
	time_t now; // time_t 객체 선언..이게 뭐지..?
	struct tm t; // tm 객체도 선언..이건 또 뭐지?

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp == NULL)
	{
		perror("파일 쓰기 개방 에러");
		_fcloseall();
		return;
	}

	now = time(NULL); 
	t = *localtime(&now); // tm객체 t에 now를 localtime으로 변환한 값을 저장

	sprintf(buff, "%d/%d/%d %d:%d:%d",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);

	fputs(buff, fp);
	_fcloseall();

	puts(buff);
	puts("시간을 C:\\Users\\sumin\\Downloads\\file.txt에 저장하였습니다.");
}
*/

// 245) 출생일로부터 오늘까지의 경과일 수 구하기 (mktime)
/*
#include <time.h>

#define DAYSEC (24*60*60) // 60초 * 60분 * 24시간

void main(void)
{
	time_t n1, n2;
	struct tm t1, t2;
	double elapsed;

	t1.tm_year = 101; // 2003년 -> 시작 연도는 1900년임
	t1.tm_mon = 8 - 1;  //월은 인덱스 값으로 실제 월-1
	t1.tm_mday = 30;
	t1.tm_hour = 0;
	t1.tm_min = 0;
	t1.tm_sec = 0;

	n1 = time(NULL);
	t2 = *localtime(&n1); //t2에는 현재 시간을 저장

	n1 = mktime(&t1); //mktime은 tm객체의 주소를 받아온다
	n2 = mktime(&t2);

	n2 = n2 - n1; // 현재 시간인 n2에서 태어난 시각인 n1을 빼기
	elapsed = (double)(n2 / DAYSEC); // 총 시간을 하루로 나누기

	printf("조수민은 태어난 지 %.f일째 입니다.", elapsed);
}
*/

// 246) 각 달의 마지막 날짜 구하기 (mktime)
/*
#include<time.h>
#define DAYSEC 86400L

void main(void)
{
	int i;
	time_t now;
	struct tm t1, t2;
	int n1, n2, last;

	now = time(NULL);
	t1 =*localtime(&now); // 현재 시각
	t1.tm_mday = 1; // 1일
	t2 = t1; // t2는 현지 시각에 날짜만 1일로 바꾼 것
	
	for (i = 0; i < 11; i++)
	{
		t1.tm_mon = i;
		t2.tm_mon = i + 1; // 여기는 한 달 빠름
		n1 = mktime(&t1); // n1은 t1을 시간으로 바꿔서 저장
		n2 = mktime(&t2); // 한 달 빠른 시간을 저장
		last = (n2 - n1) / DAYSEC; //수,분,초로 나눠서 일수로 만든 것
		printf("%d년 %2d월의 마지막 날짜는 %d일입니다.\n", t1.tm_year + 1900, t1.tm_mon+1, last);
	}
	

	t1.tm_mon = 1; // 2월 1일
	t2.tm_mon = 2; // 3월 1일
	n1 = mktime(&t1);
	n2 = mktime(&t2);
	last = (n2 - n1) / DAYSEC; //처음에 모두 초로 나오기 때문에 하루를 구성하는 초만큼의 수로 나눠줘야 일 단위가 됨
	printf("일수: %d\n", last); // 3월 1일에서 2월 1일을 빼면 29일
}
*/

// 247) D-Day 구하기 (mktime)
/*
#include<time.h>
#define DAYSEC 86400L

void main(void)
{
	time_t now;
	struct tm t, dday = { 0,0,0,8,8,2024 }; //시,분,초, 2020년 9월 8일 -> tm구조체에 정의된 순서
	int n1, n2, nDday;

	now = time(NULL);
	t = *localtime(&now);

	dday.tm_year -= 1900;
	dday.tm_mon -= 1; 
	// 디데이 초기 세팅 

	t.tm_hour = 0;
	t.tm_min = 0;
	t.tm_sec = 0; 
	// 현재 시각 0으로 맞추기

	n1 = mktime(&t);
	n2 = mktime(&dday); 
	// 시간은 정수형

	nDday = (n2 - n1) / DAYSEC; //경과일수

	printf("오늘의 날짜는 %s\n", ctime(&now)); //ctime==current time
	printf("ㅇㅇㅇ의생일: %d일 남았습니다.(%d %d %d)\n",nDday, dday.tm_year+1900, dday.tm_mon+1,dday.tm_mday);

}
*/

// 248) 오늘 날짜로부터 크리스마스까지의 남은 시간 구하기
/*
#include<time.h>
#define DAYSEC (60*60*24)

void main(void)
{
	time_t now, n1, n2, nChristmas; // 현재 시각을 임시 저장할 변수
	struct tm t, christmas = { 0,0,0,25,12,2024 }; //올해 크리스마스 날짜
	//int n1, n2, nChristmas; //시간을 저장할 변수

	now = time(NULL);
	t = *localtime(&now);

	christmas.tm_year -= 1900;
	christmas.tm_mon -= 1;
	// 호환성이 있도록 표준 형식으로 변경

	n1 = mktime(&t);
	n2 = mktime(&christmas);

	nChristmas = (n2 - n1); //크리스마스까지 남은 시간 초 단위로 (=time_t 형 정수)
	christmas = *localtime(&nChristmas); //크리스마스까지 남은 시간을 tm형태로 변환

	printf("오늘의 날짜는 %s\n", ctime(&now));
	printf("크리스마스까지 남은 시간: %d개월 %d일 %d시간 %d분 %d초입니다.\n", christmas.tm_mon,
		christmas.tm_mday, christmas.tm_hour, christmas.tm_min, christmas.tm_sec);
}
*/

// 249) 오늘 날짜에 임의의 날짜 더하고 빼기
/*
#include<time.h>
void main(void)
{
	time_t now;
	struct tm t, tb;

	now = time(NULL);
	t = *localtime(&now);

	tb = t;

	t.tm_mon += 100;
	t.tm_mday += 90;
	t.tm_hour += 80;

	mktime(&t); //실제 구조체 값을 날짜에 맞게 자동 변환

	printf("오늘 날짜는 %d/%d/%d %d:%d:%d입니다.\n",
		tb.tm_year + 1900, tb.tm_mon + 1, tb.tm_mday, tb.tm_hour, tb.tm_min, tb.tm_sec);
	printf("100개월 90일 80시간을 더한 날짜는 %d/%d/%d %d:%d:%d입니다.\n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);

	tb.tm_mon -= 100;
	tb.tm_mday -= 90;
	tb.tm_hour -= 80;

	mktime(&tb);
	printf("100개월 90일 80시간을 뺀 날짜는 %d/%d/%d %d:%d:%d입니다.\n",
		tb.tm_year + 1900, tb.tm_mon + 1, tb.tm_mday, tb.tm_hour, tb.tm_min, tb.tm_sec);
}
*/

// 250) 크리스마스의 요일 구하기
/*
#include<time.h>
void main(void)
{
	struct tm christmas = { 0,0,0,25,12,2024 };
	char* wday[] = { "일", "월","화", "수","목","금","토" };
	char buff[100];

	mktime(&christmas); //tm으로 time_t형을 만듦
	strftime(buff, sizeof(buff), "2024년 12월 25일은 %A입니다.", &christmas);

	puts(buff);
	printf("2024년 12월 25일은 %s요일 입니다.", wday[christmas.tm_wday]);
}
*/

// 251) 세계 표준 시와 국내 표주 시의 시간 차 구하기 (localtime)
/*
#include<time.h>

void main(void)
{
	time_t now, n1, n2;
	struct tm t1, t2;

	time(&now);
	t1 = *localtime(&now);
	t2 = *gmtime(&now);

	n1 = mktime(&t1);
	n2 = mktime(&t2);

	printf("세계 표준 시와 대한민국의 시간 차이: %g 시간\n", difftime(n1, n2) / 3600);//초 단위를 시간 단위로 변환
}
*/

// 252) 5초간 지연하는 함수 구현하기 (clock)
/*
#include<time.h>

void sleep(int sec);

void main(void)
{
	time_t n1, n2;

	time(&n1);
	sleep(5);
	time(&n2);

	printf("%g초가 지연되었습니다.\n", difftime(n2, n1));

}

void sleep(int sec)
{
	clock_t ct;
	ct = clock();
	while (ct + CLK_TCK * sec > clock());
}
*/

// 253) 두 시간 간의 차이 구하기(mktime)
/*
#include<time.h>
void main(void)
{
	struct tm t1, t2;
	int n1, n2, n3;

	t1.tm_year = 2020 - 1900;
	t1.tm_mon = 6 - 1;
	t1.tm_mday = 15;
	t1.tm_hour = 1;
	t1.tm_min = 12;
	t1.tm_sec = 50;

	t2.tm_year = 2020 - 1900;
	t2.tm_mon = 6 - 1;
	t2.tm_mday = 15;
	t2.tm_hour = 3;
	t2.tm_min = 35;
	t2.tm_sec = 22;

	n1 = mktime(&t1);
	n2 = mktime(&t2);

	n3 = n2 - n1;

	printf("시간1: %4d-%02d-%02d %02d:%02d:%02d\n",
		t1.tm_year + 1900, t1.tm_mon + 1, t1.tm_mday, t1.tm_hour, t1.tm_min, t1.tm_sec);
	printf("시간2: %4d-%02d-%02d %02d:%02d:%02d\n",
		t2.tm_year + 1900, t2.tm_mon + 1, t2.tm_mday, t2.tm_hour, t2.tm_min, t2.tm_sec);

	printf("시간 차이: %d:%d:%d\n",
		n3 / 3600, (n3 % 3600) / 60, n3 % 60);
}
*/

// 254) 두 날짜 간의 차이 구하기(mktime)
/*
#include<time.h>
void main(void)
{
	struct tm t1, t2, t3;
	time_t n1, n2, n3;

	t1.tm_year = 2020 - 1900;  //원하는 연도 - 1900
	t1.tm_mon = 6 - 1; //원하는 달 -1
	t1.tm_mday = 23;
	t1.tm_hour = 1;
	t1.tm_min = 12;
	t1.tm_sec = 50;

	t2.tm_year = 2020 - 1900;  //원하는 연도 - 1900
	t2.tm_mon = 8 - 1; //원하는 달 -1
	t2.tm_mday = 19;
	t2.tm_hour = 3;
	t2.tm_min = 35;
	t2.tm_sec = 22;

	n1 = mktime(&t1);
	n2 = mktime(&t2);

	n3 = n2 - n1; 

	t3 = *gmtime(&n3); //n3를 tm형으로 변환 + 표준시간으로 변환
	t3.tm_year -= 70; // 연도 초기화

	
	printf("날짜1: %4d-%02d-%02d %02d:%02d:%02d\n",
		t1.tm_year + 1900, t1.tm_mon + 1, t1.tm_mday, t1.tm_hour, t1.tm_min, t1.tm_sec);
	printf("날짜2: %4d-%02d-%02d %02d:%02d:%02d\n",
		t2.tm_year + 1900, t2.tm_mon + 1, t2.tm_mday, t2.tm_hour, t2.tm_min, t2.tm_sec);

	printf("날짜 차이: %4d-%02d-%02d %02d:%02d:%02d\n",
		t3.tm_year, t3.tm_mon , t3.tm_mday, t3.tm_hour, t3.tm_min, t2.tm_sec);


}
*/

// 255) 올해의 경과된 날짜 수 구하기(localtime)
/*
#include<time.h>
void main(void)
{
	time_t now;
	struct tm t;

	now = time(NULL);
	t = *localtime(&now);

	printf("올해의 경과일 수:%d\n", t.tm_yday);
}
*/

// 256) 올해의 경과된 주의 수 구하기 (strtime)
/*
#include<time.h>
void main(void)
{
	time_t now;
	struct tm t;
	char buff[100];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "올해의 경과된 주: %U\n", &t);

	puts(buff);
}
*/

// 257) 오늘의 요일 구하기
/*
#include<time.h>
void main(void)
{
	time_t now;
	struct tm t;
	char buff[100];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "요일: %A\n", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "요일: %a\n", &t);
	puts(buff);
	printf("%d\n", t.tm_wday);
}
*/

// 258) 오전/오후 표시하기
/*
#include<time.h>
#include<string.h>
void main(void)
{
	time_t now;
	struct tm t;
	char buff[100], AMPM[10];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S ", &t); //이렇게만 지정할 수도 있음!
	puts(buff);
	
	strftime(AMPM, sizeof(AMPM), "%p", & t);
	puts(AMPM);

	if (strcmp(AMPM,"AM") == 0)
	{
		strcpy(AMPM, "오전");
	}
	else if (strcmp(AMPM,"PM")== 0)
	{
		strcpy(AMPM, "오후");
	}
	strcat(buff, AMPM);

	puts(buff);
}
*/

// 259) AM/PM 표시하기 (시스템 설정이 한글일 경우 영어로 전환)
/*
#include<time.h>
#include<string.h>
void main(void)
{
	time_t now;
	struct tm t;
	char buff[100], AMPM[10];

	now = time(NULL);
	t = *localtime(&now); //locatime함수의 인자로는 포인터 또는 주소를 입력해야 함

	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S ", &t); //이렇게만 지정할 수도 있음!
	puts(buff);

	strftime(AMPM, sizeof(AMPM), "%p", &t);
	puts(AMPM);

	if (strcmp(AMPM, "오전") == 0)
	{
		strcpy(AMPM, "AM");
	}
	else if (strcmp(AMPM, "오후") == 0)
	{
		strcpy(AMPM, "PM");
	}
	strcat(buff, AMPM);

	puts(buff);
}
*/

// 260) 문자열로 된 날짜를 time_t형식으로 변환하기 (atoi, mktime)
/*
#include<time.h>
#include<stdlib.h>

void main(void)
{
	char date[] = "2020-06-23";
	time_t now;
	struct tm t = { 0, };

	t.tm_mday = atoi(&date[8]); date[7] = 0;
	t.tm_mon = atoi(&date[5]) - 1; date[4] = 0;
	t.tm_year = atoi(&date[0]) - 1900; //표준으로 출력하기 위해 형을 맞춰줌
	//숫자로 통일 

	now = mktime(&t);
	printf("2020-06-23을 time_t로 변환하면 %d입니다.\n", now);
}
*/

// 261) 문자열로 된 날짜를 struct tm 형식으로 변환하기
/*
#include<time.h>
#include<stdlib.h>
void main(void)
{
	char date[] = "2020-06-23 02:09:21";
	struct tm t = { 0, };

	t.tm_sec = atoi(&date[17]); date[16] = 0;
	t.tm_min = atoi(&date[14]); date[13] = 0;
	t.tm_hour = atoi(&date[11]); date[10] = 0;
	t.tm_mday = atoi(&date[8]); date[7] = 0;
	t.tm_mon = atoi(&date[5])-1; date[4] = 0;
	t.tm_year = atoi(&date[0])-1900;

	mktime(&t); //날짜 형식으로 변환
	printf("struct tm변환 후 날짜: %4d-%02d-%02d %02d:%02d:%02d\n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);
}
*/

// 262) 날짜 및 시간을 다양한 방법으로 출력하기 (_ftime)
/*
#include<time.h>
#include<sys/timeb.h>

void main(void)
{
	struct _timeb tb;
	struct tm t;
	char buff[100];

	_ftime(&tb);

	t = *localtime(&tb.time);

	printf("%4d-%d-%d %d:%d:%d.%d\n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec, tb.millitm);

	printf(ctime(&tb.time));
	printf(asctime(&t)); //ascii 
	puts(_strdate(buff));
	puts(_strtime(buff));
	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S %p (%a)", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "%#Y-%#m-%#d %#H:%#M:%#S ", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "%c", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "%x %X", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "%c", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "%#x", &t);
	puts(buff);
}
*/

// 263) 야구 게임 만들기
/*
#define _CRT_SECURE_NO_WARNINGS
#include<time.h> // time
#include<stdlib.h> //srand, rand
#include<memory.h> //memset

void main(void)
{
	int com[3] = { 0, };
	int gamer[3] = { 0, };
	int guess[10] = { 0, };
	int count, i; 
	int strike, ball;
	char yesno='y';

	srand(time(NULL)); // 랜덤 함수의 씨드 설정
	puts("야구 게임을 시작합니다.");

	while (1)
	{
		com[0] = rand() % 10; // rand() 함수가 반환하는 값은 0~32767 
		com[1] = rand() % 10; // 10으로 나눈 나머지 == 10보다 작은 수 =
		com[2] = rand() % 10;
		// com에는 난수 3개를 저장
		count = 1;

		printf("랜덤 숫자: %d %d %d\n", com[0], com[1], com[2]);

		if (com[0] == com[1] || com[0] == com[2] || com[1] == com[2]) //숫자가 겹치는 경우
		{
			continue;
		}

		puts("0~9 사이의 숫자를 공백으로 분리하여 3개 입력하고 엔터키를 치세요!");
		memset(guess, 0, sizeof(guess)); // guess의 크기만큼 메모리 할당

		while (1)
		{
			strike = 0; ball = 0; //strike와 ball모두 초기화

			for (i = 0; i < 10; i++)
			{
				printf("%d ", guess[i]); // 이건 왜...?
			}
			printf("[0~9] 사이의 숫자를 3개 입력하세요: ");
			scanf("%d %d %d", &gamer[0], &gamer[1], &gamer[2]);
			
			for (i = 0; i < 3; i++)
			{
				if (com[i] == gamer[i]) strike++;
			}
			if (com[0] == gamer[1] || com[0] == gamer[2]) ball++;
			if (com[1] == gamer[0] || com[1] == gamer[2]) ball++;
			if (com[2] == gamer[0] || com[2] == gamer[1]) ball++;

			if (gamer[0] > 9 || gamer[1] > 9 || gamer[2] > 9)
			{
				puts("입력한 숫자가 너무 큽니다. 0~9를 입력하세요.");
				continue;
			}

			for (i = 0; i < 3; i++)
			{
				guess[gamer[i]] = gamer[i];
			}

			printf("\n[%2d회] %d 스트라이크 %d볼\n\n", count, strike, ball);
			if (strike == 3) break;
			count++;

		}
		getchar();
		printf("게임을 계속하시겠습니까 (y/n)?\n");
		scanf("%c", &yesno); //yesno에 저장//yesno는 char형 변수

		if (yesno == 'N' || yesno == 'n') break;
		// yesno가 n이면 break
	}
}
*/

// 264) 스택 구현하기
/*
#include<string.h>
#include<stdlib.h>

#define STACK_MAX 100

int push(int value); // 함수 선언
int pop(int* value);

typedef struct tagStack
{
	int array[STACK_MAX];
	int top;
	int bottom;
}STACK;

STACK s;

void main(void)
{
	char buff[100], tmp[100]; //declare two buffers to save data
	char* op = "+-* /%"; //문자열 상수 (string literals?)
	int index;
	int value1 = 0, value2 = 0;

	s.top = STACK_MAX; //top에는 미리 최대값을 저장해두기

	puts("X+Y 형식으로 계산식을 입력하고 엔터키를 치세요.");
	puts("아무것도 입력하지 않으면 계산이 종료됩니다.");

	for (;;)
	{
		printf("계산식: ");
		gets(buff); // 계산식을 입력 받아서 buff에 저장

		if (strlen(buff) == 0) break; 

		memset(tmp, 0, sizeof(tmp));

		index = strcspn(buff, op); // returns the length of inital segment of buff that does not contain characters from op
		// index == the number of digits in a number, the index of the operator
		// index에 연산자의 인덱스 저장

		// "2+3"에서 buff[index] == "+" // index==1이기 때문
		memcpy(tmp, buff, index); // tmp에 첫 번째 피연산자 저장 
		// index만큼 복사하면 첫번째 요소인 "2"만 복사됨 // buff[index-1]과 같음
		
		value1 = atoi(tmp); // tmp에 복사된 2를 숫자로 변환
		value2 = atoi(&buff[index + 1]); // "+" 다음에 오는 숫자인 "3"부터 끝까지 (여기선 없음) 숫자로 변환

		// 2, +, 3
		// value1, buff[index], value2

		switch (buff[index]) //연산자의 경우
		{
			case '+': value1 += value2; break;
			case '-': value1 -= value2; break;
			case '*': value1 *= value2; break;
			case '/': value1 /= value2; break;
			case '%': value1 %= value2; break;
			default:
				puts("잘못된 연산자를 사용하였습니다.");
				continue; //switch문 반복
		}
		// value1에는 연산이 끝난 결과가 저장되어 있음 -> "2+3=5"
		// value1==5

		if (push(value1) == -1) //top-1에 value1을 저장하고 반환값이 -1인지 검사
		{
			puts("더 이상 저장할 수 없습니다.");
			break;
		}
		printf("%s = %d, s.top = %d\n", buff, value1, s.top); // 현재 top은 99
	}

	value1 = 0;

	for (;;)
	{
		if (pop(&value2) == -1) { //value2를 
			break;
		}
		value1 += value2;
	}
	printf("게산의 총합은 %d입니다\n", value1);
}

int push(int value)
{
	s.array[--s.top] = value; // save value starting at the last(or TOP) element of the array
	//항상 top의 숫자보다 1 적은 인덱스에 저장 (인덱스는 시작이 0이기 때문)
	if (s.top == 0) return -1;
	return 0; //반환은 0 -> doesn't do much on the program itself
}

int pop(int* value)
{
	if (s.top == STACK_MAX) return -1; // if var is already at its maximum, return -1
	*value = s.array[s.top++]; // 포인터인 value의 값에 top에 있는 요소의 값을 넣기 // 근데...증가연산을 해도 되나..?
	return 0;
}
*/

// 265) 큐 구현하기 
/*
#include<string.h>
#include<stdlib.h>

int add(int value);
int delete(int* value);

#define QUEUE_MAX 100

typedef struct tagQueue
{
	int array[QUEUE_MAX];
	int front;
	int rear;
}QUEUE;

QUEUE q; // 구조체 전역 변수

void main(void)
{
	char buff[100], tmp[100];
	char* op = "+-*%/";
	int index;
	int value1 = 0, value2 = 0;

	q.front = q.rear = 0; //오.. 한 줄에..

	puts("계산식을 1+2처럼 입력하고 엔터키를 치세요!");
	puts("아무것도 입력하지 않으면 계산이 종료됩니다.");

	for (;;)
	{
		printf("계산식:");
		gets(buff);

		if (strlen(buff)== 0 ) break; // 여기서 종료됨. 조건을 안 넣었기 때문!!

		memset(tmp, 0, sizeof(tmp));

		index = strcspn(buff, op); //처음 일치하는 요소가 나오기 전까지의 문자열의 길이==첫 요소의 인덱스

		memcpy(tmp, buff, index); //tmp에 buff를 index만큼 복사

		value1 = atoi(tmp);
		value2 = atoi(&buff[index]); // 주소로 보내야 문자열이 됨. 아니면 딱 숫자 하나만 변환됨


		switch (buff[index]) //연산자의 경우
		{
		case '+': value1 += value2; break;
		case '-': value1 -= value2; break;
		case '*': value1 *= value2; break;
		case '/': value1 /= value2; break;
		case '%': value1 %= value2; break;
		default:
			puts("잘못된 연산자를 사용하였습니다.");
			continue; //switch문 반복
		}

		if (add(value1) == -1)
		{
			puts("더 이상 추가할 수 없습니다.");
		}

		printf("%s = %d, q.rear = %d\n\n", buff, value1, q.rear);
	}

	value1 = 0;

	for (;;)
	{
		if (delete(&value2) == -1) break;
		value1 += value2;
	}
	printf("계산의 총합은 %d입니다.\n", value1);
}

int add(int value)
{
	q.array[q.rear++] = value;
	if (q.rear == QUEUE_MAX) return -1;
	return 0;
}

int delete(int* value)
{
	if (q.front == q.rear || q.front == QUEUE_MAX) return -1;
	*value = q.array[q.front++];
	return 0;
}
*/

// 266) 단일 링크드 리스트 구현하기
/*
#include<malloc.h>
#include<string.h>

int add_list(char* name, char* tel, char* addr);
void print_list(void);
void remove_list(void);

typedef struct tagLinkedList
{
	char name[30];
	char tel[30];
	char addr[100];

	struct tagLinkedList* next;
}ADDR;

ADDR* g_pAddrHead = NULL;

void main(void)
{
	add_list("홍길동", "1111", "서울특별시 종로구");
	add_list("홍길순", "2222", "서울특별시 강서구");
	add_list("Mr.Kim", "3333", "서울특별시 구로구");
	add_list("김C", "4444", "서울특별시 강동구");
	add_list("최C", "5555", "대전광역시 동구");

	print_list();
	remove_list();

}

int add_list(char* name, char* tel, char* addr)
{
	ADDR* plocal, * pn = g_pAddrHead; //pn은 NULL
	//g_pAddrHead가 초기화되지 않은 경우, 한 번만 실행됩니다.

	if (g_pAddrHead == NULL)
	{
		g_pAddrHead = malloc(sizeof(ADDR)); //ADDR 구조체 할당

		if (g_pAddrHead == NULL)
		{
			return 0;
		}

		g_pAddrHead->next = NULL;
		plocal = g_pAddrHead;
	}
	else // g_pAddrHead가 초기화된 후 계속 실행됩니다.
	{
		plocal = malloc(sizeof(ADDR));

		if (plocal == NULL)
		{
			return 0; // 할당 실패 시
		}
		
		while ((*pn).next)
		{
			pn = pn->next;
		}

		pn->next = plocal; // 다음 리스트를 지정
		plocal->next = NULL; // 다음 리스트를 NULL로 지정
	}

	strcpy(plocal->name, name);
	strcpy(plocal->tel, tel);
	strcpy(plocal->addr, addr);

	return 1;
}

void print_list(void)
{
	int count = 1;
	ADDR* plist;

	plist = g_pAddrHead;

	// 한 개씩 출력
	while (plist)
	{
		printf("No.%d\n", count++);
		puts(plist->name);
		puts(plist->tel);
		printf("%s\n\n", plist->addr);

		plist = plist->next;
	}
}

void remove_list(void)
{
	ADDR* plocal;

	// 한 개씩 메모리 해제
	while (g_pAddrHead)
	{
		plocal = g_pAddrHead->next;
		
		free(g_pAddrHead);

		g_pAddrHead = plocal;
	}
}
*/

// 설명도 못하는 주제에 뭔 자료구조까지 설명하겠다고 병신이 씨발 진짜

// 267) 이중 링크드 리스트 구현하기
/*
#include<malloc.h>
#include<string.h>

int add_list(char* name, char* tel, char* addr);
void print_list(void);
void remove_list(void);

typedef struct tagLinkedList
{
	char name[30];
	char tel[30];
	char addr[100];

	struct tagLinkedList* prev;
	struct tagLinkedList* next;
}ADDR;

ADDR* g_pAddrHead = NULL;

void main(void)
{
	add_list("홍길동", "1111", "서울특별시 종로구");
	add_list("홍길순", "2222", "서울특별시 강서구");
	add_list("Mr.Kim", "3333", "서울특별시 구로구");
	add_list("김C", "4444", "서울특별시 강동구");
	add_list("최C", "5555", "대전광역시 동구");

	print_list();
	remove_list();
}

int add_list(char* name, char* tel, char* addr)
{
	ADDR* plocal;

	if (g_pAddrHead == NULL)
	{
		g_pAddrHead = malloc(sizeof(ADDR));

		if (g_pAddrHead == NULL)
		{
			return 0;
		}

		g_pAddrHead->prev = NULL;
		g_pAddrHead->next = NULL;
	}
	else
	{
		plocal = malloc(sizeof(ADDR));
		if (plocal == NULL)
		{
			return 0;
		}

		g_pAddrHead->next = plocal;
		plocal->prev = g_pAddrHead;
		g_pAddrHead = plocal;
		g_pAddrHead->next = NULL;
	}

	strcpy(g_pAddrHead->name, name);
	strcpy(g_pAddrHead->tel, tel);
	strcpy(g_pAddrHead->addr, addr);

	return 1; 
}
void print_list(void)
{
	int count = 1;
	ADDR* plocal;

	plocal = g_pAddrHead;

	while (plocal->prev)
	{
		plocal = plocal->prev; //이전의 것을 저장
	}

	while (plocal)
	{
		printf("No.%d\n", count++);
		puts(plocal->name);
		puts(plocal->tel);
		printf("%s\n\n", plocal->addr);

		plocal = plocal->next;
	}
}
void remove_list(void)
{
	ADDR* plocal;

	while (g_pAddrHead->prev)
	{
		g_pAddrHead = g_pAddrHead->prev;
	}

	while (g_pAddrHead)
	{
		plocal = g_pAddrHead->next;

		free(g_pAddrHead);
	}

	g_pAddrHead = NULL;
}
*/

// 268) 주소록 구현하기 
/*
#include<malloc.h>
#include<string.h>
#include<conio.h>

#define ADDRFILE "c:\\addrlist.txt"

typedef struct tagLinkedList
{
	char name[30];
	char tel[30];
	char addr[100];

	struct tagLinkedList* prev;
	struct tagLinkedList* next;
}ADDR;

ADDR* g_pAddrHead = NULL;
ADDR* g_pFind;
int g_bSaved = 1;

void get_addrlist(void);
int add_list(const ADDR* addr);
int find_list(const char* name);
void SetHeadPosition(void);
void SetTailPosition(void);

void Add_addr(void);
void Find_addr(void);
void Modify_addr(void);
void Delete_addr(void);
void Print_addr(void);
void Save_addr(void);
void Remove_addr(void);

void main(void)
{
	int ch;

	get_addrlist();

	puts("주소록 프로그램 Version 1.0");
	while (1)
	{
		printf("\n[1]등록 [2]검색 [3]수정 [4]삭제 [5]출력 [S]저장 [Q]종료");
		ch = _getch();

		switch (ch)
		{
		case '1': Add_addr(); break;
		case '2': Find_addr(); break;
		case '3': Modify_addr(); break;
		case'4':  Delete_addr(); break;
		case'5':  Print_addr(); break;
		case 's': 
		case 'S': Save_addr(); break;
		case'q':
		case'Q': 
			if (g_bSaved == 0)
			{
				printf("\n\n변경된 주소 데이터를 저장하시겠습니까? (y/n)");
				ch = _getch();
				if (ch == 'Y' || ch == 'y') Save_addr(); 
			}
			Remove_addr(); return;
		default: printf("\n\n1~5 또는 S/Q를 누르십시오.\n\n");
			break;
		}
	}
}

void get_addrlist(void)
{
	ADDR addr;
	FILE* fp;
	fp = fopen(ADDRFILE, "rb");

	if (fp=NULL)
	{
		perror("파일 개방 에러");
		return;
	}
	while (!feof(fp))
	{
		fread(&addr, sizeof(ADDR), 1, fp);

		if (ferror(fp))
		{
			fclose(fp);
			perror("파일 읽기 에러");
			return;
		}

		if (feof(fp))break;
		
		if (add_list(&addr) == 0)
		{
			printf("주소 데이터를 링크드 리스트에 추가할 수 없습니다.\n");
		}
	}

	fclose(fp);
}

int add_list(const ADDR* addr)
{
	ADDR* plocal, * pn = g_pAddrHead;

	SetHeadPosition();

	if (g_pAddrHead == NULL)
	{
		plocal = malloc(sizeof(ADDR));
		memset(plocal, 0, sizeof(ADDR));

		if (plocal == NULL)
		{
			return 0;
		}
		g_pAddrHead = plocal;
		g_pAddrHead->prev = NULL;
		g_pAddrHead->next = NULL;
	}
	else
	{
		plocal = malloc(sizeof(ADDR));
		memset(plocal, 0, sizeof(ADDR));

		if (plocal == NULL)
		{
			return 0;
		}

		while (pn->next)
		{
			pn = pn->next;
		}

		pn->next = plocal;
		plocal->prev = pn;
		plocal->next = NULL;
	}

	strcpy(plocal->name, addr->name);
	strcpy(plocal->tel, addr->tel);
	strcpy(plocal->addr, addr->addr);

	return 1;
}

int find_list(const char* name)
{
	ADDR* plocal;

	SetHeadPosition();

	plocal = g_pAddrHead;

	while (plocal)
	{
		if (strstr(plocal->name, name)) {
			g_pFind = plocal;
			return 1;
		}

		plocal = plocal->next;
	}

	return 0;
}

void SetHeadPosition(void)
{
	if (g_pAddrHead->prev) return;

	while (g_pAddrHead->prev)
	{
		g_pAddrHead = g_pAddrHead->prev;
	}
}

void SetTailPosition(void)
{
	if (g_pAddrHead == NULL) return;
	while (g_pAddrHead->next)
	{
		g_pAddrHead = g_pAddrHead->next;
	}
}
	

void Add_addr(void)
{
	ADDR addr;

	memset(&addr, 0, sizeof(ADDR));

	printf("\n\n등록할 이름:"); gets(addr.name);

	if (strlen(addr.name) == 0) return;
	
	printf("등록할 전화:"); gets(addr.tel);
	printf("등록할 주소:"); gets(addr.addr);

	if (find_list(addr.name) ==1)
	{
		printf("\n이미 등록되어 있는 이름입니다.\n\n");
		puts(g_pFind->name);
		puts(g_pFind->tel);
		puts(g_pFind->addr);
		return;
	}

	if (add_list(&addr))
	{
		g_bSaved = 0;
		printf("\n등록되었습니다.\n\n");
	}
	else
	{
		printf("\n등록에 실패하였습니다.\n\n");
	}
}

void Find_addr(void)
{
	char buff[100] = { 0, };
	ADDR* plocal;

	printf("\n\n검색할 이름/전화/주소의 일부를 입력하세요.\n");
	printf("이름/전화/주소:"); gets(buff);

	if (strlen(buff) == 0) return;

	SetHeadPosition();

	plocal = g_pAddrHead;
	g_pFind = NULL;

	while (plocal)
	{
		if (strstr(plocal->name, buff))
		{
			g_pFind = plocal;
			break;
		}

		if (strstr(plocal->tel, buff))
		{
			g_pFind = plocal;
			break;
		}

		if (strstr(plocal->addr, buff))
		{
			g_pFind = plocal;
			break;
		}

		plocal = plocal->next;
	}

	if (g_pFind)
	{
		puts(g_pFind->name);
		puts(g_pFind->tel);
		puts(g_pFind->addr);
	}
	else
	{
		printf("\n\n%s을 주소록에서 찾을 수 없습니다.\n\n", buff);
	}
}

void Modify_addr(void)
{
	char name[100] = { 0, };
	ADDR addr;

	while (1)
	{
		printf("\n\n수정할 이름:"); gets(name);

		if (strlen(name) == 0) return;
		if (find_list(name)==0)
		{
			puts("수정할 이름을 찾을 수 없습니다.");
			continue;
		}

		break;
	}

	printf("\n%s에 대한 주소 데이터를 아래와 같습니다.\n\n", name);
	puts(g_pFind->name);
	puts(g_pFind->tel);
	puts(g_pFind->addr);

	printf("\n수정하려는 이름/전화/주소를 입력한 수 엔터키를 치세요.\n\n");

	printf("이름: "); gets(addr.name);
	printf("전화: "); gets(addr.tel);
	printf("주소: "); getc(addr.addr);

	if (strlen(addr.name) == 0) strcpy(addr.name, name);
	
	strcpy(g_pFind->name, addr.name);
	strcpy(g_pFind->tel, addr.tel);
	strcpy(g_pFind->addr, addr.addr);

	g_bSaved = 0;

	printf("%s에 대한 주소 데이터를 수정하였습니다.\n", name);
}

void Delete_addr(void)
{
	char name[100] = { 0, };
	ADDR* plocal;
	int ch;

	while (1)
	{
		printf("\n\n삭제할 이름: "); gets(name);

		if (strlen(name) == 0) return;
		
		if (find_list(name) == 0)
		{
			puts("삭제할 이름을 찾을 수 없습니다.");
			continue;
		}
		break;
	}

	puts(g_pFind->name);
	puts(g_pFind->tel);
	puts(g_pFind->addr);

	printf("%s을 삭제하시겠습니까?(y/n)",name);
	ch = _getch();
	fflush(stdin);

	if (ch == 'Y' || ch == 'y')
	{
		if (g_pFind->prev == NULL)
		{
			free(g_pFind);
			g_pAddrHead = NULL;
		}
		else
		{
			plocal = g_pFind->next;
			free(g_pFind);
			plocal->prev = NULL;
			g_pAddrHead = plocal;
		}
	}
	else if(g_pFind->next = NULL)
	{
		plocal = g_pFind->prev;
		free(g_pFind);
		plocal->next = NULL;
		g_pAddrHead = plocal;
	}
	else
	{
		plocal = g_pFind->prev;
		plocal->next = g_pFind->next;

		plocal = g_pFind->next;
		plocal->prev = g_pFind->prev;

		free(g_pFind);

		g_pAddrHead = plocal;
	}

	g_bSaved = 0;

	printf("\n\n검색된 주소 데이터를 삭제하였습니다.\n\n");
}

void Print_addr(void)
{
	int count = 1;
	ADDR* plocal;

	SetHeadPosition();

	plocal = g_pAddrHead;

	while (plocal->prev)
	{
		plocal = plocal->prev;
	}
	printf("\n\n");

	while (plocal)
	{
		printf("번호. %d\n", count++);
		puts(plocal->name);
		puts(plocal->tel);
		printf("%s\n\n", plocal->addr);

		printf("아무 키나 누르세요, (중지:q)\n\n");
		if (_getch() == 'q') return;
		
		plocal = plocal->next;
		{

		}
	}
}

void Save_addr(void)
{
	ADDR* plocal;
	FILE* fp;

	if (g_pAddrHead == NULL) return;

	fp = fopen(ADDRFILE, "w+b");

	if (fp == NULL)
	{
		perror("파일 개방 에러");
		return;
	}

	SetHeadPosition();

	while (g_pAddrHead)
	{
		plocal = g_pAddrHead->next;
		fwrite(g_pAddrHead, sizeof(ADDR), 1, fp);
		g_pAddrHead = plocal;
	}

	printf("\n모든 데이터를 파일에 저장하였습니다.");
	g_bSaved = 1;

	fclose(fp);
}

void Remove_addr(void)
{
	ADDR* plocal;

	if (g_pAddrHead == NULL) return;

	SetHeadPosition();

	while (g_pAddrHead)
	{
		plocal = g_pAddrHead->next;
		free(g_pAddrHead);
		g_pAddrHead = plocal;
	}

	g_pAddrHead = NULL;

}
*/


// 269) TCP/IP 이해하기
/*
#include<winsock2.h>
#pragma comment(lib,"wsock32.lib")


void main(void)
{
	SOCKET s; // 소켓 디스크립터
	WSADATA wsaData;
	SOCKADDR_IN sin; // 소켓 구조체

	if (WSAStartup(WINSOCK_VERSION, &wsaData) !=0)
	{
		printf("WSAStartup 실패, 에러 코드 = %d\n", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (s==INVALID_SOCKET)
	{
		printf("소켓 생성 실패, 에러 코드 = %d\n", WSAGetLastError());
		WSACleanup();
		return;
	}

	sin.sin_family = AF_INET; //주소 체계 설정
	sin.sin_addr.s_addr = inet_addr("192.168.45.62"); //접속 주소 설정
	sin.sin_port = htons(21); //포트 번호 설정

	if (connect(s,(struct sockaddr*)&sin, sizeof(sin) !=0))
	{
		printf("접속 실패, 에러 코드 = %u\n",WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	if (closesocket(s) != 0)
	{
		printf("소켓 제거 실패, 에러 코드 = %u\n", WSAGetLastError());
		WSACleanup();
		return;
	}

	if (WSACleanup() != 0)
	{
		printf("WSACleanup 실패, 에러 코드 = %u\n", WSAGetLastError());
		return;
	}

	puts("127.0.0.1의 21번 포트에 접속을 성공하였습니다.");
}
*/

// 270) TCP/IP 서버/클라이언트 프로그램 만들기
/*
#include<WinSock2.h>

#pragma comment(lib,"wsock32.lib")

void main(void)
{
	SOCKET s, cs;
	WSADATA wsaData;
	struct sockaddr_in sin, cli_addr; //소켓 구조체
	int size = sizeof(cli_addr);
	char data[10] = { 0, };

	if (WSAStartup(WINSOCK_VERSION, &wsaData) != 0)
	{
		printf("WSAStartup 실패, 에러 코드 = %d\n", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (s==INVALID_SOCKET)
	{
		printf("소켓 생성 실패, 에러 코드: %d\n", WSAGetLastError());
		WSACleanup();
		return;
	}

	sin.sin_family = AF_INET;
	sin.sin_port = htons(10000);
	sin.sin_addr.s_addr = htonl(ADDR_ANY); //모든 클라이언트로부터의 접속 허용

	if (bind(s,(struct sockaddr*)&sin, sizeof(sin))==SOCKET_ERROR)
	{
		printf("바인드 실패, 에러 코드 = %d\n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;

	}

	if (listen(s, SOMAXCONN)!=0)
	{
		printf("리슨 모드 설정 실패, 에러 코드 = %d\n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	printf("클라이언트로부터의 접속을 기다리고 있습니다...\n");

	cs = accept(s, (struct sockaddr*)&cli_addr, &size);

	if (cs==INVALID_SOCKET)
	{
		printf("접속 승인 실패, 에러 코드 = %d\n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	puts("클라이언트와 연결되었습니다.");

	if (recv(cs,data,3,0)<3)
	{
		printf("데이터 수신 실패, 에러 코드 = %u\n", WSAGetLastError());
		closesocket(cs); closesocket(s); WSACleanup(); return;
	}

	printf("%s가 클라이언트로부터 수신되었습니다.\n", data);

	if (closesocket(cs) != 0 || closesocket(s) !=0)
	{
		printf("소켓 제거 실패, 에러 코드 = %u\n", WSAGetLastError());
		WSACleanup();
		return;
	}

	if (WSACleanup() !=0)
	{
		printf("WSACleanup 실패, 에러 코드 = %u\n", WSAGetLastError());
		return;
	}
}
*/
