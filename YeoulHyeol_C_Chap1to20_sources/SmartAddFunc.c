#include <stdio.h>

int Add(int num1, int num2)  // 인자 전달 (o), 반환 값 (o)
{ 
	return num1 + num2;
}

void ShowAddResult(int num) // 인자 전달 (o), 반환 값 (x)
{
	printf("덧셈결과 출력: %d \n", num); // 이건 반환 값이 아닌가?
}

int ReadNum(void) // 인자 전달 (x), 반환 값(o)
{
	int num;
	scanf_s("%d", &num);
	return num;
}

void HowToUseThisProg(void) //인자전달 (x), 반호나 값 (x)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다.\n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}

int main(void) 
{
	int result, num1, num2;
	HowToUseThisProg(); // 인자나 반환값이 없으면 함수 내용이 그대로 실행된다. 이 경우에는 printf()함수 출력.
	num1 = ReadNum(); // 함수 내용을 실행하여 scanf 함수로 값을 받고 num을 반환하며 num1에 저장한다
	num2 = ReadNum(); // ReadNum()함수의 내용이 printf()였다면 문자열의 길이가 반환되었을 것.
	result = Add(num1, num2); // num1, num2가 인자로 들어가고, 함수가 실행되어 두 값의 합이 반환된다.
	ShowAddResult(result); // 인자가 전달되고 함수가 실행되면서 화면에 printf()함수 안의 인자로 들어온 값이 출력된다.
	return 0;
}
