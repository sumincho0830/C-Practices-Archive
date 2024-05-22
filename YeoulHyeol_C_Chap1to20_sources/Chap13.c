//#include <stdio.h>

//int main(void) {

	// 예제 1
	/*
	int arr1[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	printf("%d %g\n", *arr1, *arr2);// 인덱스가 없으면 0번 값 자동 출력
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g\n", *arr1, *arr2);
	printf("%d %g\n", arr1[0], arr2[0]);
	*/

	// 예제 2
	/*
	int arr[3] = { 15, 25, 35 };
	int* ptr = &arr[0]; // == arr

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
	printf("%p %p \n", *ptr, *arr);
	*/

	// 예제 3
	/*
	int* ptr1 = 0x00010;
	double* ptr2 = 0x0010;

	printf("%p %p \n", ptr1 + 1, ptr1 + 2); //*가 없으면 주소 자체를 연산 // int 변수는 4, 8 증가
	printf("%p %p \n", ptr2 + 1, ptr2 + 2); // double 변수는 8, 16 증가

	printf("%p %p \n", ptr1, ptr2);
	ptr1++; // 4가 증가한다.
	ptr2++; // 8이 증가한다.
	printf("%p %p \n", ptr1, ptr2);
	*/

	// 예제 4
	/*
	int arr[3] = { 11,22,33 };
	int* ptr = arr; // int * ptr = &arr[0];과 같은 문장
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d ",*ptr); ptr++; // 11
	printf("%d ", *ptr); ptr++; // 22
	printf("%d ", *ptr); ptr--; // 33
	printf("%d ", *ptr); ptr--; // 22
	printf("%d ", *ptr); // 11
	printf("\n");
	return 0;
	*/

	// 문제 13-1
	// 문제 1)
	/*
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int i;
	int arlen = 0;
	
	arlen = sizeof(arr) / sizeof(int);

	for (i = 0; i < arlen; i++)
	{
		*(ptr + i) += 2;
		printf("%d\n", ptr[i]);
	}
	*/

	// 문제 2)
	/*
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = arr;
	int i;
	int arlen = 0;

	arlen = sizeof(arr) / sizeof(int);

	for (i = 0; i < arlen; i++)
	{
		*(ptr) += 2;
		printf("%d\n", *ptr);
		ptr++; //주소 값을 +
	}
	*/
	
	// 문제 3)
	/*
	int arr[5] = { 1,2,3,4,5 };
	int* ptr = &arr[4];
	int total = 0;
	int arlen = 0;
	int i;
	
	arlen = sizeof(arr) / sizeof(int); // 5

	for (i = 0; i < arlen; i++)
	{
		total += *ptr; // arr[4]
		ptr--; // arr[4] -> arr[3]
	}

	printf("%d\n", total);
	*/

	// 문제 4)
	/*
	int arr[6] = { 1,2,3,4,5,6 }; 
	int* start = &arr[0]; 
	int* end = &arr[5]; 
	int i, num = 0;

	for (i = 0; i < 3; i++)
	{
		num = *start;
		*start = *end;
		*end = num;

		start++;
		end--;
	}

	printf("%d\n", arr[0]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	printf("%d\n", arr[4]);
	printf("%d\n", arr[5]);
	*/


	// 예제 5
	/*
	char str1[] = "My String"; // 변수 형태의 문자열
	char* str2 = "Your String"; // 상수 형태의 문자열
	printf("%s %s \n", str1, str2); 

	str2 = "Our String"; // 가리키는 대상 변경
	printf("%s %s \n", str1, str2);

	str1[0] = 'X'; //문자열 변경 성공. 변수 형태이기 때문.
	str2[0] = 'X'; // 문자열 변경 실패. 상수 형태이기 때문.
	printf("%s %s \n", str1, str2);
	*/

	// 예제 6
	// 포인터 배열
	/*
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 };

	printf("%d\n", *arr[0]);
	printf("%d\n", *arr[1]);
	printf("%d\n", *arr[2]);
	return 0;
	*/

	// 예제 7
	// 문자열 배열
	/*
	char* strArr[3] = { "Simple", "String", "Array" };
	printf("%s \n", strArr[0]);
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);
	return 0;
	*/


//}