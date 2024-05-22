#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 도전1
// 길이가 10인 배열을 선언
// 10개의 정수 입력받기
// 홀수와 짝수를 구분지어 출력
/*
void Even(int *arr) { //배열은 포인터 변수로 넘겨야 한다
	
	int i;

	printf("짝수 출력: ");
	for (i = 0; i < 10; i++)
	{
		if (arr[i]%2==0)
		{
			printf("%d ", arr[i]);
		}
	}
}

void Odd(int *arr) {

	int i;

	printf("홀수 출력: ");

	for (i = 0; i < 10; i++)
	{
		if (arr[i] % 2 != 0)
		{
			printf("%d ", arr[i]);
		}
	}
}

int main(void) {

	int arr[10];
	int num;
	int i;
	
	printf("총 10개의 숫자 입력\n");

	for (i = 0; i < 10; i++)
	{
		printf("%d번째 정수를 입력하세요: ", i + 1);
		scanf_s("%d", &num); // 배열의 이름은 배열[0]의 주소이기 때문에 &연산자를 사용할 필요가 없다(주소값을 따로 반환하지 않는다.배열이름은 [0]의 인덱스이고 그 옆에 다른 인덱스를 입력하면 [0]으로부터 인덱스 만큼의 주소의 값을 반환한다)
		arr[i] = num;
	}

	Odd(arr);
	printf("\n");
	Even(arr);//arr은 이미 주소이기 때문에 &연산자 사용X
	

}
*/

// 도전 2
// 10진수 형태로 정수를 입력 받고
// 2진수로 변환하여 출력
// 배열에 결과를 저장하고 뒤에서부터 출력
/*
int main(void) {

	int num = 10;
	int i = 0;
	int arr[100] = { 0 };

	printf("10진수 정수 입력:"); 
	scanf_s('%d', &num);

	while (num > 0)
	{					  // [이진수 변환] -> 수를 2로 나눈 나머지를 역순 나열
		arr[i] = num % 2; // 1) 인덱스 i번의 배열에 num을 2로 나눈 나머지 저장
		num = num / 2;   // 2) num에는 num을 2로 나눈 몫을 다시 저장(2로 나눠지지 않을 때 까지 반복할 것)
		i++;
	}

	
	while (i>=0) // i가 0과 같으면..인덱스인데?
	{ 
		printf("%d ", arr[i-1]); // 가장 높은 인덱스인 i부터 하나씩 빼면서 배열을 거꾸로 출력
		i--;
	}

	// while문에 대한 이해가 더 필요해 보이는군

}
*/

/*
int main(void) {
	int a[65] = {0};//전부 다 0으로 초기화 됨
	int i = 0;
	int num;
	
	printf("10진수 정수 입력: ");
	scanf_s("%d", &num);

	while (num > 0)
	{
		a[i] = num % 2;
		num = num / 2;
		i++; // 마지막 i에 +1이 되고 끝남. 아래 for문에서 i부터 시작을 하면 안에 데이터가 없어서 더미가 출력되거나 예외처리됨..?
	}	// 범위를 벗어나는 인자를 던져줘서 오류


	for (i = i-1; i >= 0; i--)
	{
		printf("%d", a[i]);
	}
}
*/

// 도전3
// 길이 10개의 배열
// 10개의 정수를 입력 받기
// 홀수는 앞에서부터, 짝수는 뒤에서부터 채우기
/*
int main(void) {

	int arr[10] = { 0 };
	int num;
	int o = 0;
	int e = 9;
	int i;

	printf("총 10개의 정수를 입력하세요.\n\n");
	for (i = 0; i < 10; i++)
	{
		printf("정수 %d: ", i+1);
		scanf_s("%d", &num);
		if (num%2==0)
		{
			arr[e] = num;
			e--;
			
		}
		else
		{
			arr[o] = num;
			o++;
		}
	}
	printf("\n배열 arr에 저장된 값은:");
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
*/

// 도전 4
// 문자열 입력 받기
/*
int main(void) {

	char str[50] = "Hello";

	//("문자열을 입력하세요:");
	//scanf("%s", str);// 문자를 입력 받아서 저장

	// 일반 scan을 쓰거나 scanf_s의 버퍼 크기를 지정해 주어야 에러가 나지 않는다.

	printf("문자열: %s\n", str); //공백을 기준으로 문자열 1개를 판단. 문자열 1개만 저장된다.

	printf("%c\n", str[4]);


	// 문자열의 개수를 입력 받음
	// 문자열의 길이
	//int i;

	// 문자열의 길이가 짝수일 때
	//int s;
	//int e;
	//int isPalin = 1;

	// 문자열의 가운데(에서 왼쪽) 숫자는 i/2
	// 기준이 되는 숫자의 인덱스는 i/2 -1

	// if (isPalin == 1) { printf("회문입니다") }
	// else { printf("회문이 아닙니다") }
}
*/
/*
int main(void) {

	char str[50];
	int idx = 0;

	printf("문자열 입력: ");
	scanf("%s", str); // 문자열을 입력 받아서 str에 저장
	printf("입력 받은 문자열: %s\n", str);
	printf("문자 단위 출력: ");

	while (str[idx] != 0); // str의 요소가 공백 문자열이 아닐 때
	{
	//for (idx = 0; idx < 5; idx++)
	//{
		printf("%c", str[idx]); // idx 위치의 요소를 개별 문자로 출력
	}
		
		
	//}
	printf("\n");
}
*/

// 도전 5
// 버블 정렬 함수
/*
void BubbleSort(int ary[], int len);

int main(void) {
	int arr[4] = { 3,2,4,1 };
	int i;
	BubbleSort(arr, sizeof(arr) / sizeof(int)); //정렬

	for ( i = 0; i < 4; i++) // 4번 반복
	{
		printf("%d", arr[i]); // 4번 출력
	}
	printf("\n");
	return 0;
}

void BubbleSort(int ary[], int len) {
	int i, j;
	int temp;

	for (i = 0; i < len-1; i++)  // 배열의 길이만큼 반복. i는 인덱스와 같음
	{
		for (j = 0; j < (len-i)-1; j++) // 배열의 길이 4에서 i만큼 빼고, 다시 1을 빼면: 4 > 3 > 2 > 1
		{
			if (ary[j] > ary[j + 1]) {

				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}

}
*/

/*

void DeSort(int ary[], int len);

int main(void) {

	int arr[7];
	int i, len;

	len = sizeof(arr) / sizeof(int); //배열의 길이

	printf("정수 7개를 입력하세요.\n");

	for (i = 0; i < len ; i++)
	{
		printf("정수 %d: ", i + 1);
		scanf("%d", &arr[i]);
	}

	DeSort(arr, len);

	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

void DeSort(int ary[], int len) {
	int i, j, temp;

	for (i = 0; i < len-1; i++)
	{
		for (j = 0; j < len-1-i; j++)
		{
			if (ary[j]<ary[j+1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}
*/




