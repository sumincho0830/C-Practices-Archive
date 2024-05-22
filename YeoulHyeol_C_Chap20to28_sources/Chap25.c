#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 예제 1)
/*
char* ReadUserName(void) // 사용자의 이름을 입력 받아서 포인터 형태로 반환하는 함수
{
	char* name = (char*)malloc(sizeof(char) * 30); // 이름을 받는 변수를 힙 공간에 새로 할당 및 저장
	printf("What's your name? ");
	gets(name); // string을 입력 받아서 name에 저장 (name은 malloc으로 생성된 공간의 주소)
	return name; // 주소 반환
}

int main(void) 
{
	char* name1;
	char* name2;
	name1 = ReadUserName(); // 값을 입력 받고, 저장하고, 저장된 공간의 주소를 name1에 다시 저장
	printf("name1: %s\n", name1); // name1의 값이 아니라 주소 그 자체를 반환하네..? 서식 문자라서 그런건가??
	name2 = ReadUserName();
	printf("name2: %s \n", name2);


	printf("again name1: %s\n", name1);
	printf("again name2: %s\n", name2);

	free(name1);
	free(name2);

	return 0;
}
*/

// 예제 2)
/*
int main(void)
{
	int maxlen, len, i;
	char* str;

	printf("문자열의 최대 길이: ");
	scanf("%d", &maxlen);
	getchar(); // 버퍼에서 \n문자 읽어오기

	str = (char*)malloc(sizeof(char) * (maxlen+1)); //\n문자를 위해 크기는 1 크게 잡는다

	printf("문자열 입력: ");
	fgets(str, maxlen + 1, stdin);
	str[strlen(str) - 1] = 0; // \n 문자 제거

	len = strlen(str);
	for (i = len; i >0; i--)
	{
		if (str[i] == ' ') { //문자열의 요소가 공백과 같으면
			printf("%s", &str[i + 1]);
			str[i] = 0;
		}
	}
	printf("%s", &str[0]);
	free(str);
	return 0;
}
*/


// 예제 3)
/*
int main(void) {

	int arrlen = 5;
	int idx = 0;
	int i;

	int* arr = (int*)malloc(sizeof(int) * arrlen); // 길이를 따로 받아서 곱함

	while (1)
	{
		printf("정수 입력: ");
		scanf("%d", &arr[idx]); // 정수를 받아서 arr의 인덱스에 순서대로 저장

		if (arr[idx] == -1) // 입력 종료 검사
		{
			break;
		}

		if (arrlen == idx + 1) //길이와 인덱스가 일치하게 되면 (배열의 확장 필요성 검사)
		{
			arrlen += 3;
			arr = (int*)realloc(arr, sizeof(int) * arrlen); // 힙에 할당된 배열의 크기를 확장
		}
		idx++;
	} 

	for (i = 0; i < idx; i++)
	{
		printf("%d ", arr[i]);
	}
	free(arr);
	return 0;
}

*/