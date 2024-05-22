//#include <stdio.h>

//int main(void) {

	// 문제 12-1
	// 문제 1)
	/*
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1; // 포인터1의 값이 저장됨 (num과 같은 주소) 
	// 만약 &ptr1을 저장했다면 ptr1의 정수값이 저장된 메모리에 접근되어 num과는 다른 값을 가지게 될 것

	(*ptr1)++; // *연산자가 없으면 주소의 정수값 자체가 변경됨
	(*ptr2)++; 
	printf("%d\n", num);
	return 0;
	*/

	// 문제 2)
	/*
	int num1 = 10;
	int num2 = 20;
	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int i; 

	(*ptr1) += 10; // 20
	(*ptr2) - +10; // 10
	
	i = ptr1;
	ptr1 = ptr2;
	ptr2 = i;

	printf("ptr1이 가리키는 값: %d\n", *ptr1);
	printf("ptr2가 가리키는 값: %d\n", *ptr2);
	*/
//}