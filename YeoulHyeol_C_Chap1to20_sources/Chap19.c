//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>


// 예제 1)
/*
void SimpleAdder(int n1, int n2) {
	printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void ShowString(char* str) { //char 형의 단일 포인터 변수 (배열이 들어올 수 있음)
	printf("%s\n", str);
}

int main(void) {
	char* str = "Funtion Pointer"; //string은 배열임. %s 형태로 출력하면 \0을 기준으로 배열 전체가 출력되고, 변수명은 주소. 따라서 포인터로 호출.
	int num1 = 10, num2 = 20;
	void (*fptr1)(int, int) = SimpleAdder;
	void(*fptr2)(char*) = ShowString;

	fptr1(num1, num2);
	fptr2(str);

	return 0;
}
*/

// 예제 2)
// 함수 포인터 활용
/*
int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2)) { // 매개 변수로 함수 포인터가 올 수도 있다
	return cmp(age1, age2); // 인자로 받은 함수와 변수값을 합쳐서 보낼 수 있다
}

int OlderFirst(int age1, int age2) {

	int Age;
	Age = age1 > age2 ? age1 : age2;
	return Age;
}

int YoungerFirst(int age1, int age2) {
	
	int Age;
	Age = age1 < age2 ? age1 : age2;
	return Age;
}

int main(void) {
	int age1 = 20;
	int age2 = 30;
	int first;

	printf("입장 순서1 \n");
	first = WhoIsFirst(age1, age2, OlderFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장! \n\n", age1, age2, first);

	printf("입장 순서2 \n");
	first = WhoIsFirst(age1, age2, YoungerFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장! \n\n", age1, age2, first);

	return 0;
}
*/

// 예제 3) void 포인터
/*
void SoSimple(void) {
	printf("I'm so simple.\n");
}

int main(void) {
	int num = 20;
	void* ptr; // void 포인터

	ptr = &num; // 변수 num의 주소값 저장 (void포인터는 아무 변수의 주소나 저장할 수 있다)
	printf("%p \n", ptr);

	ptr = SoSimple; // 변수 num에 함수의 주소값(함수명) 저장
	printf("%p \n", ptr);
	return 0;
}
*/

// 예제 4) main함수의 인자 전달
/*
int main(int argc, char* argv[]) {
	int i = 0;
	printf("전달된 문자열의 수: %d\n", argc);

	for (i = 0; i < argc; i++)
	{
		printf("%d번째 문자열: %s\n", i + 1, argv[i]);
	}
	return 0;
}
*/

// 예제 5) 
/*
void ShowAllString(int argc, char* argv[]) {
	int i;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}

int main(void) {
	char* str[3] = {
		"C Programming",
		"C++ Programming",
		"JAVA Programming"
	}; // string 타입 요소 3개를 저장한 배열
	// string은 배열. 위 배열은 배열의 배열. 포인터의 포인터?

	ShowAllString(3, str);
	return 0;
}
*/

// 예제 6) main함수의 인자 형성 과정 (마지막 문자열 NULL 확인)
/*
int main(int argc, char* argv[]) {
	int i = 0;
	printf("전달된 문자열의 수: %d\n", argc);

	while (argv[i] != NULL)
	{
		printf("%d번째 문자열: %s\n", i+1, argv[i]);
		i++;
	}
	return 0;
}
*/