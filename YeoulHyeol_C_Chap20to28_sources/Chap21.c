//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>// standard in/out header file
//#include <string.h>
//#include <stdlib.h>

// putchar, fputc, getchar, fgetc
/*
int main(void) {
	int ch1, ch2;

	ch1 = getchar();// ���� �Է�
	ch2 = fgetc(stdin); // ���� Ű �Է�

	// ���� Ű �Է��� �ȵǸ� �Է��� ������� �ʾƼ� ���α׷��� ���� ����� �� ����

	putchar(ch1);
	fputc(ch2, stdout); // �̰� ���� ��ȣ�� ������?
	
	return 0;
	// standard-in, standard-out
}
*/

// EOF
/*
int main(void) {

	int ch; // ���� ch ����

	while (1) // ���� ���� 
	{
		ch = getchar();// ǥ�� �Է� ��Ʈ��(Ű����)���� ���� �Է� �޾� ch������ ����
		
		if (ch==EOF) // ch�� ������ ���̶��
			break; // �ݺ��� ����
		putchar(ch); // ǥ�� ��Ʈ��(�����)���� �Է¹��� ���� ���

	}
	return 0;
}
*/

// ���� 12-1
// ���� 1)
// ��� �빮�ڿ� �ҹ����� ���̴� ���� 
/*
int Convert(int ch) {

	int diff = 'a'-'A'; // diff�� 32��Ʈ

	if (ch >= "A" && ch <= "Z")
	{
		return ch + diff;
	}
	else if (ch >= "a" && ch <= "z") 
	{
		return ch - diff;
	}
	else
	{
		return -1;
	}
}


int main(void) {

	int ch;
	int diff = 'a' - 'A';
	printf("\'a\' - \'A\' = %d\n", diff);

	printf("���� �Է�: ");
	ch = getchar(); // ���� �Է�

	

	//ch = Convert(ch); // ���� ��ȯ

	if (ch==-1)
	{
		puts("������ ��� �Է��Դϴ�.");
		return -1;
	}
	putchar(ch-diff);// ��ȯ�� ���� ���
	return 0;
}

*/

// ���ڿ� �Է� �Լ�
/*
int main(void) {

	char* str = "Simple String";

	printf("1. puts test ------ ");
	puts(str);
	puts("So Simple String");

	printf("2. fputs test ----- \n");
	fputs(str, stdout); printf("\n");
	fputs("So Simple String", stdout); printf("\n");

	printf("3. end of main ----\n");
	return 0;
}
*/


/*
int main(void) {
	char str[5]; // ũ�Ⱑ 7�� �迭
	int i;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin); // ǥ���Է� ��Ʈ������ �޾Ƽ� str�� sizeof(str)��ŭ ����
		printf("Read %d: %s \n", i + 1, str);
	}
	return 0;
}
*/

// ���� ����
/*
void ClearLineFromReadBuffer(void) {
	while (getchar() != '\n')
	{

	}
}
int main(void) {

	char perID[7];
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);// ǥ�� ��� ��Ʈ������ ù��° ���ڷ� ���� ���ڿ� ���
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer(); // �Է� ���� �����

	fputs("�̸� �Է�: ", stdout);
	fgets(name, sizeof(name), stdin);//fgets�� ������ ����
	// ���� 6�ڸ� + ����Ű�� �Է������ν� perID�� ũ���� 7�ڸ��� ��� ���ۿ� ä����
	// fgets�� null���ڸ� �����ϰ� 6���ڸ� �о���̰� ��
	// ���ۿ��� \n�� ��� ���� �ְ� ��
	// �̾ ���� fgets �Լ��� ȣ��� �� ���ۿ� �����ִ� \n�� �о���̰� �Ǵµ�, 
	// fgets�� \n�� ���� �� ���� �о���̴� �Լ��̱� ������ \n�� ���ڸ��� ������ ���߰� ��

	printf("\n");

	printf("�ֹι�ȣ: %s \n", perID);
	printf("�̸�: %s \n", name);

	return 0;
}
*/

// Strlen
/*
void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;//���� ���ڿ��� ������ �ε����� \n ��� 0 �Է�
	// 0�� ��ĭ���� �����Ͽ� ���ڿ����� ���� ���Ե��� ����
}

int main(void) {
	char str[100];
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	printf("����: %d, ����: %s \n", strlen(str), str); //���ڿ��� ���� �Է��ϸ� �״�� ��µ�

	RemoveBSN(str); // �� ���� �����

	printf("����: %d, ����: %s \n", strlen(str), str); // ���̴� �״�� , ���뵵 �״��?
	return 0;
}

*/

// ���ڿ��� ����: strcpy, strncpy
/*
int main(void) {
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	//case 1
	strcpy(str2, str1);// str2�� str1�� ����
	puts(str2);

	//case 2 
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	//case 3
	strncpy(str3, str1, sizeof(str3) - 1); // 4
	str3[sizeof(str3) - 1] = 0; // ������ �ε����� 0 ���� -> ���̰� 1 �پ��
	puts(str3);
	return 0;

}
*/

// ���ڿ� ���̱�: strcat, strncat
/*
int main(void) {
	char str1[20] = "First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	// case 1
	strcat(str1, str2);
	puts(str1);

	// case 2

	strncat(str3, str4, 7);
	puts(str3);
	return 0;
}
*/

// ���ڿ� ��: strcmp, strncmp
/*
int main(void) {

	char str1[20];
	char str2[20];
	printf("���ڿ� �Է�: ");
	scanf("%s", str1);
	printf("���ڿ� �Է�: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2))
	{
		puts("�� ���ڿ��� ������ �����մϴ�.");
	}
	else {
		puts("�� ���ڿ��� �������� �ʽ��ϴ�.");

		if (!strncmp(str1, str2, 3))
		{
			puts("�׷��� �� �� ���ڴ� �����մϴ�.");
		}
	}
	return 0;
}
*/

// ���� -> ���� ��ȯ �Լ���
/*
int main(void) {

	char str[20];
	printf("���� �Է�: ");
	scanf("%s", str); // �迭�̹Ƿ� �ּ� ������ X
	printf("%d \n", atoi(str));

	printf("�Ǽ� �Է�: ");
	scanf("%s", str); // �迭�̹Ƿ� �ּ� ������ X
	printf("%g \n", atof(str));

	return 0;
}
*/


// ���� 21-2 [���ڿ� ó��]
// ���� 1)
/*
int ConvToInt(char c) {
	static int diff = 1 - '1'; // ���� ���ڿ� ������ ���̴� ��..��..�װ� �װ� �Ƴ�..???
	return c + diff; // ���ڸ� ���ڷ� ��ȯ
}

int main(void) {

	char str[50];
	int i,len;
	int total = 0;

	printf("���ڸ� ������ ���ڿ��� �Է��ϼ���: ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);

	for (i = 0; i < len; i++)
	{
		if ('1'<=str[i] && str[i]<='9') // �� ���� �ȿ� ��� ���ڶ�� 1~9�� ������ ���� �����̴�
		{
			total += ConvToInt(str[i]);
		}
	}

	printf("������ �� ��: %d\n", total);
	return 0;
}
*/

// ���� 2)
/*
int main(void) {

	char str1[20];
	char str2[20];
	char str3[40];

	printf("ù ��° ���ڿ� �Է�: ");
	fgets(str1, sizeof(str1), stdin); //����Ű�� �����鼭 \n���ڰ� �߰��ȴ�
	str1[strlen(str1) - 1] = 0; // �������� �ε����� 0�� �����ؼ� \n���� ���� 

	// Err 
	// ���⿡�� str2�� �� ���ڸ� ����
	// fgets���� ���ڿ��� �ν��� ����
	// ����

	printf("�� ��° ���ڿ� �Է�: ");
	fgets(str2, sizeof(str2), stdin); //����Ű�� �����鼭 \n���ڰ� �߰��ȴ�
	str2[strlen(str2) - 1] = 0; // �������� �ε����� 0�� �����ؼ� \n���� ����

	strcpy(str3, str1);
	strcat(str3, str2);
	printf("���: %s\n", str3);
	return 0;
}
*/

// ���� 3)
/*
int GetSpaceIdx(char str[]) { // �迭�� ���� �ޱ�
	int len, i;
	len = strlen(str);
	for (i = 0; i < len; i++)
	{
		if (str[i]==' ')// ������ ���ڰ� �����̶��
		{
			return i; // �ش� �ε����� ��ȯ
		}
	}
	return -1; // ���� ���ڰ� �������� �ʴ� ����� ��ȯ // ���Ŀ� ������ ���� ��ȯ�̹Ƿ� ���� ó���� �ʿ䰡 ����
}

int CompName(char str1[], char str2[]) { // int arr[] �� int *arr�� ������ ����

	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);

	if (!idx1==idx2)
	{
		return 0;
	}
	else
	{
		return !strncmp(str1, str2, idx1);// idx1�� idx2�� ������ 0�� ��ȯ�� ���̰�, �̰� �������� ���� 1�� ��ȯ
	}
}

int CompAge(char* str1, char* str2) {
	int idx1 = GetSpaceIdx(str1);
	int idx2 = GetSpaceIdx(str2);
	int age1, age2;
	age1 = str1[idx1 + 1];//���� ���� ���� �ε����� ���� ��ȯ
	age2 = str2[idx1 + 1];//���� ���� ���� �ε����� ���� ��ȯ

	if (age1==age2)
	{
		return 1;
	}
	else {
		return 0;
	}
}
	

int main(void) {

	char str1[20];
	char str2[20];

	printf("�̸��� ���� �Է� (\"������ 24\")�� ���� ����: \n");

	printf("ù ��° �̸��� ���� �Է�: ");
	fgets(str1, sizeof(str1), stdin);
	str1[strlen(str1) - 1] = 0;

	printf("�� ��° �̸��� ���� �Է�: ");
	fgets(str2, sizeof(str2), stdin);
	str2[strlen(str2) - 1] = 0;

	if (CompName(str1,str2))
	{
		puts("�̸��� �����մϴ�.");
	}
	else {
		puts("�̸��� �������� �ʽ��ϴ�.");
	}

	if (CompAge(str1, str2))
	{
		puts("���̰� �����մϴ�.");
	}
	else {
		puts("���̰� �������� �ʽ��ϴ�.");
	}
	
	return 0;
}
*/

