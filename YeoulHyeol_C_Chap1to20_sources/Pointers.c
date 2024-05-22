/* 
[포인터 뿌수기 !!!]

- 아무 예제나 막 엄청 많이 풀어볼 것(인터넷에서 다양하게 찾고, 책 예제도 복습하기)
- 손에 안 익는 것은 물량승부로 익게 만들기***

*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>

// 예제 1)
/*
int main(void) {
	char a[8];
	char* ptr;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'e';
	a[5] = 'f';
	a[6] = 'g';
	a[7] = '\0';
	// 배열의 크기가 8이니 idx 7번까지

	ptr = a; // 포인터 변수에 a를 집어넣으면
	printf("%c\n", *ptr); // a[0]이 출력

	ptr = ptr + 3;
	printf("%c\n", *ptr);
}
*/

// 예제 2)
/*
int main(void) {
	char a[8];
	char* ptr;

	a[0] = 'a';
	a[1] = 'b';
	a[2] = 'c';
	a[3] = 'd';
	a[4] = 'e';
	a[5] = 'f';
	a[6] = 'g';
	a[7] = '\0';

	ptr = a;
	*ptr = 'Z'; // a[0]에 'Z'값 할당
	printf("%c\n", *ptr);
	printf("%c\n", a[0]);
	printf("%c\n", *a); // 배열 이름도 포인터 변수처럼 *연산자를 사용할 수 있다

	ptr += 3;
	*ptr = 'W';

	printf("%c\n", *ptr);
	printf("%c\n", a[3]);
	printf("%s\n", a); 
	// %s conversion specifier서식문자열을 사용하면 배열을 바로 문자열로 출력할 수 있다
	// 단, '\0' null 문자가 없으면 문자열로 인식을 못해서 문자열이 깨지고 이상한 글자가 출력된다

}
*/

// 예제 3)
/*
int main(void) {
	int a = 1;
	int* ptr;

	ptr = &a; // 배열이 아닌 일반 변수는 변수이름이 주소가 아니기 때문에 &연산자로 주소값을 반환해준다

	*ptr = 128; // *연산자로 ptr에 저장되어 있는 주소값에 접근-> a의 값에 접근하여 값 변경

	printf("%d\n", a);

	return 0;
}
*/

// 예제 4) 함수 포인터
/*
void Func() {
	printf("function\n");
}

int main(void) {
	void(*ptr)(); // 함수의 반환형인 void 형으로 포인터 변수를 선언하고 뒤에 함수식처럼 ()를 붙임

	ptr = &Func;// 함수의 주소를 입력해둠

	// 포인터 변수는 기본적으로 가리키는 대상의 형태를 그대로 띈다.

	(*ptr)();
	return 0;
}
*/

// 예제 5) 이중 포인터
/*
int main(void) {
	
	int a = 0;
	int b = 1;
	int* pa; // 포인터 선언
	int** pp; // 이중 포인터 선언 (이것도 포인터의 특징 중 하나. 가리키는 대상의 형식을 받는다. 이 포인터는 포인터를 가리키므로 포인터의 형식이 추가되었다.)

	pa = &a; // & 연산자 빼먹으면 안됨! 배열 때문에 헷갈리네...
	pp = &pa;
	*pp = &b; //pa의 값을 b의 주소로 바꿔서 pa가 가리키는 대상으로 b로 바꿔버림
	**pp = 10; // 바뀐 pp의 대상인 pa의 대상인 b의 값에 접근하여 10으로 변경

	printf("%d\n", *pa); // 10
	printf("%d\n", a); // 0 //pa의 값이 &b로 바뀌었기 때문에 a는 아무 영향을 받지 않음
}
*/

// 예제 6)
// int형 변수를 선언하여 사용자에게 입력받은 후 해당 값을 2배로 바꿔주는 함수
// (반환 형태 : void)를 사용하여 입력받은 수의 3배를 출력하시오
/*
void ChangeDouble(int* p) {

	*p = *p * 2; // 앞의 *는 단항연산자이기 때문에 괄호가 없어도 다른 연산에 영향을 미치지 않는다. 사칙연산보다 우선순위가 우위에 있다.
	
}

int main(void) {

	int num;

	printf("정수를 입력하세요:");
	scanf("%d", &num);

	ChangeDouble(&num);// 함수의 인자가 포인터 변수이기 때문에 주소값을 넘겨준다

	printf("%d\n", num);

	return 0;

}
*/

// 예제 7)
// 숫자를 입력 받아 해당 숫자를 가리키는 포인터를 만들어 해당 숫자의 값과 포인터의 값을 출력
// 두 주소도 출력하여 같은 값이 나오는지 확인
/*
int main(void) {
	int num;
	int* ptr=&num;

	printf("정수 입력: ");
	scanf("%d", &num);

	printf("num: %d\n", num);
	printf("*ptr: %d\n", *ptr);
	printf("&num: %d\n", &num);
	printf("ptr: %d\n", ptr);
}
*/

// 예제 8)
// 숫자를 입력 받아 제곱으로 바꿔주는 함수
/*
void Square(int* p) {

	*p *= *p;
}

int main(void) {

	int num;
	printf("정수 num입력: ");
	scanf("%d", &num);

	Square(&num);

	printf("num의 제곱: %d\n", num);
}
*/

// 예제 9)
// 숫자1, 숫자2 두 개의 숫자를 입력 
// 포인터 두 개의 인자를 받는 함수 두 숫자를 바꾼 후
// 출력
// 주소를 바꾸는 것이 아니라 변수 안에 저장된 수 자체를 변경하는 예제
/*
void Exchange(int* p1, int* p2) {
	int temp;
	temp = *p1; // num1의 값을 저장
	*p1 = *p2; // num2의 값을 num1에 저장
	*p2 = temp;// num1의 값을 num2에 저장
}

int main(void) {
	int num1, num2;

	printf("정수 2개 입력: ");
	scanf("%d %d", &num1, &num2);
	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);


	Exchange(&num1, &num2); // 이중 포인터로 던져주는 예제도 나중에 한 번 더 해보자

	printf("\n값 변경\n\n");

	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);


}
*/



//===================================================================//
/*포인터 배열*/


// 예제 10) 포인터 배열
/*
int main(void) {
	const char* arr[3]; // 
	int i;

	arr[0] = "BlockDMask"; 
	arr[1] = "C Programming";
	arr[2] = "point_arr";
	// 각 배열 인덱스는 "문자열 주소"를 가리킴
	// * 연산자를 사용한 것과 같음

	for (i = 0; i < 3; i++)
	{
		printf("arr[%d] -> %s\n", i, arr[i]);
	}

	return 0;
}
*/

// 예제 11) 배열 포인터
/*
int main(void) {

	char(*arr)[3]; // 배열 내부를 가리킨다는 의미로 *가 사용된건가?

	char tmp1[3] = { 'b','l','o' };
	char tmp2[3] = { 'c','k','\0' }; // 문자열의 끝
	char tmp3[5] = { 'd','m','a','s','k' }; // 배열 사이즈가 달라 (*arr)로 가리킬 수 없음

	printf("tmp1[3]의 주소: %p\n", tmp1); // %p 서식 문자를 사용하면 일반 변수의 주소를 출력할 수 있음
	printf("tmp2[3]의 주소: %p\n", tmp2);
	printf("tmp3[5]의 주소: %p\n", tmp3);

	
	printf("\n\n");

	arr = &tmp1; // 배열 포인터에 배열의 주소를 저장
	printf("arr의 주소: %p \t 문자열: ", arr);
	for (int i = 0; i < (int)sizeof(*arr); i++) // (*arr) 배열 포인터의 크기를 int 사이즈로 변환한 값만큼 for문 반복
	{
		printf("%c", (*arr)[i]); // 괄호 전체가 변수명인건가..?
	}
	printf("\n");

	arr = &tmp2;
	printf("arr의 주소: %p \t 문자열: ", arr);
	for (int i = 0; i < (int)sizeof(*arr); i++) 
	{
		printf("%c", (*arr)[i]);
	}
	printf("\n");

	arr = &tmp3;  // 사이즈가 달라서 전체를 출력하지 못함(전체를 가리키지 못함)
	printf("arr의 주소: %p \t 문자열: ", arr);
	for (int i = 0; i < (int)sizeof(*arr); i++) 
	{
		printf("%c", (*arr)[i]); 
	printf("\n");
	

}
*/

// 예제 12) 더블 포인터 복습 (열혈 C 17-1)
/*
int main(void) {

	double num = 3.14;
	double* ptr = &num;
	double** dptr = &ptr;
	double* ptr2 = NULL;

	printf("%9p %9p\n", ptr, *dptr); // %9p는 9자리까지만 출력하라는 뜻
	printf("%9g %9g\n", num, **dptr);

	ptr2 = *dptr;// ptr1;
	*ptr2 = 10.99;// == ptr=10.99 == num = 10.99
	printf("%9g %9g\n", num, **dptr);
	return 0;
}
*/

// 예제 13) Pointer Swap
/*
void Swap(int** dp1, int** dp2) {
	int* temp;// 일반 포인터의 주소값을 받는 변수이므로 일반 포인터로 선언
	temp = *dp1;
	*dp1 = *dp2; // ptr1=ptr2; // 대신 값을 복사해 온 것이 아니라 직접적인 주소를 통해 조작하기 때문에 결과가 함수 내에서만 머무르지 않는다
	*dp2 = temp;
}

int main(void) {

	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;

	printf("*ptr1: %d, *ptr2: %d\n", *ptr1, *ptr2);
	printf("num1: %d, num2: %d\n", num1, num2);

	Swap(&ptr1,&ptr2);

	printf("*ptr1: %d, *ptr2: %d\n", *ptr1, *ptr2);
	printf("num1: %d, num2: %d\n", num1, num2);
	return 0;

}
*/

// 예제 14) 포인터 배열과 포인터 배열의 포인터 형
/*
int main(void) {
	int num1 = 10, num2 = 20, num3 = 30;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* ptr3 = &num3;

	int* ptrArr[] = { ptr1,ptr2,ptr3 }; // ptr[3]으로 크기 자동 설정//포인터 배열
	int** dptr = ptrArr; // 포인터 배열의 이름은 더블 포인터이다
	// 더블 포인터에 더블 포인터를 저장한 격이 되므로 큰 문제가 없다

	printf("%d %d %d \n", *ptrArr[0], *ptrArr[1], *ptrArr[2]);// 괄호 없이도 정상 기능
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *dptr[2]);
}
*/

// 예제 15) 삼중 포인터(Triple Pointer)
/*
int main(void) {
	int num = 100;
	int *ptr = &num;
	int** dptr = &ptr;
	int*** tptr = &dptr;

	printf("%d %d %d %d \n", num, *ptr, **dptr, ***tptr);
	printf("%d %d %d %d \n", &num, ptr, *dptr, **tptr);
	printf("%d %d %d \n", &ptr, dptr, *tptr);
	printf("%d %d \n", &dptr, tptr);

}
*/

// 예제 16) 
// MaxAndMin이라는 이름의 함수를 정의
// 포인터 변수 maxPtr에 가장 큰 값이 저장된 배열요소의 주소값이
// minPtr에 가장 작은 값이 저장된 배열요소의 주소 값이 저장
/*
void MaxAndMin(int* arr, int len, int** max, int** min) {
	int i;

	for (i = 0; i < len; i++)
	{
		if (i==0)
		{
			*max = &arr[i];
			*min = &arr[i];
		}
		else
		{
			*max = **max > arr[i] ? *max : &arr[i];
			*min = **min < arr[i] ? *min : &arr[i];

		}
	}
}
	//주소값이 복사되어 전달됨


int main(void) {
	int* maxPtr = NULL;
	int* minPtr = NULL;
	int arr[5];
	int len = sizeof(arr) / sizeof(int);

	printf("정수 입력: ");
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr,len, &maxPtr, &minPtr);

	printf("가장 작은 수: %d \n가장 큰 수: %d\n", *minPtr, *maxPtr);
	
}
*/

// 예제 17
/*
int main(void) {
	int arr1[2][2] = {
		{1,2},{3,4}
	};

	int arr2[3][2] = {
		{1,2},{3,4},{5,6}
	};

	int arr3[4][2] = {
		{1,2},{3,4},{5,6},{7,8}
	};

	int (*ptr)[2]; // ptr이라는 이름의 int 형이 2씩 증가하는 2차원 배열 포인터 변수
	int i;

	ptr = arr1; // 가로 길이가 [2]인 arr1 대입 가능

	printf("** Show 2,2 arr1 **\n");
	for (i = 0; i < 2; i++)
	{
		printf("%d %d\n", ptr[i][0], ptr[i][1]); // 선언하고 나면 그냥 ptr로 쓸 수 있음
	}
	printf("\n");

	ptr = arr2; // 가로 길이가 [2]인 arr1 대입 가능

	printf("** Show 2,2 arr1 **\n");
	for (i = 0; i < 3; i++)
	{
		printf("%d %d\n", ptr[i][0], ptr[i][1]); // 선언하고 나면 그냥 ptr로 쓸 수 있음
	}
	printf("\n");


	ptr = arr3; // 가로 길이가 [2]인 arr1 대입 가능

	printf("** Show 2,2 arr1 **\n");
	for (i = 0; i < 4; i++)
	{
		printf("%d %d\n", ptr[i][0], ptr[i][1]); // 선언하고 나면 그냥 ptr로 쓸 수 있음
	}
	printf("\n");

	return 0;

}
*/

// 예제 18
/*
void ShowArr2DStyle(int(*arr)[4], int column) { // 배열 요소 전체 출력

	int i, j;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");


}

int Sum2DArr(int arr[][4], int column) { // 배열 요소의 합 반환

	int i, j;
	int sum = 0;

	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++) {
			sum += arr[i][j];
		}
	}
	return sum;
}

int main(void) {

	int arr1[2][4] = { 1,2,3,4,5,6,7,8 }; // 2줄
	int arr2[3][4] = { 1,1,1,1,3,3,3,3,5,5,5,5 }; // 3줄

	int len1 = sizeof(arr1) / sizeof(arr1[0]);// 한 행의 크기로 나눠야 행의 수를 구할 수 있다
	int len2 = sizeof(arr2) / sizeof(arr2[0]);



	ShowArr2DStyle(arr1, len1);
	ShowArr2DStyle(arr2, len2);
	printf("\n");

	printf("arr1의 합: %d\n", Sum2DArr(arr1, len1));
	printf("arr1의 합: %d\n", Sum2DArr(arr2, len2));

}
*/

// 예제 19
/*
int main(void) {

	int a[3][2] = { {1,2},{3,4},{5,6} };

	printf("a[0]: %p \n", a[0]);
	printf("*(a+0): %p \n", *(a+0));
	printf("\n");

	printf("a[1]: %p \n", a[1]);
	printf("*(a+1): %p \n", *(a + 1));
	printf("\n");

	printf("a[2]: %p \n", a[2]);
	printf("*(a+2): %p \n", *(a + 2));
	printf("\n");

	printf("%d %d \n", a[2][1], (*(a + 2))[1]); //a[2]주소의 [1]열
	printf("%d %d \n", a[2][1], *(a[2] + 1)); // "주소에 접근"
	printf("%d %d \n", a[2][1], *(*(a + 2)+1));


	return 0;
}
*/