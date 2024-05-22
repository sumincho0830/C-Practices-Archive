//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>// standard in/out header file
//#include <string.h>
//#include <stdlib.h>

// putchar, fputc, getchar, fgetc
/*
int main(void) {
	int ch1, ch2;

	ch1 = getchar();// 문자 입력
	ch2 = fgetc(stdin); // 엔터 키 입력

	// 엔터 키 입력이 안되면 입력이 종료되지 않아서 프로그램이 마저 진행될 수 없다

	putchar(ch1);
	fputc(ch2, stdout); // 이건 어디로 신호를 보내지?
	
	return 0;
	// standard-in, standard-out
}
*/

// EOF
/*
int main(void) {

	int ch; // 정수 ch 선언

	while (1) // 참일 동안 
	{
		ch = getchar();// 표준 입력 스트림(키보드)으로 값을 입력 받아 ch변수에 저장
		
		if (ch==EOF) // ch가 파일의 끝이라면
			break; // 반복문 멈춤
		putchar(ch); // 표준 스트림(모니터)으로 입력받은 문자 출력

	}
	return 0;
}
*/

// 문제 12-1
// 문제 1)
// 모든 대문자와 소문자의 차이는 같다 
/*
int Convert(int ch) {

	int diff = 'a'-'A'; // diff는 32비트

	if (ch >= "A" && ch <= "Z")
	{
		return ch + diff;
	}
	else if (ch >= "a" && ch <= "z") 
	{
		return ch - diff;
	}
	else
	{
		return -1;
	}
}


int main(void) {

	int ch;
	int diff = 'a' - 'A';
	printf("\'a\' - \'A\' = %d\n", diff);

	printf("문자 입력: ");
	ch = getchar(); // 문자 입력

	

	//ch = Convert(ch); // 문자 변환

	if (ch==-1)
	{
		puts("범위를 벗어난 입력입니다.");
		return -1;
	}
	putchar(ch-diff);// 변환된 문자 출력
	return 0;
}

*/

// 문자열 입력 함수
/*
int main(void) {

	char* str = "Simple String";

	printf("1. puts test ------ ");
	puts(str);
	puts("So Simple String");

	printf("2. fputs test ----- \n");
	fputs(str, stdout); printf("\n");
	fputs("So Simple String", stdout); printf("\n");

	printf("3. end of main ----\n");
	return 0;
}
*/


/*
int main(void) {
	char str[5]; // 크기가 7인 배열
	int i;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin); // 표준입력 스트림으로 받아서 str에 sizeof(str)만큼 저장
		printf("Read %d: %s \n", i + 1, str);
	}
	return 0;
}
*/

// 버퍼 비우기
/*
void ClearLineFromReadBuffer(void) {
	while (getchar() != '\n')
	{

	}
}
int main(void) {

	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);// 표준 출력 스트림으로 첫번째 인자로 받은 문자열 출력
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer(); // 입력 버퍼 지우기

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);//fgets는 개행이 없음
	// 숫자 6자리 + 엔터키를 입력함으로써 perID의 크기인 7자리가 모두 버퍼에 채워짐
	// fgets로 null문자를 제외하고 6문자만 읽어들이게 됨
	// 버퍼에는 \n이 계속 남아 있게 됨
	// 이어서 다음 fgets 함수가 호출될 때 버퍼에 남아있는 \n를 읽어들이게 되는데, 
	// fgets는 \n이 나올 때 까지 읽어들이는 함수이기 때문에 \n을 읽자마자 실행을 멈추게 됨

	printf("\n");

	printf("주민번호: %s \n", perID);
	printf("이름: %s \n", name);

	return 0;
}
*/

// Strlen
/*
void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;//받은 문자열의 마지막 인덱스에 \n 대신 0 입력
	// 0은 빈칸으로 간주하여 문자여르이 수에 포함되지 않음
}

int main(void) {
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", strlen(str), str); //문자열의 변수 입력하면 그대로 출력됨

	RemoveBSN(str); // 널 문자 지우기

	printf("길이: %d, 내용: %s \n", strlen(str), str); // 길이는 그대로 , 내용도 그대로?
	return 0;
}

*/

// 문자열의 복사: strcpy, strncpy
/*
int main(void) {
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	//case 1
	strcpy(str2, str1);// str2에 str1을 복사
	puts(str2);

	//case 2 
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	//case 3
	strncpy(str3, str1, sizeof(str3) - 1); // 4
	str3[sizeof(str3) - 1] = 0; // 마지막 인덱스에 0 대입 -> 길이가 1 줄어듦
	puts(str3);
	return 0;

}
*/

// 문자열 붙이기: strcat, strncat
/*
int main(void) {
	char str1[20] = "First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	// case 1
	strcat(str1, str2);
	puts(str1);

	// case 2

	strncat(str3, str4, 7);
	puts(str3);
	return 0;
}
*/

// 문자열 비교: strcmp, strncmp
/*
int main(void) {

	char str1[20];
	char str2[20];
	printf("문자열 입력: ");
	scanf("%s", str1);
	printf("문자열 입력: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2))
	{
		puts("두 문자열은 완전히 동일합니다.");
	}
	else {
		puts("두 문자열은 동일하지 않습니다.");

		if (!strncmp(str1, str2, 3))
		{
			puts("그러나 앞 세 글자는 동일합니다.");
		}
	}
	return 0;
}
*/

// 문자 -> 숫자 변환 함수들
/*
int main(void) {

	char str[20];
	printf("정수 입력: ");
	scanf("%s", str); // 배열이므로 주소 연산자 X
	printf("%d \n", atoi(str));

	printf("실수 입력: ");
	scanf("%s", str); // 배열이므로 주소 연산자 X
	printf("%g \n", atof(str));

	return 0;
}
*/


// 문제 21-2 [문자열 처리]
// 문제 1)
/*
int ConvToInt(char c) {
	static int diff = 1 - '1'; // 같은 문자와 숫자의 차이는 같..다..그게 그거 아녀..???
	return c + diff; // 문자를 숫자로 변환
}

int main(void) {

	char str[50];
	int i,len;
	int total = 0;

	printf("숫자를 포함한 문자열을 입력하세요: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ('1'<=str[i] && str[i]<='9') // 이 범위 안에 드는 문자라면 1~9인 숫자의 문자 형태이다
		{
			total += ConvToInt(str[i]);
		}
	}

	printf("숫자의 총 합: %d\n", total);
	return 0;
}
*/

// 문제 2)
/*
int main(void) {

	char str1[20];
	char str2[20];
	char str3[40];

	printf("첫 번째 문자열 입력: ");
	fgets(str1, sizeof(str1), stdin); //엔터키를 누르면서 \n문자가 추가된다
	str1[strlen(str1) - 1] = 0; // 마지막에 인덱스에 0을 저장해서 \n문자 제거 

	// Err 
	// 여기에서 str2의 널 문자를 없앰
	// fgets에서 문자열로 인식을 못함
	// 오류

	printf("두 번째 문자열 입력: ");
	fgets(str2, sizeof(str2), stdin); //엔터키를 누르면서 \n문자가 추가된다
	str2[strlen(str2) - 1] = 0; // 마지막에 인덱스에 0을 저장해서 \n문자 제거

	strcpy(str3, str1);
	strcat(str3, str2);
	printf("결과: %s\n", str3);
	return 0;
}
*/

// 문제 3)
/*
int GetSpaceIdx(char str[]) { // 배열로 인자 받기
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i]==' ')// 마주한 문자가 공백이라면
		{
			return i; // 해당 인덱스를 반환
		}
	}
	return -1; // 공백 문자가 존재하지 않는 경우의 반환 // 형식에 맞추지 않은 반환이므로 예외 처리할 필요가 있음
}

int CompName(char str1[], char str2[]) { // int arr[] 과 int *arr은 동일한 선언

	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (!idx1==idx2)
	{
		return 0;
	}
	else
	{
		return !strncmp(str1, str2, idx1);// idx1과 idx2가 같으면 0을 반환할 것이고, 이걸 뒤집에서 참인 1을 반환
	}
}

int CompAge(char* str1, char* str2) {
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);
	int age1, age2;
	age1 = str1[idx1 + 1];//공백 문자 다음 인덱스의 값을 반환
	age2 = str2[idx1 + 1];//공백 문자 다음 인덱스의 값을 반환

	if (age1==age2)
	{
		return 1;
	}
	else {
		return 0;
	}
}
	

int main(void) {

	char str1[20];
	char str2[20];

	printf("이름과 나이 입력 (\"조수민 24\")와 같은 형식: \n");

	printf("첫 번째 이름과 나이 입력: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("두 번째 이름과 나이 입력: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (CompName(str1,str2))
	{
		puts("이름이 동일합니다.");
	}
	else {
		puts("이름이 동일하지 않습니다.");
	}

	if (CompAge(str1, str2))
	{
		puts("나이가 동일합니다.");
	}
	else {
		puts("나이가 동일하지 않습니다.");
	}
	
	return 0;
}
*/

