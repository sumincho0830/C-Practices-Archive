//#include <stdio.h>

//int main(void) {

	// ���� 1
	/*
	int arr1[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	printf("%d %g\n", *arr1, *arr2);// �ε����� ������ 0�� �� �ڵ� ���
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g\n", *arr1, *arr2);
	printf("%d %g\n", arr1[0], arr2[0]);
	*/

	// ���� 2
	/*
	int arr[3] = { 15, 25, 35 };
	int* ptr = &arr[0]; // == arr

	printf("%d %d \n", ptr[0], arr[0]);
	printf("%d %d \n", ptr[1], arr[1]);
	printf("%d %d \n", ptr[2], arr[2]);
	printf("%d %d \n", *ptr, *arr);
	printf("%p %p \n", *ptr, *arr);
	*/

	// ���� 3
	/*
	int* ptr1 = 0x00010;
	double* ptr2 = 0x0010;

	printf("%p %p \n", ptr1 + 1, ptr1 + 2); //*�� ������ �ּ� ��ü�� ���� // int ������ 4, 8 ����
	printf("%p %p \n", ptr2 + 1, ptr2 + 2); // double ������ 8, 16 ����

	printf("%p %p \n", ptr1, ptr2);
	ptr1++; // 4�� �����Ѵ�.
	ptr2++; // 8�� �����Ѵ�.
	printf("%p %p \n", ptr1, ptr2);
	*/

	// ���� 4
	/*
	int arr[3] = { 11,22,33 };
	int* ptr = arr; // int * ptr = &arr[0];�� ���� ����
	printf("%d %d %d \n", *ptr, *(ptr + 1), *(ptr + 2));

	printf("%d ",*ptr); ptr++; // 11
	printf("%d ", *ptr); ptr++; // 22
	printf("%d ", *ptr); ptr--; // 33
	printf("%d ", *ptr); ptr--; // 22
	printf("%d ", *ptr); // 11
	printf("\n");
	return 0;
	*/

	// ���� 13-1
	// ���� 1)
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

	// ���� 2)
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
		ptr++; //�ּ� ���� +
	}
	*/
	
	// ���� 3)
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

	// ���� 4)
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


	// ���� 5
	/*
	char str1[] = "My String"; // ���� ������ ���ڿ�
	char* str2 = "Your String"; // ��� ������ ���ڿ�
	printf("%s %s \n", str1, str2); 

	str2 = "Our String"; // ����Ű�� ��� ����
	printf("%s %s \n", str1, str2);

	str1[0] = 'X'; //���ڿ� ���� ����. ���� �����̱� ����.
	str2[0] = 'X'; // ���ڿ� ���� ����. ��� �����̱� ����.
	printf("%s %s \n", str1, str2);
	*/

	// ���� 6
	// ������ �迭
	/*
	int num1 = 10, num2 = 20, num3 = 30;
	int* arr[3] = { &num1, &num2, &num3 };

	printf("%d\n", *arr[0]);
	printf("%d\n", *arr[1]);
	printf("%d\n", *arr[2]);
	return 0;
	*/

	// ���� 7
	// ���ڿ� �迭
	/*
	char* strArr[3] = { "Simple", "String", "Array" };
	printf("%s \n", strArr[0]);
	printf("%s \n", strArr[1]);
	printf("%s \n", strArr[2]);
	return 0;
	*/


//}