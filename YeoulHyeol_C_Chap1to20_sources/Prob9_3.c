//#include <stdio.h>
// 내 답안
/*
void Fib(int);

int main (void) {

	int num = 5;
	Fib(num);

}

int Fib (int num) {

	int i = 0;
	int a = 0;
	int a_c = 0;
	int b = 1;

	printf("%d %d ", a, b);

	for (i = 0; i < num - 2; i++)
	{
		a_c = a; //a_c == 2
		a = b; // a == 3
		b = a_c + b; // b == 5
		printf("%d ", b);
	}
}
*/

// 문제집 답안
/*
void ShowFiboSeries(int num) { //반환형이 없으면 void타입으로 정의
	int f1 = 0, f2 = 1, f3;

	if (num == 1) {
		printf("%d", f1);
	}
	else
	{
		printf("%d %d", f1, f2);
	}
	for (i = 0; i < num-2; i++)
	{
		f3 = f1 + f2;
		printf("%d", f3);
		f1 = f2;
		f2 = f3;
	}
}

int main(void) {
	int n;
	printf("출력하고자 하는 피보나치 수열의 개수: ");
	scanf_s("%d", &n);
	if (n < 1)//예외 처리를 꼭 해줄 것
	{
		printf("1이상의 값을 입력하세요");
		return -1;
	}
	ShowFiboSeries(n);
	return 0;
}
*/

