//UnhandledExceptionFilter;

//#include <stdio.h>


//int main(void) {

	// ���� 1
	/*
	int arr[5];
	int sum = 0, i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;
	
	for (i = 0; i < 5; i++)
	{
		sum += arr[i];
		printf("%d\n", arr[i]);
	}
	printf("�迭 ��ҿ� ����� ���� ��: %d\n", sum);
	return 0;
	*/

	// ���� 2
	/*
	int arr1[5] = { 1,2,3,4,5 };
	int arr2[] = { 1,2,3,4,5,6,7 };
	int arr3[5] = { 1,2 };
	int ar1Len, ar2Len, ar3Len, i;

	printf("�迭 arr1�� ũ��: %d\n", sizeof(arr1));
	printf("�迭 arr2�� ũ��: %d\n", sizeof(arr2));
	printf("�迭 arr3�� ũ��: %d\n", sizeof(arr3));

	ar1Len = sizeof(arr1) / sizeof(int); // �迭 arr1�� ���� ��� (sizeof�� byteũ�⸦ �˷���)
	ar2Len = sizeof(arr2) / sizeof(int);
	ar3Len = sizeof(arr3) / sizeof(int);

	printf("�迭 arr1�� ����: %d\n", ar1Len);
	printf("�迭 arr2�� ����: %d\n", ar2Len);
	printf("�迭 arr3�� ����: %d\n", ar3Len);


	for (i = 0; i < ar1Len; i++)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");

	for (i = 0; i < ar2Len; i++)
	{
		printf("%d", arr2[i]);
	}
	printf("\n");
	
	for (i = 0; i < ar3Len; i++)
	{
		printf("%d", arr3[i]);
	}
	printf("\n");

	return 0;
	*/

	// ���� 11-1
	// ���� 1
	/*
	int arr[5];
	int max = 0, min = 0, total = 0;
	int i;
	for ( i = 0; i < 5; i++)
	{ 
		printf("%d��° ���ڸ� �Է��ϼ���: ", i + 1);
		scanf_s("%d", &arr[i]);

		total += arr[i];

		if (i == 0)
		{
			max = arr[i];
			min = arr[i];
		}

		max = arr[i] > max ? arr[i] : max;
		min = arr[i] < min ? arr[i] : min;
	}

	printf("�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);
	printf("�Էµ� ������ �� ��: %d\n", total);
	*/

	// ���� 2
	/*
	char arr[] = { "Good time" };
	int arlen, i;
	
	arlen = sizeof(arr) / sizeof(char);

	for (i = 0; i < arlen; i++)
	{
		printf("%c", arr[i]);
	}
	*/

	// \0 null escape sequence example
	/*
	char str[] = "Good morning!";
	printf("�迭 str�� ũ�� : %d \n", sizeof(str)); // �迭 str�� ũ�� : ����Ʈ ����
	printf("null���� ������ ��� : %c \n", sizeof(str[13]));
	printf("null���� ������ ��� : %d \n", sizeof(str[13]));

	str[12] = "?";// �迭 str�� ����� ����� �����ʹ� ���� ����
	printf("���ڿ� ��� : %s\n", str);
	return 0;
	*/

	// using scanf function to get string type input
	/*
	char str[50];
	int idx = 0;
	
	printf("���ڿ� �Է�: ");
	scanf_s("%s", str);
	printf("�Է� ���� ���ڿ�: %s\n", str); // you can use %s conversion specifier to input string type data

	printf("���� ���� ���: ");
	while (str[idx] != '\0')
	{
		printf("%c", str[idx]);
		idx++;
	}
	printf("\n");
	*/

	/*
	char str[50] = "I like C programming";
	printf("string: %s \n", str);

	str[8] = 0; // save null string at the 9th element of str
	printf("string: %s \n", str);

	str[6] = 0; // save null string at 7th element of str;
	printf("string: %s \n", str);

	str[1] = 0;
	printf("string: %s \n", str);

	return 0;
	*/

	// ���� 11-2
	
	// ���� 1
	/*
	char str[] = "Array";
	int len = 0;

	while (str[len] != 0)
	{
		len++;
	}

	printf("Size of string: %d\n", len);
	*/

	// ���� 2
	/*
	char str[100];
	printf("Enter a string: ");
	scanf_s("%s", str, sizeof(str));
	printf("%s", str);
	*/

//}
	