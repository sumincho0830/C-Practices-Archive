#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <malloc.h>
#include <io.h>
#include <sys/stat.h>
#include <direct.h>
#include <time.h>
#include <sys/timeb.h>
#include <Windows.h>
#include <math.h>
#include <search.h>

// 51) 문자 입력받기 (getch) -> <conio.h> 에 정의된 함수
// 어디서 뭘 가져오지? 키보드의 입력 값을 가져오긴 하는데,, 하나씩 가져오는듯?
/*
#define ENTER 13

void main(void)
{
	int ch;

	printf("아스키 코드로 변환할 키를 누르세요...\n");
	printf("Enter 키를 누르면 프로그램은 종료됩니다.\n");

	do
	{
		ch = getch();
		printf("문자: %c, 아스키코드 = %d\n", ch, ch);

	} while (ch != ENTER);

}
*/

// 52) 문자 출력하기 (putch)
/*
int print(char* string);

void main(void)
{
	print("This is a putch function!");
}

int print(char* string)
{
	int len = 0;

	while (*string != (char)NULL) // string이 null이 아닐 때 출력하는 방식을 주로 택함
	{
		_putch(*string); // 이렇게 직접적으로 변수를 지정해도 됨
		string++;
		len++;
	}

	// 현재 출력되고 있는 줄을 다음 줄의 첫번째로 이동
	_putch('\r'); // 캐리지 리턴
	_putch('\n'); // 라인 피드

	return len;
}
*/

// 53) 정수값 입력받기 (scanf)
/*
void main(void)
{
	int count; // 3회를 카운트하기 위한 변수
	int tmp; // 정수값을 읽을 임시 변수
	int total = 0; //읽은 정수값을 합산하기 윟나 변수

	for (count = 0; count < 3; count++)
	{
		printf("정수%d 입력 뒤 Enter키를 누르세요:", count+1);
		scanf("%d", &tmp);
		total += tmp;
	}

	printf("총합: %d\n", total);
}
*/

/*
void main(void)
{
	char str1[100];
	char str2[100];
	char str3[100];

	printf("문자열 3개 입력: ");
	scanf("%s %s", str1, str2); // 공백을 포함은 문자열은 scanf 함수로 가져와지지 않음
	scanf("%s",str3);

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
}
*/

// 54) 정수값 출력하기 (printf)
/*
void main(void)
{
	int i = 100;
	int j = 1000;
	int k = 12345;

	// 정렬을 사용하지 않는 경우
	printf("[%d]\n", i);
	printf("[%d]\n", j);
	printf("[%d]\n", k);
	printf("\n");

	// 출력을 5자리 설정
	printf("[%5d]\n", i);
	printf("[%5d]\n", j);
	printf("[%5d]\n", k);
	printf("\n");

	// 왼쪽 정렬
	printf("[%+d]\n", i);
	printf("[%+d]\n", j);
	printf("[%+d]\n", k);
	printf("\n");
}
*/

// 가변 인수를 가지는 함수
/*
void var_print(char* format, ...) //char형 포인터 변수 하나와 그 뒤에 여러개의 값을 인자로 받는 함수
{
	char buff[1024];
	va_list arglist; // va_list는 어딘가에 정의되어 있는 기본 제공 타입? 구조체?

	va_start(arglist, format);
	vsprintf(buff, format, arglist);
	va_end(arglist);

	printf(buff);

}
*/

// 55) 문자열 입력받기 (gets)
/*
int count(char* str);

void main(void)
{
	char string[100];
	char* ret;

	ret = gets(string); //ret라는 포인터에 string의 주소(?)를 반환? gets 함수는 뭘 반환하지?
	// string주소에서 문자열을 읽어와서 반환..! 인가부다

	if (ret != NULL)
	{
		printf("문자 'a'의 갯수는 %d개 입니다.", count(string)); 
	}
}

int count(char* str) // 포인터로 받고
{
	int cnt = 0;

	while (*str != (int)NULL) 
	{
		if (*str++ == 'a') cnt++;
		// 이게 모람..
		// *str -> str의 주소에 접근
		// ++ -> 후치연산
		// 
	}

	return cnt;
}
*/

// 56) 문자열 출력하기 (puts) 
/*
#define KOREA   "대한민국"
#define SUMMER  "여름"

void main(void)
{
	const char* winter = "겨울"; // 문자열형 배열 상수에 문자열을 바로 저장

	puts(KOREA); // 문자열은 주소 그 자체임
	puts(SUMMER); // 문자열은 주소의 표현 그 자체임
	puts(winter);// 이렇게 주소로 넘겨주면 문자열을 프린트함

}
*/

// 57) 문자열 복사하기 (strcpy)
// strcpy는 <string.h>파일에 선언되어있다

/*
#define KOREA "대한민국"

void main(void)
{
	char* string1; // 포인터
	char string2[100]; // 배열

	strcpy(string1, KOREA); // 에러. 왜?
	strcpy(string2, KOREA); // string2도 포인터임 (배열의 이름)
	strcpy(string2, "봄"); // 이건 되나..? 문자열 그 자체도 주소이므로 가능할듯 하다
}
*/

// 58) 문자열을 복사하는 함수 만들기
/*
#define KOREA "대한민국"

char* My_strcpy(char* dest, const char* src);

void main(void)
{
	char string[100];

	My_strcpy(string, KOREA); // "주소값"과 "문자열 상수" 반환
	puts(string); //string주소에 있는 값을 출력
	// 배열에 문자열이 문자 하나씩 대입되어 저장됨(복사됨)
}

char* My_strcpy(char* dest, const char* src)
{ 
	// 예외 처리
	// 만약 dest가 NULL이거나, src가 NULL이라면
	// 그 중 dest의 값이 NULL이 아니라면
	// -> 이건 다른 말 // (string의 주소가 Null, 즉 주소값이 없는, 초기화되지 않은 포인터라면)
	// dest의 값에 NULL을 저장하고
	// NULL을 반환
	if (dest==(int)NULL || src==(int)NULL) // 둘 다 주소이므로 정수형
	{
		if (*dest != (int)NULL) //주소가 없지는 않지만 값이 없는 상태라면
		{
			*dest = (int)NULL; // dest(주소)에 NULL저장
			return NULL;
		}
	}

	do
	{
		*dest++ = *src; // dest의 값에 src를 저장하고 dest의 값을 증가시킴..?
	} while (*src++ != (int)NULL); // src의 값이 NULL이 아닐 동안만 반복문 실행. 
	
	return dest;
}
*/

// 59) 문자열을 대,소문자로 구분하여 비교하기(strcmp)
/*
#define SKY "sky"

void main(void)
{
	char string[100];
	int ret;

	printf("영단어를 입력한 후 Enter키를 치세요!\n");
	printf("sky를 입력하면 프로그램이 종료됩니다.\n");

	do
	{
		gets(string);

		ret = strcmp(string, SKY); // 비교해서 같으면 0, str이 더 크면 1, str이 더 작으면 -1 반환
		//를 ret라는 정수형 변수에 반환

		if (ret == 0) // 두 문자열이 같으면
		{
			printf("%s == %s, ret = %d\n", string, SKY, ret);
			break; // 두 문자열이 일치할 때만 프로그램 종료. 그 외에는 무한반복. 
		}
		else if (ret<0) // str이 더 작으면
		{
			printf("%s < %s, ret = %d\n", string, SKY, ret);
		}
		else
		{
			printf("%s > %s, ret = %d\n", string, SKY, ret);
		}


	} while (1);
}
*/

// 60) 문자열을 비교하는 함수 만들기 
// strcmp 함수 직접 만들어보기

/*
#define SKY "sky"
int My_strcmp(const char* string1, const char* string2); // 왜 문자열 상수? 포인터가 아니라? 아하..!
// 비교할 문자열 상수 2개의 주소를 인자로 받는 함수

void main(void)
{
	char string[100];
	int ret;

	printf("영단어를 입력한 후 Enter키를 치세요!\n");
	printf("sky를 입력하면 프로그램이 종료됩니다.\n");

	do
	{
		gets(string); // string으로 문자열을 입력받기
		ret = My_strcmp(string, SKY); // string에 저장된 값과 sky의 값 비교 

		if (ret == 0) // 둘이 같다면
		{ 
			//프로그램 종료
			printf("%s == %s, ret = %d\n", string, SKY, ret);
			break;
		}
		else if (ret < 0)
		{
			printf("%s < %s, ret = %d\n", string, SKY, ret);
		}
		else
		{
			printf("%s > %s, ret = %d\n", string, SKY, ret);

		}

	} while (1);
}

int My_strcmp(const char* string1, const char* string2) // 문자열 상수 "포인터"이므로 결국 포인터처럼 사용해야 함
{
	if (*string1 == (int)NULL && *string2 == (int)NULL) return 0;

	while (*string1 != NULL) //string1의 문자가 NULL이 아님
	{
		if (*string2 == (int)NULL) return 1; // string1은 NULL이 아니고, string2 가 NULL인 경우 1이 더 큰 것이 확실하므로 1 반환

		if (*string1 == *string2)
		{
			string1++;
			string2++;
			continue; 
		}

		if (*string1 < *string2) return -1 ; //1이 2보다 작다면
		else return 1; // 그 반대라면 ㅑ하지만 위에서 string1==string2 조건을 통과했으므로 
	}
	if (*string2 != (int)NULL) return -1;
	return 0;
}
*/

// 61) 문자열을 일정 크기만큼 비교하기 (strncmp)
/*
#define SKY "sky"

void main(void)
{
	char string[100];
	int ret;

	printf("영단어를 입력한 후 Enter키를 치세요!");
	printf("sky로 시작되는 단어를 입력하면 프로그램이 종료됩니다.");
	
	do // 일단 반복
	{
		gets(string); //받아서 string배열에 저장

		ret = strncmp(string, SKY, 3);

		if (ret==0)
		{
			printf("%3.3s == %s, ret = %d \n", string, SKY, ret);
			break;
		}
		else if (ret<0)
		{
			printf("%3.3s < %s, ret = %d \n", string, SKY, ret);

		}
		else
		{
			printf("%3.3s > %s, ret = %d \n", string, SKY, ret);

		}

	} while (1); //어떤 조건이 충족되지 않는 이상 무하ㄴ반복
}
*/

// 62) 문자 연결하기 (strcat)
/*
void main(void)
{
	char string1[100];
	char string2[100];

	printf("첫 번째 단어를 입력하세요!\n");
	gets(string1);

	printf("두 번째 단어를 입력하세요!\n");
	gets(string2);

	strcat(string1, string2); //1 에 2를 삼

	puts(string1); 

}
*/


// 63) 문자열 길이 구하기(strlen)
/*
void main(void)
{
	char string[200];
	printf("문장을 입력한 후, Enter키를 치세요!\n");
	printf("아무것도 입력하지 않으면 프로그램은 종료됩니다!\n");

	do
	{
		gets(string);
		if (strlen(string) == 0)
		{
			break;
		}

		printf("문자열의 길이는 %d 입니다.\n", strlen(string));
	} while (1);
}
*/

// 64) 문자열 검색하기(strstr)
/*
#define SKY "sky"

void main(void)
{
	char string[100];
	char* ret;
	
	puts("문자열을 입력한 후 Enter키를 치세요!"); // puts함수는 자동 줄바꿈
	puts("문자열 중에 sky가 포함되어 있으면, 프로그램은 종료됩니다.");

	do
	{
		gets(string);
		ret = strstr(string, SKY); // string에서 SKY찾기. 반환 결과를 ret에 저장.

		if (ret==NULL) // 일치하는 것이 없으면 NULL반환
		{
			puts("문자열 중에 sky가 없습니다."); 
		}
		else 
		{
			printf("%d 위치에서 sky 문자열을 찾았습니다.", ret - string);// 문자열인데 이런 연산이 되나..?
			break;
		}

	} while (1); // 일단 무한반복 걸어놓고
	
}
*/

// 65) 문자열 중에서 문자 검색하기(strchr)
/*
#define FIND_CHAR 'h'

void main(void)
{
	char string[100];
	char* ret; // 포인터!

	puts("문자열을 입력한 후 Enter 키를 치세요!");
	puts("문자열 중에 'h'가 포함되어 있으면, 프로그램은 종료됩니다.");

	do
	{
		gets(string);

		ret = strchr(string, FIND_CHAR); // 문자열 중 FIND_CHAR 문자를 검색해서 반환. 반환값은 문자열의 주소값. 실패시 NULL.

		if (ret == NULL)
		{
			puts("문자열 중에 'h'가 없습니다.");
		}
		else
		{
			printf("%d 위치에서 문자 'h'를 찾았습니다.", ret-string); // puts에서는 서식 지정자를 쓰지 못한다
			break;
		}

	} while (1);
}
*/

// 66) 문자열 중에서 일치되는 첫 문자의 위치 구하기(strcspn)
// 두 문자열 중에서 일치되는 첫 문자의 위치
/*
void main(void)
{
	char* string = "This is a string $$$"; // 포인터 변수 초기화 시 문자열을 대입하면 문자열의 주소가 대입됨. 하지만 나중에 문자열을 대입하려 하면 오류가 남.
	char* strCharSet = "~!@#$%^&*()_+={}[]:;'<>./?";
	unsigned int pos; // position

	pos = strcspn(string, strCharSet); // pos변수에 strcspn의 반환값을 저장
	// 두 문자열이 일치하는 첫 문자는 $로, string[-3]과 strCharSet[4]에서 처음 등장한다.

	puts("0     1     2     3");
	puts("123456789012345678901234567890");
	puts(string);
	puts(strCharSet);

	printf("%d 위치에서 일치되는 첫 문자를 발견하였습니다.\n", pos);
}
*/

// 67) 문자열 중에서 일치되지 않는 첫 문자의 위치 구하기(strspn)
/*
void main(void)
{
	char* string = "this is a very good!";
	char* strCharSet = "abcdefghijklmnopqrstuvwxyz ";
	unsigned int pos;

	pos = strspn(string, strCharSet);
	puts("0     1     2     3");
	puts("1234567890123456789012390");
	puts(string);
	puts(strCharSet);

	printf("%d 위치에서 일치되지 않는 문자를 발견하였습니다.", pos);
}
*/

// 68) 문자열을 구분자로 분리하기 1 (strtok)
/*
#define TOCKEN " "

void main(void)
{
	char string[100];
	char* tocken;

	puts("문자열을 입력한 후 Enter 키를 치세요!");

	gets(string);

	tocken = strtok(string, TOCKEN); // 두번째 parameter을 기준으로 나눔
	// tocken이 NULL이 아님을 검사해야 하므로 미리 값을 전달해 준 다음 반복문을 실행함

	while (tocken != NULL)
	{
		puts(tocken);

		tocken = strtok(NULL, TOCKEN);
	}
}
*/

// 69) 문자열을 구분자로 분리하기 2(strpbrk)
/*
#define TOCKEN " "

void main(void)
{
	char string[100];
	char* pos;

	puts("문자열을 입력한 후 Enter키를 치세요!");

	gets(string); //string에 저장할 문자열을 입력받음

	pos = strpbrk(string, TOCKEN); // 공백을 기준으로 자르기. 주소 반환.

	while (pos != NULL)
	{
		puts(pos++);

		pos = strpbrk(pos, TOCKEN);// 다시 pos를 공백 기준으로 나눔
	}
}
*/

// 70) 문자열을 특정 문자로 채우기 (strset)
/*
void main(void)
{
	char string[100];

	puts("문자열을 입력한 후 Enter 키를 치세요!");
	puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.");
	
	do
	{
		gets(string);	
		if (strlen(string) == 0)
		{
			break;
		}
		_strset(string, string[0]);
		puts(string);
	} while (1);
}
*/

// 71) 부분 문자열을 특정 문자로 채우기 (strnset)
/*
void main(void)
{
	char string[100];

	puts("문자열을 입력한 뒤 Enter 키를 치세요!");
	puts("아무 문자로 입력하지 않으면 프로그램이 종료됩니다.");

	do
	{
		gets(string);

		// 문자열의 길이가 0일 경우 vs 0이 아닐 경우
		if (strlen(string) == 0)
		{
			break;
		}

		_strnset(string, '*', 5); //string을 처음부터 5칸 만큼만 *문자로 채우기
		puts(string);

	} while (1);
}
*/

// 72) 문자열을 대문자로 변환하기 (strupr)
/*
void main(void)
{
	char string[100];
	puts("문자열을 입력한 후 Enter키를 치세요!");
	puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다."); 
	// 행동 양식& 종료 조건을 명시해준다

	do
	{
		gets(string); //gets의 인자는 문자열을 저장할 주소

		if (strlen(string)==0) break;

		_strupr(string);//string자체를 변경시키는 함수. string의 요소를 대문자로 바꿔서 출력한다
		// 논리는 문자를 하나씩 가져와서 인덱스 상 97~nn(기억 안 남..)의 범위에 들어오면 
		// 'a'-'A'만큼을 더해서 같은 자리에 다시 저장 

		puts(string);
	} while (1);
}
*/

// 73) 문자열을 소문자로 변환하기 (strlwr)
/*
void main(void)
{
	char string[100];
	puts("문자열을 입력한 후 Enter키를 치세요!");
	puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.");
	// 행동 양식& 종료 조건을 명시해준다

	do
	{
		gets(string); //gets의 인자는 문자열을 저장할 주소

		if (strlen(string) == 0) break;

		_strlwr(string);//string자체를 변경시키는 함수. string의 요소를 대문자로 바꿔서 출력한다
		// 논리는 문자를 하나씩 가져와서 인덱스 상 65~nn(기억 안 남..)의 범위에 들어오면 
		// 'a'-'A'만큼을 빼서 같은 자리에 다시 저장 

		puts(string);
	} while (1);
}
*/

// 74) 문자열을 거꾸로 뒤집기 (strrev)
/*
void main(void)
{
	char string[100];
	puts("문자열을 입력한 후 Enter키를 치세요!");
	puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.");
	// 행동 양식& 종료 조건을 명시해준다

	do
	{
		gets(string); //gets의 인자는 문자열을 저장할 주소

		if (strlen(string) == 0) break;

		strrev(string);
		// for문 2개로


		puts(string);
	} while (1);
}
*/

//가지고 놀아보기
/*
void main(void)
{
	char str[100];
	char rev[100];

	int i, j;

	do
	{
		gets(str);

		if (strlen(str) == 0)break;

		i = strlen(str) - 2;
		j = 0;

		for (i = strlen(str)-1; i >=0 ; i--)
		{
			rev[j++] = str[i];
		}
		
		puts(rev);

	} while (1);
}
*/

// 75) 문자열을 중복 생성하기(strdup) stringduplicate
// 실행이 안됨!
/*
int main(void)
{
	char string[100];
	char* pstr;

	puts("문자열을 입력한 후 Enter키를 치세요!");
	puts("아무 문자도 입력하지 않으면 프로그램은 종료됩니다.");

	do
	{
		gets(string);

		if (strlen(string) == 0)break;

		pstr = _strdup(string); // malloc함수를 통해 값을 복사해서 상수로 저장하고, 그 문자열 상수의 주소를 반환

		strcpy(string, "temporary string");

		printf("문자열 string: %s\n",string);
		printf("문자열 pstr: %\n",pstr); 

		free(pstr);

	} while (1);
}
*/

// 76) 문자열을 형식화하기 (sprintf)
/*
void main(void)
{
	char cValue = 'a';
	int iValue = 1234567;
	long lValue = 7890123;
	float fValue = 3.141592;
	double dValue = 3.141592;
	char* string = "korea";
	char buffer[100];

	sprintf(buffer, "char형은 %c", cValue); //buffer에 해당 문자열을 저장
	puts(buffer);

	sprintf(buffer, "int형은 %d", iValue);
	puts(buffer);

	sprintf(buffer, "long형은 %ld", lValue);
	puts(buffer);

	sprintf(buffer, "float형은 %f", fValue);
	puts(buffer);

	sprintf(buffer, "double형은 %e", dValue);
	puts(buffer);

	sprintf(buffer, "char*형은 %s", string); //string은 비어있음
	puts(buffer);
}
*/

// 77) 문자열을 정수로 변환하기 1(atoi)
/*
void main(void)
{
	int count;
	int total = 0;
	char string[100];

	for (count = 1; count <= 3; count++) // 3번 반복
	{
		printf("%d번째 문자열을 입력한 후 Enter키를 누르세요.\n", count);
		gets(string); // 입력 받고
		total += atoi(string); // string을 정수 값으로 변환

		printf("입력 값 = %d, 총 합 = %d \n", atoi(string), total); //누적되는 거 계속 보여줌
	}

	printf("입은 문자열의 총 합은 %d입니다. \n", total); 
	
}
*/

// 78) 문자열을 정수로 변환하기 2(atol)
/*
void main(void)
{
	char* string1 = "2는 1보다 큽니다.";
	char* string2 = "1004는 천사입니다.";
	char* string3 = "2016년도 입니다.";
	char* string4 = "오늘은 6월 9일 입니다.";
	long t1, t2, t3, t4;

	puts(string1);
	puts(string2);
	puts(string3);
	puts(string4);

	t1 = atol(string1);
	t2 = atol(string2);
	t3 = atol(string3);
	t4 = atol(string4);
	//long형의 숫자로 전환

	printf("문자열을 숫자로 변환한 값: %ld, %ld, %ld, %ld\n", t1, t2, t3, t4);
	printf("총 합은 %d입니다.\n", t1 + t2 + t3 + t4);

}
*/

// 79) 문자열을 정수로 변환하기 3(strtol)
/*
void main(void)
{
	char* string = "0xFF"; //16진수일 때
	char* stop;
	int radix;
	long value;

	radix = 16; //6진수? 이렇게도 되려나

	value = strtol(string, &stop, radix); // stop은 멈출 곳의 주소
	// string을 읽어서 숫자를 radix진수로 변환하고
	// 변환하다 멈춘 곳의 주소를 stop에 저장
	// 변환한 값은 value에 저장

	printf("%d개의 문자가 변환되었습니다.\n", stop - string); // stop은 문자열을 숫자로 변환하다 멈춰진 위치
	// stop-string이면 멈춘 곳의 주소에서 첫 번째 요소를 뺀 값이므로 멈춘 요소의 위치를 알 수 있음

	printf("16진수 %s를 숫자로 변환하면 %d입니다.\n", string, value); // ld형으로 표현했기 때문에 10진수로 나옴
}
*/

// 80) 문자열을 정수로 변환하기 4(stroul) string to unsigned long
/*
void main(void)
{
	char* string = "11000";
	char* stop;
	int radix;
	unsigned long value; 

	radix = 2;// 이진수 정수로 출력
	value = strtoul(string, &stop, radix);

	printf("%d 개의 문자가 변환되었습니다.\n", stop - string); //
	printf("2진수 %s를 숫자로 변환하면, %d입니다.\n", string, value);
}
*/

// 81) 문자열을 실수로 반환하기 1(atof)
/*
void main(void)
{
	char* str1 = "2.1은 1.0보다 큽니다.";
	char* str2 = "1004.5도는 천사.오 입니다";
	char* str3 = "2005년도 입니다.";
	char* str4 = "오늘은 6월 9일 입니다.";
	double t1, t2, t3, t4;

	puts(str1);
	puts(str2);
	puts(str3);
	puts(str4);

	t1 = atof(str1); // 숫자만 추출해서 저장(아마 첫번째 숫자만..
	t2 = atof(str2);
	t3 = atof(str3);
	t4 = atof(str4);

	printf("문자열을 숫자로 변환한 값: %.1f, %.1f, %.1f, %.1f\n", t1, t2, t3, t4);
	printf("총 합은 %.2f 입니다.\n", t1 + t2 + t3 + t4);

}
*/

// 82) 문자열을 실수로 반환하기 2(strtod) string to double
/*
void main(void)
{
	char* string = "1.234E-10";
	char* stop;
	double value;

	value = strtod(string, &stop); //string에서 숫자를 추출하고, 그 주소를 stop에 저장 (숫자의 위치)
	// 변환값은 value에 저장
	printf("%d개의 문자가 변환되었습니다.\n", stop - string);
	printf("문자열 [%s]를 숫자로 변환하면 %e입니다.\n", string, value); //e가 뭔지 알았군..
	
}
*/

// 83) 정수를 문자열로 변환하기 1(itoa)
/*
void main(void)
{
	int value;
	char string[100];
	int radix;

	radix = 2; // 10진수
	value = 5;

	_itoa(value, string, radix);
	printf("변환된 문자열은 %s입니다.\n", string);

	value = -12345;
	_itoa(value, string, radix);
	printf("변환된 문자열은 %s입니다.\n", string);

}
*/


// 84) 정수를 문자열로 변환하기 2(ltoa) long to 'a'
/*
void main(void)
{
	long value;
	char string[100];
	int radix;

	radix = 2; 

	value = 12345;
	_ltoa(value, string, radix);
	printf("변환될 문자열은 %s 입니다.\n", string);

	value = -12345;
	_ltoa(value, string, radix);
	printf("변환될 문자열은 %s 입니다.\n", string);
}
*/

// 85) 정수를 문자열로 변환하기 3(_ultoa) unsigned long to 'a'
/*
void main(void)
{
	unsigned value;
	char string[100];
	int radix;

	radix = 16; // 16진수

	value = 34567;
	_ultoa(value, string, radix);
	printf("변환된 문자열은 %s입니다.\n", string);

	value = 123457890;
	_ultoa(value, string, radix);
	printf("변환된 문자열은 %s입니다.\n", string);

}
*/

// 86) 실수를 문자열로 변환하기 1(fcvt)
/*
void main(void)
{
	double value;
	char* pstr;
	int dec, sign;

	value = 3.1415926535;
	pstr = _fcvt(value, 6, &dec, &sign);
	printf("변환된 문자열은 %s입니다.\n", pstr);
	printf("소수점의 위치는 %d, 부호는 %d입니다.\n", dec, sign);

	value = -3.1415926535;
	pstr = _fcvt(value, 6, &dec, &sign);
	printf("변환된 문자열은 %s입니다.\n", pstr);
	printf("소수점의 위치는 %d, 부호는 %d입니다.\n", dec, sign);

}
*/ 
//

// 87) 실수를 문자열로 변환하기 2(evct)
/*
void main(void)
{
	double value;
	char* pstr;
	int dec, sign;

	value = 3.14e10;
	pstr = _ecvt(value,3, &dec, &sign);
	printf("변환된 문자열은 %s입니다.\n", pstr);
	printf("소수점의 위치는 %d, 부호는 %d입니다.\n", dec, sign);

	value = -3.14e10;
	pstr = _ecvt(value,3, &dec, &sign);
	printf("변환된 문자열은 %s입니다.\n", pstr);
	printf("소수점의 위치는 %d, 부호는 %d입니다.\n", dec, sign);

}
*/

// 88) 실수를 문자열로 반환하기 3(gcvt)
/*
void main(void)
{
	double value;
	char buffer[100];

	value = 3.14e10;
	_gcvt(value, 3, buffer);

	printf("변환된 문자열은 %s입니다.\n", buffer);

	value = -3.14e10;
	_gcvt(value, 3, buffer);

	printf("변환된 문자열은 %s입니다.\n", buffer);
}
*/

// 89) 문자가 알파벳인지 검사하기 (isalpha)
/*
#include <ctype.h>

void main(void)
{
	char* string = "Cat 1 Car 2 Cow 3,...";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string) // string이 0이 되면 false가 되면서 멈춤
	{
		if (isalpha(*string)) // 알파벳이면 1반환
		{
			buffer[cnt++] = *string; // 버퍼에 string의 요소 저장
		}
		string++; // string의 주소를 증가시켜서 다음 요소로 넘어감
	}

	puts(buffer);

}
*/

// 90) 문자가 숫자인지 검사하기 (isdigit)
/*
void main(void)
{
	char* string = "Cat1 Car2 Cow3";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string) // string이 NULL이 아닐 동아 
	{
		if (isdigit(*string))//숫일 경우에만. (내부적으로 atoi함수 등을 사용해서 결과값이 !=0 이면 참을 반환하는 듯?
			buffer[cnt++] = *string; // buffer에 해당 문자를 저장

		string++; // string의 주소를 다음 번지로 옮겨서 문자열의 다음 요소로 넘어감
	}


	puts(buffer);
	
}
*/

// 91) 문자가 알파벳 또는 숫자인지 검사하기 (isalnum)
/*
void main(void) {
	char* string = "Cat 1 Car2 Cow 3, ...";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string)
	{
		if (isalnum(*string))
		{
			buffer[cnt++] = *string;
		}
		string++; // 다음 요소로 넘어가도록 하는 구문은 조건문 밖에 있어야 함
	}

	puts(buffer);
}
*/

// 92) 문자가 대문자인지 검사하기 (isupper)
/*
void main(void)
{
	char* string = "This is Korea!";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string)
	{
		if (isupper(*string))
			buffer[cnt++] = *string;

		string++;
	}

	puts(buffer); //출력을 안 하면...당연히 안 나오겠지...? 바보야
}
*/

// 93) 문자가 소문자인지 검사하기 (islower)
/*
void main(void)
{
	char* string = "This is Korea!";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string)
	{
		if (islower(*string))
			buffer[cnt++] = *string;

		string++;
	}

	puts(buffer);
}
*/

// 94) 문자가 공백, 탭문자 또는 개행문자인지 검사하기 (isspace)
/*
void main(void)
{
	char* string = "This is Korea";
	int cnt = 0;

	while (*string) //string의 요소가 NULL이 아닐 때 (즉, 문자열의 끝까지)
	{
		if (isspace(*string))
			cnt++; // 공백의 개수만 구함

		string++;
	}

	//puts(cnt); // puts는 "문자열" 형태만 출력할 수 있음. 정수인 cnt는 출력 불가능.
	printf("공백, 탭 그리고 개행문자의 수는 %d입니다.\n", cnt);
}
*/

// 95) 문자열에서 앞, 뒤 2바이트씩 교환하기 (swab)
/*
void main(void)
{
	char string1[] = "1a2b3c4d5e";
	char string2[] = "............";

	puts(string1);
	puts(string2);

	_swab(string1, string2, sizeof(string1) - 1);// 마지막은 인덱스? 위치? 횟수?
		// 바꿀 문자, 바뀔 문자, 바뀔 문자 수

	puts(string1);
	puts(string2);
}
*/

// 96) 메모리 할당하기 (malloc)
/*
#define MEMORY "MEMORY"

void main(void)
{
	char* pmem;

	pmem = malloc(100); // 크기 char * 100짜리 메모리를 할당하고 그 주소를 pnem에 반환

	if (pmem == NULL)
	{
		puts("메모리를 할당할 수 없습니다."); // 메모리가 할당되지 않았다면 주소가 반환되지 않고, 그렇게 되면 pmem은 NULL로 남게 됨
	}
	else
	{
		strcpy(pmem, MEMORY); // 정상적으로 메모리가 할당 되었다면, MEMORY 복사해서 저장하기
		puts(pmem); // puts에는 주소를 던져주면 문자열을 출력함
	}

	free(pmem);
}
*/

// 97) 메모리를 블록 단위로 할당하기 (calloc)
/*
void main(void)
{
	char* pmem;
	printf("sizeof(int)의 길이는 %d입니다\n", sizeof(int));

	pmem = calloc(100, sizeof(int));// int 크기의 블록을 100개 할당 (배열?)

	if (pmem == NULL)
	{
		puts("메모리를 할당할 수 없습니다.");
	}
	else 
	{
		puts("정수형 변수 100개를 저장할 버퍼가 할당되었습니다.");
	}

	free(pmem);
}
*/

// 98) 메모리 해제하기 (free)
/*
#define MEGA 1024 * 1024

void main(void)
{
	int i;
	char* pmem;

	for (i = 0; i < 10; i++) // 10번 반복
	{
		pmem = malloc(MEGA); // MEGA만큼의 크기의 메모리를 할당

		if (pmem==NULL)
		{
			puts("메모리를 할당할 수 없습니다.");
		}
		else
		{
			puts("메모리를 1MB 할당하였습니다.");
		}

		free(pmem);
		puts("메모리를 해제하였습니다.");
	}
}
*/

// 99) 메모리 재할당하기 (realloc)
/*
void main(void)
{
	char* pmem;

	pmem = malloc(100);

	if (pmem == NULL)
	{
		puts("메모리를 할당할 수 없습니다.");
	}
	else
	{
		printf("할당된 메모리 길이는 %d 바이트입니다.\n", _msize(pmem)); //msize는 메모리의 크기를 알려줌..?

		pmem = realloc(pmem, 200); // pmem의 크기를 100 -> 200 으로 재설정
		
		if (pmem==NULL)
		{
			puts("메모리를 재할당할 수 없습니다.");

		}
		else
		{
			printf("재할당된 메모리 길이는 %d 바이트입니다.\n", _msize(pmem));
		}
	}

	free(pmem);
}
*/

// 100) 메모리 복사하기 (memcpy)
/*
struct tagM1
{
	int x, y;
	char buffer[30];
};

void main(void)
{
	struct tagM1 x1, x2;

	x1.x = 5;
	x1.y = 10;
	strcpy(x1.buffer, "memory copy");

	memcpy(&x2, &x1, sizeof(x1)); // 구조체를 통째로 복사

	puts(x2.buffer);

}
*/
 
// 101 메모리 비교하기 (memcmp)
/*
void main(void)
{
	char s1[100] = "123";
	char s2[100] = "123";

	strcpy(&s1[4],"abc");
	strcpy(&s2[4],"efg");

	if (strcmp(s1, s2) == 0)
	{
		puts("strcmp: 버퍼의 값이 일치합니다.");
	}
	if (memcmp(s1, s2, 7) == 0)
	{
		puts("memcmp: 버퍼의 값이 일치합니다.");
	}
	else
	{
		puts("memcmp: 버퍼의 값이 일치하지 않습니다.");
	}
}
*/

// 102) 메모리 이동하기 (memmove)
/*

char s1[20] = "1234567890";
char s2[20] = "1234567890";

void main(void)
{
	puts(s1);
	memcpy(s1 + 4, s1 + 2, 5); //s1+4번지에 s1+2번지를 5바이트만큼 복사
	puts(s1);

	puts(s2);
	memmove(s2 + 4, s2 + 2, 5); // memmove 함수는 5바이트를 뒤
	puts(s2);
}
*/

// 103) 메모리 채우기 (memset)
/*
void main(void)
{
	char string[50] = "아름다운 우리나라 대한민국";

	puts(string);

	memset(string, (int)NULL, sizeof(string)); // 메모리 채우기
	// string을 , (int)NULL로, string의 크기만큼 채우기

	memset(string, '*', sizeof(string)-1); // 끝까지 다 채워버리면 \0(NULL) 문자가 사라져서 문자열의 끝이 안 맺어짐. 따라서 그 뒤의 이상한 쓰레기값도 함께 출력됨.
	// * 49개 출력

	puts(string);
}
*/

// 104) 메모리를 복사하는 함수 만들기
/*

struct tagM1
{
	int x, y;
	char buffer[30];
};

void* My_memcpy(void* dest, const void* src, unsigned int count);// void포인터. 주소만 받고 값에 접근은 불가.

void main(void)
{
	struct tagM1 x1, x2;
	x1.x = 5;
	x1.y = 10;
	strcpy(x1.buffer, "memory copy");

	My_memcpy(&x2, &x1, sizeof(x1)); //저장할 버퍼, 저장할 데이터, 저장 크기

	puts(x2.buffer);
}
void* My_memcpy(void* dest, const void* src, unsigned int count)
{
	void* ret = dest; // return에 dest 주소를 넣음. 이번 호출에는 &x2
	
	while (count--) //count가 참일 동안. 연산 후 1 감소.
	{
		//void*형 을 char*형으로 형 변환(캐스트 연산자)
		*(char*)dest = *(char*)src; // 문자형 포인터에 가리키는 값을 다른 문자형 포인터가 가리키는 값으로 변경
		dest = (char*)dest + 1;  // 왜 앞에는 안 쓰고..? 기존의 포인터에다가 저장을 하는가봉가
		src = (char*)src + 1;
	}
	return ret;
}
*/

// 105) 메모리를 이동하는 함수 만들기
/*

char s[20] = "1234567890";

void* My_memmove(void* dst, const void* src, unsigned int count);

void main(void)
{
	puts(s);
	My_memmove(s + 4, s + 2, 6); //s의 4번째 요소에 s의 2번째 요소부터 6바이트를 이동시키기
	puts(s);
}

void* My_memmove(void* dst, const void* src, unsigned int count)
{
	void* ret = dst;

	if (dst<=src || (char*)dst >= ((char*)src + count)) 
	{
		// 만약 첫 번째 주소가 (복사되어야 할 위치) 두번째 주소(복사할 데이터를 가져올 위치)와 같거나 작다면
		// 또는 첫 번째 주소(char*변형)두번째 주소부터 옮길 데이터의 크기를 더한 것 보다 크거나 같다면

		while (count--)//가져올 데이터의 개수만큼
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1; //뒤에서부터 복사
			src = (char*)dst + 1; // 여기에는 왜 형 변환이 들어가지? 주소 저장은 상관 없지 않나..?
				//src의 주소에 src에서 1을 뺀 주소를 다시 저장
		}
	}
	else
	{
		dst = (char*)dst + count - 1;
		src = (char*)src + count - 1;

		while (count--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst - 1;
			src = (char*)src - 1;
		}
	}

	return ret;
}
*/

// 106) 포인터 사용하기
/*
void main(void)
{
	char* p_char;
	short* p_short;
	int* p_int;
	long* p_long;
	float* p_float;
	double* p_double;

	printf("문자형의 크기: %d 바이트\n", sizeof(char));
	printf("정수형의 크기: %d 바이트\n", sizeof(short));
	printf("정수형의 크기: %d 바이트\n", sizeof(int));
	printf("정수형의 크기: %d 바이트\n", sizeof(long));
	printf("실수형의 크기: %d 바이트\n", sizeof(float));
	printf("실수형의 크기: %d 바이트\n", sizeof(double));
	printf("\n");

	printf("문자형 포인터의 크기: %d 바이트\n", sizeof(p_char));
	printf("정수형 포인터의 크기: %d 바이트\n", sizeof(p_short));
	printf("정수형 포인터의 크기: %d 바이트\n", sizeof(p_int));
	printf("정수형 포인터의 크기: %d 바이트\n", sizeof(p_long));
	printf("실수형 포인터의 크기: %d 바이트\n", sizeof(p_float));
	printf("실수형 포인터의 크기: %d 바이트\n", sizeof(p_double));
}
*/

// 107) 포인터를 함수에서 사용하기
/*
void change_x1(int x1);
void change_x2(int* x2);

void main(void)
{
	int x;

	x = 5;
	printf("함수를 호출하기 전 x값: %d\n", x);

	change_x1(x);
	printf("change_x1()함수를 호출한 후의 x값: %d\n", x); //x를 포인터로 전달하여 실질적인 값을 바꿔야 함

	change_x2(&x);
	printf("change_x2()함수를 호출한 후의 x값: %d\n", x); //x를 포인터로 전달하여 실질적인 값을 바꿔야 함
}

void change_x1(int x1)
{
	x1 = 50;
}

void change_x2(int* x2)
{
	*x2 = 100; //포인터로 받기 때문에 실제 x의 주소에 접근하여 값을 변경하게 됨
}
*/

// 108) 포인터 배열 사용하기
/*
void main(void)
{
	int x = 0, y = 0;
	int* pxy[2]; // 포인터로 이루어진 배열

	pxy[0] = &x;
	pxy[1] = &y;

	*pxy[0] = 5;
	*pxy[1] = 10;

	printf("x = %d, pxy[0] = %d \n", x, *pxy[0]);
	printf("y = %d, pxy[0] = %d \n", y, *pxy[1]);

	printf("x + y = %d \n", x + y);
	printf("*xy[0] + *xy[1] = %d\n", *pxy[0] + *pxy[1]);
}
*/

// 109) 포인터 배열을 함수에서 사용하기
/*
void print_pxy(int* pxy[2]);

void main(void)
{
	int x = 0, y = 0;
	int* pxy[2];

	pxy[0] = &x;
	pxy[1] = &y;

	*pxy[0] = 5;
	*pxy[1] = 10;

	print_pxy(pxy); //배열 이름은 그 자체로 주소이기 때문에 통째로 넘기면 됨. 그리고 포인터 배열 형으로 인자가 형식이 같기 때문에 오류 X
}

void print_pxy(int* pxy[2])
{
	printf("pxy[0] = %d\n", *pxy[0]);
	printf("pxy[1] = %d\n", *pxy[1]);
}
*/

// 110) 1차원 배열 사용하기
/*
void main(void)
{
	char one[10] = "Koxea";

	puts(one);
	one[2] = 'r'; // 배열 요소에 따로 접근해서 조작 가능 (문자열 상수와 다른 점(?))
	puts(one);

	printf("one[0] = %3d, %c\n", one[0], one[0]);
	printf("one[1] = %3d, %c\n", one[1], one[1]);
	printf("one[2] = %3d, %c\n", one[2], one[2]);
	printf("one[3] = %3d, %c\n", one[3], one[3]);
	printf("one[4] = %3d, %c\n", one[4], one[4]);
	printf("one[5] = %3d, %c\n", one[5], one[5]);

}
*/

// 111) 1차원 배열의 포인터 사용하기
/*
void main(void)
{
	char one[] = "Korea";
	char* pone;

	pone = one; // 배열의 이름이 곧 주소. pone은 one이라는 배열을 가리키게 된다.

	puts(one);
	puts(pone);

	strcpy(pone, "Japan"); //pone도 문자열 배열으 주소이므로 사용 가능
	// 크기가 Korea보다 큰 값은 넣을 수 없음. 처음 문자열에 맞춰서 데이터 크기를 초기화했기 때문.

	puts(one);
	puts(pone);
	// 둘 다 같은 메모리를 가리키고 있기 때문에 하나만 바꿔도 값이 같이 변경됨
}
*/

// 112) 1차원 배열을 함수에서 사용하기
/*
void print_one(char* pone);
void print_one2(char one[]); // 포인터라 아니라 배열을 통째로 복사해 옴.

void main(void)
{
	char one[] = "Korea"; // 크기 6으로 초기화. 마지막 인덱스는 6이고 \0값

	print_one(one);
	print_one2(one);
}

void print_one(char* pone)
{
	puts(pone);
}

void print_one2(char one[])
{
	puts(one);
}
*/

// 113) 2차원 배열 사용하기
/*
void main(void)
{
	int i;
	int jumsu[100][3];
	int total[3] = { 0, };

	for (i = 0; i < 100; i++)
	{
		jumsu[i][0] = 92; // 0은 국어 점수
		jumsu[i][1] = 90; // 1은 영어 점수
		jumsu[i][2] = 95; // 2는 수학 점수
	}

	for (i = 0; i < 100; i++)
	{
		total[0] += jumsu[i][0]; // 국어 점수 총합
		total[1] += jumsu[i][1]; // 영어 점수 총합
		total[2] += jumsu[i][2]; // 수학 점수 총합
	}

	printf("국어 점수의 총점: %d\n", total[0]);
	printf("영어 점수의 총점: %d\n", total[1]);
	printf("수학 점수의 총점: %d\n", total[2]);
}

*/

// 114) 2차원 배열의 포인터 사용하기
/*
void main(void)
{
	int i;
	int jumsu[100][3];
	int total[3] = { 0, };
	int(*pjumsu)[3]; // 2차원 배열 포인터

	pjumsu = jumsu;

	for (i = 0; i < 100; i++)
	{
		pjumsu[i][0] = 92; // 0은 국어 점수
		pjumsu[i][1] = 90; // 1은 영어 점수
		pjumsu[i][2] = 95; // 2는 수학 점수
	}

	for (i = 0; i < 100; i++)
	{
		total[0] += pjumsu[i][0]; // 국어 점수 총합
		total[1] += pjumsu[i][1]; // 영어 점수 총합
		total[2] += pjumsu[i][2]; // 수학 점수 총합
	}

	printf("국어 점수의 총점: %d\n", total[0]);
	printf("영어 점수의 총점: %d\n", total[1]);
	printf("수학 점수의 총점: %d\n", total[2]);
}
*/

// 115) 2차원 배열을 함수에서 사용하기
/*
void calc(int(*pjumsu)[3], int* ptotal);

void main(void)
{
	// 2차원 배열
	// 배열 포인터
	// total을 저장할 정수형 배열 (과목이 3개이기 때문에 배열로 설정)
	 
	int jumsu[100][3];
	int total[3] = { 0, };
	int(*pjumsu)[3];

	pjumsu = jumsu;

	calc(pjumsu, total); //둘 다 주소값이므로 이렇게 인자를 전달

	printf("국어 점수의 총점: %d\n", total[0]);
	printf("영어 점수의 총점: %d\n", total[1]);
	printf("수학 점수의 총점: %d\n", total[2]);
}

void calc(int(*pjumsu)[3], int* ptotal)
{
	int i;

	for (i = 0; i < 100; i++) // i가 0부터 99일 때 까지
	{
		pjumsu[i][0] = 92;
		ptotal[0] += pjumsu[i][0];

		pjumsu[i][1] = 90;
		ptotal[1] += pjumsu[i][1];

		pjumsu[i][2] = 95;
		ptotal[2] += pjumsu[i][2];

	}
}
*/

// 116) 3차원 배열 사용하기
/*
void main(void)
{
	int i, j;
	int jumsu[10][30][3];
	int total[3] = { 0, };

	for (i = 0; i < 10; i++) // 10
	{
		for (j = 0; j < 30; j++)
		{
			jumsu[i][j][0] = 92;
			total[0] += jumsu[i][j][0];

			jumsu[i][j][1] = 90;
			total[1] += jumsu[i][j][1];

			jumsu[i][j][2] = 95; // 모두가 같은 점수
			total[2] += jumsu[i][j][2];
		}
	}

	printf("모든 반의 국어 점수의 총점: %d\n", total[0]);
	printf("모든 반의 영어 점수의 총점: %d\n", total[1]);
	printf("모든 반의 수학 점수의 총점: %d\n", total[2]);
}
*/

// 117) 3차원 배열의 포인터 사용하기
/*
void main(void)
{
	int i, j;
	int jumsu[10][100][3];
	int total[3] = { 0, };
	int(*pjumsu)[100][3];

	pjumsu = jumsu;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 100; j++) 
		{
			pjumsu[i][j][0] = 92;
			total[0] += pjumsu[i][j][0];

			pjumsu[i][j][1] = 90;
			total[1] += pjumsu[i][j][1];

			pjumsu[i][j][2] = 95;
			total[2] += pjumsu[i][j][2];

		}
	}

	printf("모든 반의 국어 점수의 총점: %d\n", total[0]);
	printf("모든 반의 영어 점수의 총점: %d\n", total[1]);
	printf("모든 반의 수학 점수의 총점: %d\n", total[2]);
}
*/

// 118) 3차원 배열을 함수에서 사용하기
/*

void calc(int(*psumsu)[100][3], int* ptotal);

void main(void)
{
	int jumsu[10][100][3];
	int total[3] = { 0, }; //total 초기화 안 하면 쓰레기값이 채워져 있음

	calc(jumsu, total);

	printf("모든 반의 국어 점수의 총점: %d\n", total[0]);
	printf("모든 반의 영어 점수의 총점: %d\n", total[1]);
	printf("모든 반의 수학 점수의 총점: %d\n", total[2]);

}
void calc(int(*pjumsu)[100][3], int* ptotal)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 100; j++)
		{
			pjumsu[i][j][0] = 92;
			ptotal[0] += pjumsu[i][j][0];

			pjumsu[i][j][1] = 90;
			ptotal[1] += pjumsu[i][j][1];

			pjumsu[i][j][2] = 95;
			ptotal[2] += pjumsu[i][j][2];

		}
	}
}
*/

// 119) 구조체 사용하기
/*

struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad;

	strcpy(ad.name, "홍길동");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "서울시 양천구 목동아파트 13단지");

	printf("이름: %s\n", ad.name);
	printf("전화: %s\n", ad.phone);
	printf("주소: %s\n", ad.address);
}

*/

// 120) 구조체 포인터 사용하기
/*
struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad;
	struct tagAddress* pad; //타입 + 포인터

	pad = &ad; // pad에는 ad의 주소 저장 

	strcpy((*pad).name, "홍길동"); //배열은 상수이기 때문에 새로운 값 대입이 불가능?
	strcpy((*pad).phone, "02-1234-5678");
	strcpy((*pad).address, "경기도 광명시 하안주공 5단지");


	printf("이름: %s\n", pad->name);
	printf("전화: %s\n", pad->phone);
	printf("주소: %s\n", pad->address);

}
*/

// 121) 구조체를 함수에서 사용하기
/*
void print(struct tadAddress* pad);// 구조체 포인터를 매개변수로 하는 함수

struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad;

	strcpy(ad.name, "홍길동");
	strcpy(ad.phone, "010-1234-5678");
	strcpy(ad.address, "경기도 광명시 하안동");

	print(&ad);// 구조체는 배열이 아니기 때문에 주소연산자 사용
}

void print(struct tagAddress* pad)
{
	printf("이름: %s\n", pad->name);
	printf("전화: %s\n", pad->phone);
	printf("주소: %s\n", pad->address);
}
*/


// 122) 구조체 배열 사용하기
/*
struct tagAddress
{
	char name[20];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad[3]; // 그냥 대괄호와 사이즈만 추가해주면 됨
	int i;

	for (i = 0; i < 3; i++)
	{
		sprintf(ad[i].name, "홍길동 %d", i+1);//저장하는 함수
		strcpy(ad[i].phone, "010-1234-5678");
		strcpy(ad[i].address, "경기도 광명시");
	}

	for (i = 0; i < 3; i++)
	{
		printf("이름: %s\n", ad[i].name);
		printf("전화: %s\n", ad[i].phone);
		printf("주소: %s\n", ad[i].address);
		printf("\n");
	}
}
*/

// 123) 구조체 배열 포인터 사용하기
// 구조체의 2차원, 3차원 배열은?
/*
struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad[3];
	struct tagAddress* pad;
	int i;

	pad = ad; // 배열이므로 주소연산자 X

	for (i = 0; i < 3; i++)
	{
		sprintf(pad[i].name, "홍길동 %d", i + 1);//저장하는 함수
		strcpy(pad[i].phone, "010-1234-5678");
		strcpy(pad[i].address, "경기도 광명시");
	}
	// 배열은 *연산자 필요X

	for (i = 0; i < 3; i++)
	{
		printf("이름: %s\n", pad[i].name);
		printf("전화: %s\n", pad[i].phone);
		printf("주소: %s\n", pad[i].address);
		printf("\n");
	}
}
*/

// 124) 구조체 배열을 함수에서 사용하기
//오류남
/*
struct tagAddress
{
	char name[30];
	char phone[30];
	char address[100];
};

void print(struct tagAddress* pad);// 그냥 구조체 포인터를 사용해도 됨

void main(void)
{
	struct tagAddress ad[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		sprintf(ad[i].name, "홍길동 %d", i+1);
		strcpy(ad[i].phone, "010-5693-8006");
		strcpy(ad[i].address, "경기도 광명시");
	} // 3번 반복

	print(&ad);
}

void print(struct tagAddress *pad)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		print("이름: %s\n", pad[i].name);
		print("전화: %s\n", pad[i].phone);
		print("주소: %s\n", pad[i].address);
	}
}
*/


// 125) 구조체의 길이를 구하고 초기화하기
/*
struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

typedef struct tagAddress addr;

void main(void)
{
	addr ad;
	int len;

	len = sizeof(addr);

	printf("구조체 addr의 크기: %d\n", len); // 30+20+100의 값. 구조체 내의 모든 메모리 공간의 합.

	memset(&ad, 0, len); 
	// 구조체 초기화 시에는 memset을 쓰면 된다
}
*/

// 126) 공용체 사용하기
/*
typedef union tagVariable
{
	int i;
	double d;
} VA;

void main(void)
{
	VA va;

	va.i = 5;

	printf("va.i 공용체의 값: %d\n", va.i);

	va.d = 3.14; // 공용체에 저장된 값 새로 초기화

	printf("va.d 공용체의 값: %f\n", va.d);
	printf("va.i 공용체의 값: %d\n", va.i);
}
*/

// 127) 공용체를 함수에서 사용하기
/*
typedef union tagVariable
{
	int i;
	double d;
}VA;

void print(VA* pva);

void main(void)
{
	VA va;

	print(&va); // 공용체도 변수처럼 주소로 넘겨줌
}

void print(VA* pva)
{
	pva->i = 5; //배열이 아니기 때문에 접근 연산자가 필요함
	printf("pva->i 공용체의 값: %d\n", pva->i);
	printf("\n");
	pva->d = 3.14;
	printf("pva->d 공용체의 값: %f\n", pva->d);
	printf("pva->i 공용체의 값: %d\n", pva->i);
}
*/

// 128) void형 포인터 사용하기
/*
void main(void)
{
	int i;
	double d = 3.14;

	int* pi;
	double* pd;
	void* pv;

	pi = &i;
	pd = &d;
	pi = &d;
	pv = &i;
	pv = &d;

	printf("실수 값 d: %f\n", *(double*)pv);

}
*/

// 129) void형 포인터를 함수에서 사용하기
/*
typedef struct tagPoint
{
	int x;
	int y;
}point;

void My_memset(void* dest, int c, unsigned count);

void main(void)
{
	point pt = { 5,10 };
	char array[10];

	printf("x,y: %d, %d\n", pt.x, pt.y);

	My_memset(&pt, 0, sizeof(pt)); //void 포인터를 사용하였으니 함수 내 연산 시 캐스트 연산자를 사용해야 함
	
	printf("x,y: %d, %d\n", pt.x, pt.y);

	My_memset(array, 65, sizeof(array));


	printf("array[0]~arra[9]: %c ~ %c\n", array[0], array[9]);


}


void My_memset(void* dest, int c, unsigned count)
{
	while (count--) //데이터의 크기만큼
	{
		*(char*)dest = c; //c를 넣기 위해 char형으로 변환?
		dest = (char*)dest + 1; // 주소 1증가

	}
}
*/

// 130) 포인터의 포인터 사용하기
// 오류남
/*
void main(void)
{
	char* animal[3]; // 포인터 배열?
	char** ppanimal;

	animal[0] = "호랑이";//문자열은 상수의 주소 표현이기 때문에 배열 포인터에 저장해야 함 
	animal[2] = "사자";
	animal[2] = "토끼";

	ppanimal = animal;

	puts(animal[0]);
	puts(ppanimal[1]);
	puts(ppanimal[2]);
}
*/

// 131) 포인터의 포인터를 함수에서 사용하기
/*
void print(char** ppanimal);

void main(void)
{
	char* animal[3];

	animal[0] = "호랑이";
	animal[1] = "사자";
	animal[2] = "토끼";

	print(animal);
}


void print(char** ppanimal) // 포인터 배열의 주소를 받는 포인터. 포인터의 포인터.
{
	puts(ppanimal[0]);
	puts(ppanimal[1]);
	puts(ppanimal[2]);
	// 여긴 또 왜 돼..?
}
*/

// 132) 함수 포인터 사용하기
/*
void main(void)
{
	int (*myfunc)(const char*);
	// const char*타입의 인자를 가지는 myfunc이라는 이름의 함수...형식의 포인터

	myfunc = puts; // 함수 포인터에 puts함수 저장

	puts("올챙이");
	myfunc("올챙이");

	myfunc = strlen;
	printf("문자열의 길이: %d", strlen("apple"));
	printf("문자열의 길이: %d", myfunc("apple"));
}
*/

// 133) 함수 포인터를 배열에서 사용하기
/*
void main(void)
{
	int (*myfunc[3])(const char*); //함수 포인터 배열

	myfunc[0] = puts;
	myfunc[1] = strlen;
	myfunc[2] = myfunc[1]; //strlen

	puts("올챙이");
	myfunc[0]("올챙이");

	printf("문자열의 길이: %d\n", strlen("apple"));
	printf("문자열의 길이: %d\n", myfunc[1]("apple"));
	printf("문자열의 길이: %d\n", myfunc[2]("apple"));
}
*/

// 134) 함수 포인터를 함수에서 사용하기
/*
void print1(int (*X)(const char*));
void print2(int (*X[2])(const char*)); //인자로 문자열 상수

void main(void)
{
	int (*myfunc[2])(const char*);

	myfunc[0] = puts;
	myfunc[1] = strlen;

	print1(myfunc[0]);
	print2(myfunc);

}


void print1(int (*X)(const char*))
{
	X("올챙이");
}
void print2(int (*X[2])(const char*))
{
	X[0]("뒷다리");
	printf("문자열의 길이: %d\n", X[1]("apple"));
}
*/

// 135) main() 함수 원형 사용하기
/*
int main(int argc, int *argv[]) // 정수 한 개와 문자열 배열 한 개를 받아서
{
	int i;
	printf("인수의 수: %d\n", argc);  // 정수를 출력하고

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]); // 문자열 배열을 인덱스가 끝날 때 까지 순서대로 출력
	}
}

*/

// 136) 파일 생성하기 (fopen)
/*
void main(void)
{
	FILE* file; //FILE 구조체형 변수 file 선언

	file = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+"); // 쓰기 모드로 파일 생성

	if (file == NULL) // 생성한 뒤에도 파일이 없다면
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		puts("파일이 정상적으로 생성되었습니다.");
		fclose(file);
	}
}
*/

// 137) 파일에 한 문자 쓰기 (fputc)
/*

void main(void)
{
	FILE* fp; // file pointer

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");  // write버전에서는 경로에 파일이 있으면 열고, 없으면 생성함

	if (fp==NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fputc('A', fp);
		puts("문자 'A'를 파일에 저장하였습니다.");
		fclose(fp);
	}
}
*/


// 138) 파일에서 한 문자 읽기 (fgetc)
/*
void main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp==NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		ch = fgetc(fp);
		printf("읽은 문자: %c\n", ch);
		fclose(fp);

	}
}
*/

// 139) 파일에 문자열 쓰기 (fputs)
/*
void main(void)
{
	FILE* fp;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		fputs("대한민국\n", fp);
		fclose(fp);
	}
}
*/

// 140) 파일에서 문자열 읽기 (fgets)
/*
void main(void)
{
	FILE* fp;
	char buffer[100];

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp==NULL)
	{
		puts("파일 열기에 실패하였습니다.");
	}
	else
	{
		fgets(buffer, 100, fp);
		puts(buffer);
		fclose(fp);
	}
}
*/

// 141) 파일에 형식화된 문자열 쓰기 (fprintf)
/*
void main(void)
{
	FILE* fp;
	int i = 12345;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("파일을 열 수 없습니다.");
	}
	else 
	{
		fprintf(fp,"%d\n", i);
		fclose(fp);
	}
	
}
*/

// 142) 파일에서 형식화된 문자열 읽기 (fscanf)
/*
void main(void)
{
	FILE* fp;
	int i;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp==NULL)
	{
		puts("파일을 열 수 없습니다.");
	}
	else
	{
		fscanf(fp, "%d", &i); // 형식화된 문자열 읽기
		printf("i = %d\n", i);
		fclose(fp);
	}
}
*/

// 143) 파일의 버퍼 비우기 (fflush)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("파일 열기 실패");
	}
	else
	{
		fputs("대한민국",fp);
		fflush(fp);
		fclose(fp);
	}
}
*/

// 144) 파일 포인터의 현재 위치 구하기 (ftell)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("File cannot be opened");
	}
	else
	{
		printf("파일 포인터의 위치 : % d\n", ftell(fp));
		fputs("abcde", fp);
		printf("파일 포인터의 위치: %d\n", ftell(fp)); // result should be 5, but returned 0(why?)
		fclose(fp);
	}
}
*/


// 145) 파일 포인터를 처음으로 이동하기 1
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("파일 열기 실패");
	}
	else
	{
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		fputs("abcde", fp);
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		fseek(fp, 3L, SEEK_SET);
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		fclose(fp);
	}
}
*/

// 146) 파일 포인터를 처음으로 이동하기 2(rewind)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("파일을 생성할 수 없습니다.");
	}
	else
	{
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		fputs("abcde", fp);
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		rewind(fp);
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		fclose(fp);
	}
}
*/

// 147) 파일 포인터를 끝으로 이동하기 (fseek)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("파일 열기 실패");
	}
	else
	{
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		fputs("12345", fp);
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		rewind(fp);
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		fseek(fp, 0L, SEEK_END);
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		fclose(fp);

	}
}
*/

// 148) 파일 포인터를 임의의 위치로 이동하기 (fseek)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("파일 열기 실패");
	}
	else
	{
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		fputs("Hello", fp);
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		fseek(fp, 3L, SEEK_CUR);
		printf("파일 포인터의 위치: %d\n", ftell(fp));
	}
}
*/

/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp== NULL)
	{
		puts("파일 열기 실패");
	}
	else
	{
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		fputs("Hello there, this is me speaking.", fp);
		fseek(fp, 0L, SEEK_END);
		fprintf(fp, "I see %d of them", 4); // 커서를 끝에 가져다 두고 다시 적으면 기존 데이터가 지워지지 않는다.
		printf("파일 포인터의 위치: %d\n", ftell(fp));
		
	}
}
*/

// 149) 파일의 길이 구하기 (fseek)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp==NULL)
	{
		puts("파일 열기 실패");
	}
	else
	{
		fseek(fp, 0L, SEEK_END);
		printf("파일의 길이: %d\n", ftell(fp));// 길이: 48
		fclose(fp);
	}
}
*/


// 150) 파일 포인터의 현재 위치 구하기 2 (fgetpos)
/*
void main(void)
{
	FILE* fp;
	fpos_t pos; //fpos_t라는 구조체가 어딘가에 정의되어 있음

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("Failed to open file.");
	}
	else
	{
		fputs("abcde", fp);
		fgetpos(fp, &pos);// fp의 위치를 가져와서 pos에 저장
		printf("location of file pointer: %d\n", pos);
		fclose(fp);
	}

}
*/

/*
void main(void)
{
	FILE* fp;
	fpos_t pos;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("Failed to open file.");
	}
	else
	{
		fputs("Hello, this is Sumin speaking.", fp);
		fgetpos(fp, &pos);
		printf("File pointer location: %d\n", pos);
		rewind(fp);
		fgetpos(fp, &pos);
		printf("File pointer location: %d\n", pos);
		fseek(fp, 4L, SEEK_CUR);
		fgetpos(fp, &pos);
		printf("File pointer location: %d\n", pos);

		fclose(fp);

	}
}
*/

// 151) 파일 포인터의 현재 위치 설정하기 (fsetpos)
/*
void main(void)
{
	FILE* fp;
	fpos_t pos;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	
	fputs("abcde", fp);
	fgetpos(fp, &pos);					
	printf("파일 포인터의 위치: %d\n", pos); // 파일 포인터의 위치: 5
	fsetpos(fp, &pos);						
	printf("파일 포인터의 위치: %d\n", pos);  // 파일 포인터의 위치: 0 // fsedtpos는 0으로 재설정하는 함수?

	fputs("Hello", fp);
	printf("파일 포인터의 위치: %d\n", ftell(fp)); //6 or 5
	rewind(fp);
	printf("파일 포인터의 위치: %d\n", ftell(fp));  //0
	fsetpos(fp, &pos); // 바로 직전의 위치로 돌려줌
	printf("파일 포인터의 위치: %d\n", pos); // ?
	fclose(fp);
}
*/

// 152) 파일 닫기 (fclose)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	fputs("fclose()함수", fp);
	fclose(fp);
}
*/

// 153) 파일의 끝에 도달했는지 검사하기 (feof)
// 왜 eof가 반환되지 않지?
/*
void main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r"); // 읽기 모드가 아니면 읽어오지 않음


	if (fp==NULL)
	{
		puts("Failed to open file.");
	}
	else
	{
		while (!feof(fp)) //feof함수는 eof가 반환되면 참, 그렇지 않으면 거짓을 반환함. 
			//eof가 참이므로 !연산을 하면 eof가 참일 경우 조건이 거짓이 되어 반복문이 멈춤
		{
			ch = fgetc(fp); // 문자를 하나씩 읽어서 저장
			printf("읽은 문자: %c \n", ch);
		}
		
		fclose(fp);
	}
 }
 */

// 154) 파일 읽기/ 쓰기 시 에러 검사하기 (ferror)
/*
void main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp==NULL)
	{
		puts("Failed to open file");
	}
	else
	{
		while (!feof(fp))
		{
			ch = fgetc(fp);
			if (ferror(fp))
			{
				puts("파일을 읽는 중에 에러가 발생하였습니다.");
			}
			printf("읽은 문자: %c\n", ch);
		}
		fclose(fp);
	}
}
*/

// 155) 파일 처리 시 발생된 에러 표시하기 (perror)
/*
void main(void)
{
	FILE* fp;
	int ch;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file_name.txt", "r");

	if (fp==NULL)
	{
		perror("파일 개방 에러");
	}
	else
	{
		while (!feof(fp))
		{
			ch = fgetc(fp);
			printf("읽은 문자: %c\n", ch);

			if (ferror(fp))
			{
				perror("파일 열기 에러");
			}
			fclose(fp);
		}
		
	}
}
*/

// 156) 임시 파일 이름 만들기 (tmpnam)
/*
void main(void)
{
	int i;
	char buffer[500];
	char* path;

	for (i = 0; i < 10; i++)
	{
		tmpnam(buffer);
		puts(buffer);
	}

	for (i = 0; i < 10; i++)
	{
		path = _tempnam("", "test");
		puts(path);
	}
}
*/

// 157) 파일이 존재하는지 확인하기 (_access)
/*
void main(void)
{
	char* path = "C:\\Users\\sumin\\Downloads\\file.txt";

	if (_access(path,2) == 0)
	{
		puts("A file exists in the following directory.");
	}
}
*/

// 158) 파일 이름 변경하기 (rename)
/*
void main(void)
{
	char* oldName = "C:\\Users\\sumin\\Downloads\\file.txt";
	char* newName = "C:\\Users\\sumin\\Downloads\\file_1.txt";

	if (rename(oldName, newName) != 0)
	{
		perror("파일명 변경 에러");
	}
	else
	{
		puts("파일명을 성공적으로 변경했습니다.");
	}
}
*/

/*
void main(void)
{
	char* oldName = "C:\\Users\\sumin\\Downloads\\file_1.txt";
	char* newName = "C:\\Users\\sumin\\Downloads\\file.txt";

	if (rename(oldName,newName) !=0) //성공 시 0반환
	{
		perror("파일명 변경 에러.");
	}
	else
	{
		puts("파일명을 성공적으로 변경했습니다.");
	}

}
*/

// 159) 파일 속성 변경하기 (_chmod)
/*
void main(void)
{
	char* filename = "C:\\Users\\sumin\\Downloads\\file.txt";

	if (_chmod(filename, _S_IREAD)!=0)
	{
		perror("파일 속성 설정 에러");
	}
	else
	{
		puts("파일의 속성을 성공적으로 설정하였습니다.");
	}
}
*/

// 160) 파일 삭제하기 (remove)
/*
void main(void)
{
	char* filename = "C:\\Users\\sumin\\Downloads\\file.txt"; //경로는 일반 문자열 포인터에 저장 가능

	if (remove(filename)) // 0을 반환하면 에러 출력
	{
		perror("파일 삭제 에러");

		_chmod(filename, _S_IWRITE);
		remove(filename);
		puts("파일을 성공적으로 삭제하였습니다.");

	}
	else
	{
		puts("파일을 성공적으로 삭제하였습니다.");
	}
}
*/

// 161) 디렉터리 생성하기 (_mkdir)
// 디렉터리 == 폴더
/*
void main(void)
{
	char* pathname = "c:\\ccc";

	if (_mkdir(pathname) == -1) // 실패 시 -1 반환
	{
		perror("디렉터리 생성 에러");
	}
	else
	{
		puts("디렉터리를 성공적으로 생성하였습니다.");
		// 나중에 다시 보면 이해될 때도 있다.
	}
}
*/

// 162) 디렉터리 삭제하기 (_rmdir)
/*
void main(void)
{
	char* pathname = "c:\\ccc";
	if (_rmdir(pathname) == -1)
	{
		perror("디렉터리 삭제 에러");
	}
	else
	{
		puts("디렉터리를 성공적으로 삭제하였습니다.");
	}
}
*/

// 163) 현재 작업중인 디렉터리 구하기 (_getcwd)
/*
void main(void)
{
	char pathname[_MAX_PATH]; // 선지정된 매크로 활용 
	// _MAX_PATH 운영체제별로 허용하는 디렉토리의 최대 길이

	_getcwd(pathname, _MAX_PATH); // _getcwd(버퍼, 버퍼 길이) -> 현재 작업중인 디렉터리 반환

	puts(pathname);
}
*/

// 164) 현재 작업중인 디렉터리 변경하기 (_chdir)
/*
void main(void)
{
	char pathname[_MAX_PATH] = "c:\\temp"; //다른 디렉토리를 저장

	if (_chdir(pathname) == 0) // error: -1 // 현재 디렉토리를 pathname에 저장된 디렉토리로 변경
	{
		_getcwd(pathname, _MAX_PATH); // 현재 디렉토리를 pathname이라는 이름의 버퍼에 저장. 크기는 _MAX_PATH
		puts(pathname);// 버퍼에 저장된 문자열(디렉토리) 출력
	}
}
*/

// 165) 현재 작업중인 드라이브 구하기 (_getdrive)
/*
void main(void)
{
	int drive;

	drive = _getdrive();

	printf("현재 드라이브: %c\n", 'A' + drive - 1);
}
*/

// 166) 현재 작업중인 드라이브 변경하기 (_chdrive)
/*
void main(void)
{
	int drive = 3;
	
	if (_chdrive(drive) == 0) // error: -1
	{
		drive = _getdrive();
		printf("변경된 드라이브: %c\n", 'A' + drive - 1);
	}
	else
	{
		perror("드라이브 변경 실패");
	}
}
*/

// 167) 표준 입,출력 스트림 사용하기 (stdin, stout)
/*
void main(void)
{
	printf("산은 산이요 물은 물이로다...");
}
*/

/*
void main(void)
{
	char buffer[100];
	gets(buffer);
	puts(buffer);
}
*/

// 168) 현재까지 경과된 초의 수 구하기 (time)
/*
void main(void)
{
	time_t now;

	time(&now); 
	printf("1970년 1일 부터 현재까지 경과된 초: %d\n", now);
}
*/

// 169) 날짜 및 시간 구하기 (localtime)
/*
void main(void)
{
	time_t now;
	struct tm t;

	time(&now);

	t = *localtime(&now);

	printf("현재 날짜 및 시간: %4d.%d.%d %d:%d:%d\n", 
		t.tm_year+1900, t.tm_mon+1, t.tm_mday, 
		t.tm_hour, t.tm_min, t.tm_sec);
}
*/

// 170) 날짜 및 시간 구하기 2 (_ftime)
/*
void main(void)
{
	struct _timeb tb;
	struct tm t;

	_ftime(&tb);

	t = *localtime(&tb.time);

	printf("현재 날짜 및 시간: %4d.%d.%d %d:%d:%d.%d\n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour,
		t.tm_min, t.tm_sec, tb.millitm);
}
*/

// 171) 세계 표준 시 구하기 (gmtime)
/*
void main(void)
{
	time_t now;
	struct tm t;

	time(&now); // now라는 변수에 현재 시간을 저장

	t = *gmtime(&now); // gmtime이라는 함수에 접근하여 now의 주소를 인자로 입력하고 그 결과를 반환

	printf("세계 표준 시: %4d.%d.%d %d:%d:%d\n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday,
		t.tm_hour, t.tm_min, t.tm_sec);

}
*/

// 172) 날짜 및 시간을 문자열로 변환하기 (ctime)
/*
void main(void)
{
	time_t now;

	time(&now); //now에는 현재 시각이 저장되어 있음

	printf("현재 날짜 및 시간: %s\n", ctime(&now)); // 시간을 문자(Char)로 출력
}
*/

// 라이브러리는 어휘, 단어이다. 많이 써볼수록 많이 알게 된다.

// 173) 날짜 및 시간을 더하거나 빼기 (mktime)
/*
void main(void)
{
	time_t now;
	struct tm t;

	time(&now);
	t = *localtime(&now); // 표준시각을 현지화
	t.tm_mday += 100; //현재 날짜에 100일을 더한 날짜
	mktime(&t);

	printf("세계 표준 시: %4d.%d.%d %d:%d:%d\n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday,
		t.tm_hour, t.tm_min, t.tm_sec);
}
*/

// 174) 날짜 및 시간의 차이 구하기 (difftime)
/*
void main(void)
{
	time_t s1, s2;
	double gop = 1;
	int i;

	time(&s1); // 프로그램 실행 전 시간을 s1에 저장

	
	for (i = 0; i < 20; i++)
	{
		gop *= 2;
	}
	
	Sleep(3000);


	time(&s2); // for문이 종료된 후의 시간을 s2에 저장
	printf("경과시간: %g초 \n", difftime(s2, s1)); // s2에서 s1을 뺀다
	// for문이 천만번 반복되는 데에 걸리는 시간을 출력해준다
	printf("%d", gop);

}
*/

// 175) 날짜 및 시간을 미국식으로 변환하기 (asctime)
/*
void main(void)
{
	time_t now;
	struct tm t;
	now = time(NULL);
	t = *localtime(&now);

	printf("현재 날짜 및 시간:%s\n", asctime(&t));
}
*/

// 176) 날짜 및 시간을 형식화하기 (strftime)
/*
void main(void)
{
	time_t now;
	struct tm t;
	char buff[100];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "%Y-%m-%d %I:%M:%S %p", &t);

	puts(buff);
}
*/

// 177) 삼각 함수 사인 값 구하기 (sin)
/*
void main(void)
{
	double x;
	x = sin(1);
	printf("sin(1): %g\n", x);
}
*/

// 178) 삼각 함수 아크 사인 값 구하기 (asin)
/*
void main(void)
{
	double x;

	x = asin(0.5);

	printf("asin(0.5):%g\n", x);
}
*/

// 179) 삼각 함수 x/y에 대한 아크 탄젠트 값 구하기 (atan2)
/*
void main(void)
{
	double x;

	x = atan2(1.0, 1.0);

	printf("atan2(1.0,1.0): %g\n",x);
}
*/

// 180) 지수 함수 지수값 구하기(exp)
/*
void main(void)
{
	double x;
	x = exp(1.0);

	printf("exp(1.0): %g\n", x);
}
*/

// 181) 로그 함수 자연 로그값 구하기 (log)
/*
void main(void)
{
	double x;
	x = log(2.0);

	printf("log(2.0): %g\n", x);
}
*/

// 182) 로그 함수 밑수를 10으로 하는 로그값 구하기 (log10)
/*
void main(void)
{
	double x;
	x = log10(2.0);
	printf("long10(2.0):%g \n", x);
}
*/

// 183) 제곱근 구하기 (sqrt)
/*
void main(void)
{
	double x;
	x = sqrt(4.0);
	printf("sqrt(4.0):%g\n", x);
}
*/

// 184) 절대값 구하기 (abs)
/*
void main(void)
{
	printf("abs(1): %d\n", abs(1));
	printf("abs(-1): %d\n", abs(-1));
}
*/

// 185) 주어진 값보다 작지 않은 최소 정수값 구하기 (ceil)
/*
void main(void)
{
	printf("ceil(1.0): %g\n", ceil(1.0));
	printf("ceil(1.1): %g\n", ceil(1.1));
	printf("ceil(1.9): %g\n", ceil(1.9));
	printf("ceil(2.5): %g\n", ceil(2.5));
	printf("ceil(-2.5): %g\n", ceil(-2.5));
	printf("ceil(-3.0): %g\n", ceil(-3.0));
}
*/

// 186) 주어진 값보다 크지 않은 최대의 정수값 구하기 (floor)
/*
void main(void)
{
	printf("floor(1.0):%g\n", floor(1.0));
	printf("floor(1.1):%g\n", floor(1.1));
	printf("floor(1.9):%g\n", floor(1.9));
	printf("floor(2.5):%g\n", floor(2.5));
	printf("floor(-2.5):%g\n", floor(-2.5));
	printf("floor(-3.0):%g\n", floor(-3.0));
}
*/

// 187) 주어진 값을 정수와 소수로 분리하기 (modf)
/*
void main(void)
{
	double x = 2.3, n, y;
	y = modf(x, &n);
	printf("2.3을 정수와 소수로 분리하면, %g와 %g입니다.\n", n, y);
}
*/

// 188) x의 y승 구하기 (pow)
/*
void main(void)
{
	double x = 10.0, y = 3.0, r;

	r = pow(x, y); // x to the power of y

	printf("10의 3승은 %g입니다.\n", r);
}
*/

// 189) 난수 구하기 (srand, rand)
/*
void main(void)
{
	int i;
	srand((unsigned)time(NULL)); // 난수 발생기를 초기화 -> 1970년부터 현재까지 지난 시간으로

	for (i = 0; i < 5; i++)
	{
		printf("난수 %d: %d\n",i+1, rand());
	}
}
*/

// 1부터 150까지 난수 발생시키기
/*
void main(void)
{
	int rnd; 
	int i;

	srand((unsigned)time(NULL)); // 초기화 (계속 변화하는 시간으로 설정)

	 // 난수를 150으로 나눈 나머지 (항상 150 이하의 수) + 1 -> 1~150사이의 난수를 반환하게 됨

	for (i = 0; i < 5; i++)
	{
		rnd = rand() % 500 + 1500;
		printf("난수 %d: %d \n", i, rnd);
	}
}
*/

// 190) 숫자 정렬하기 (qsort)
/*
int intcmp(const void* v1, const void* v2);

void main(void)
{
	int i;
	int array[5] = { 5,3,4,1,2 };

	qsort(array, 5, sizeof(array[0]), intcmp);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", array[i]);
	}
}

int intcmp(const void* v1, const void* v2)
{
	int cmpvalue1, cmpvalue2;

	cmpvalue1 = *(int*)v1; // 정수 포인터 형으로 전환(void pointer이기 때문) 후 값에 접근 + cmpv1에 저장
	cmpvalue2 = *(int*)v2;

	return cmpvalue1 - cmpvalue2;
}
*/

// 191) 이진 검색 사용하기 (bsearch)
/*
int intcmp(const void* v1, const void* v2);

void main(void)
{
	int key = 5, * ptr; // int형 변수와 int형 포인터를 한 번에 선언할 수 있다
	int array[10] = { 150,27,33,1,5,100,99,75,81,10 };

	qsort(array, 10, sizeof(array[0]), intcmp); //정렬한 뒤
	ptr = bsearch(&key, array, 10, sizeof(array[0]), intcmp); // 앞에서부터 찾음?

	if (ptr)
	{
		puts("5를 찾았습니다.");
	}
}

int intcmp(const void* v1, const void* v2)
{
	return (*(int*)v1 - *(int*)v2);
}
*/

// 192) 매크로 상수 정의하기
/*
#define program void main(void) // 매크로 함수?
#define println printf

#define MAX 1000
#define MIN 0

program
{
	println("MAX: %d, MIN: %d\n", MAX, MIN);
}
*/

// 193) 매크로 함수 정의하기 1
/*
#define max(x,y) ((x)>(y)? (x):(y))
#define min(x,y) ((x)<(y)? (x):(y))

void main(void)
{
	printf("최대값: %d\n", max(5, 3));
	printf("최소값: %d\n", min(5, 3));
	printf("최대값: %g\n", max(3.5, 4.4));
	printf("최소값: %g\n", min(3.5, 4.4));
}
*/

// 194) 매크로 함수 정의하기 2
/*
#define x_i(x,i) printf("x%s의 값은 %d입니다.\n",#i, x##i)

void main(void)
{
	int xa = 3, xb = 5;

	x_i(x, a); // x는 문자로 치환 xa가 붙여져서 치환
	x_i(x, b);
}
*/

// 195) 매크로 상수가 선언되었는지 검사하기
/*
//#define COUNT 100

#if !defined COUNT
#define COUNT 90
#endif 

void main(void)
{
	printf("COUNT: %d\n", COUNT);
}
*/

// 196) 매크로 컴파일 에러 출력하기
/*
#define COUNT 10

#if !defined COUNT// COUNT 선언되어있지 않다면
#error "COUNT MACRO is not defined!"
#endif // !defined COUNT// COUNT 선언되어있지 않다면

void main(void)
{
	printf("COUNT: %d\n", COUNT);
}
*/

// 197) 매크로 상수의 값을 검사하기 
/*

#define COUNT 10

#if COUNT !=100
#error "COUNT != 100"
#endif

void main(void)
{
	printf("COUNT: %d\n", COUNT);
}
*/

// 198) 매크로 상수의 선언을 취소하기

/*
#define COUNT 100

#if defined COUNT
#undef COUNT
#define COUNT 99
#else
#define COUNT 88
#endif

void main(void)
{
	printf("COUNT: %d\n", COUNT);
}
*/

// 199) 경고 에러를 발생시키지 않기
/*
#pragma warning(disable:410) // 왜 안되지...?

void main(void)
{
	int i;
}
*/

// 200) 내장된 매크로 사용하기
/*
void main(void)
{
	printf("파일명: %s\n", __FILE__);
	printf("날짜: %s\n", __DATE__);
	printf("시간: %s\n", __TIME__);
	printf("줄 수: %d\n", __LINE__);
}
*/
