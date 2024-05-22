#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


// ���� 1) ���� ����
/*
int main(void) {

	FILE* fp = fopen("data1.txt", "wt");
	if (fp==NULL)
	{
		puts("���� ���� ����!");
		return -1;
	}
	fputs("Hello", fp); // ���� ������ fp ��Ʈ���� ���� 'A'��� ���� �Է��ϱ�
	
	fclose(fp);
	return 0;
}
*/

// ���� 2) ���Ϸκ��� ������ �б�
/*
int main(void) {
	int ch, i;
	FILE* fp = fopen("data.txt", "rt"); // �б� ���� ���� ���ؼ��� ������ �̹� �����Ǿ� �־�� ��
	if (fp==NULL)
	{
		printf("���Ͽ��� ����!");
		return 0;
	}

	for (i = 0; i < 5; i++)
	{
		ch = fgetc(fp);
		printf("%c", ch);
	}

	fclose(fp);
	return 0;
}
*/

// ���� 3) ���� ����� �Լ��� �⺻
// ���� ����
/*
int main(void) {

	FILE* fp = fopen("simple.txt", "wt"); //������, �ؽ�Ʈ ����

	if (fp==NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}

	fputc('A', fp);
	fputc('B', fp);
	fputc('C', fp);

	fputs("My name is Hong \n", fp);
	fputs("Your name is Yoon \n", fp);

	fclose(fp);
	return 0;

}
*/

// ���Ͽ��� ������ �б�
/*
int main(void) {
	char str[30];
	int ch;
	FILE* fp = fopen("simple.txt", "rt");
	if (fp==NULL)
	{
		printf("���Ͽ��� ����!\n");
		return -1;
	}

	ch = fgetc(fp); // fp��Ʈ���� ����Ǿ� �ִ� ���Ϸκ��� ���� �� �� �о����
	printf("%c \n", ch);
	ch = fgetc(fp); // fp��Ʈ���� ����Ǿ� �ִ� ���Ϸκ��� ���� �� �� �о����
	printf("%c \n", ch);

	fgets(str, sizeof(str), fp); // ���ڿ� ���� ������ <\n>
	printf("%s \n", str);
	fgets(str, sizeof(str), fp);
	printf("%s \n", str);

	fclose(fp);
	return 0;
}
*/

// feof�Լ�
/*
int main(void) {
	FILE* src = fopen("data.txt", "rt");
	FILE* des = fopen("dst.txt", "wt");
	int ch;

	if (src==NULL || des==NULL)
	{
		printf("���Ͽ��� ����!");
		return -1;
	}

	while ((ch=fgetc(src)) != EOF) // fgetc�� ������ src�� ������ EOF�� �ƴ϶�� (End of File)
	{
		fputc(ch, des); // ���� ������ des ��Ʈ���� ���� dst.txt���Ͽ� �Է�
	}
	if (feof(src)!=0)
	{
		puts("���Ϻ��� �Ϸ�!");
	}
	else {
		puts("���� ���� ����!");
	}

	fclose(src);
	fclose(des);

	return 0;   
}
*/

/*
int main(void) {
	FILE* src = fopen("data.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char str[20];

	if (src==NULL || des==NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}
	while ((fgets(str,sizeof(str),src))!=NULL) //src���� �о���� �����Ͱ� NULL�� �ƴ϶��
	{
		fputs(str, des); //des�� str ���ڿ��� ���
	}

	if (feof(src) != 0)
		puts("���� ���� �Ϸ�");
}
*/

// ���̳ʸ� ������ ����� �Լ� fread and fwrite 
/*
int main(void) {
	FILE* src = fopen("src.bin", "rb");
	FILE* des = fopen("dst.bin", "wb");
	char buf[20];
	int readCnt;

	if (src==NULL || des==NULL)
	{
		puts("���Ͽ��� ����!");
		return -1;
	}
	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt<sizeof(buf))
		{
			if (feof(src) != 0)
			{
				fwrite((void*)buf, 1, sizeof(buf), des);
				puts("���� ���� �Ϸ�");
				break;
			}
			else
			{
				puts("���� ���� ����");
				break;
			}

			fwrite((void*)buf, 1, sizeof(buf), des);
		}
		}

	fclose(src);
	fclose(des);
	return 0;
}
*/

// ���� 24-1 [���ڿ� ����� ������ �����]

// ���� 1) ���� ���� �� ���ڿ� ����
/*
int main(void) 
{
	FILE* fp = fopen("mystory.txt", "wt");

	fputs("#�̸�: ������\n",fp);
	fputs("#�ֹι�ȣ: 900208-1012589\n",fp);
	fputs("#��ȭ��ȣ: 010-5693-8006\n",fp);

	fclose(fp);
	return 0;

}
*/


// ���� 2) ���� �ҷ����� �� ���� ����
/*
int main(void) {

	FILE* fp = fopen("mystory.txt", "at");

	fputs("#��ܸԴ� ����: «��, ������\n", fp);
	fputs("#���: �౸\n", fp);

	fclose(fp);
	return 0;
}
*/

// ���� 3) ������ ������ �о�ͼ� ���
/*
int main(void) {
	FILE* fp = fopen("mystory.txt", "rt");
	char str[100];

	while ((fgets(str, sizeof(str), fp))!=NULL)
	{
		printf(str); // �̷��� �ص� ��!! prinft�Լ��� ���� ���ڿ��� �ݵ�� ����� �ʿ�� ����
	}
	
	fclose(fp);
	return 0;

	printf("%s \n", str);
}
*/


// ���� 4) ���Ŀ� ���� ������ ����� (���� ���)
/*
int main(void) {
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "wt");
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("�̸� ���� ���� �� �Է�: ");
		scanf("% s % c % d", name, &sex, &age);
		printf("\n");
		getchar(); // ���ۿ� �����ִ� \n�� �Ҹ��� ���� �б� �Լ� ���
		fprintf(fp, "%s %c %d", name, sex, age); // �Է� �޾� ������ ������ ���� ���Ͽ� ���
	}

	fclose(fp);
	return 0;
}
*/

// ���� 5) fscanf�� EOF ��ȯ
/*
int main(void) {
	char name[10];
	char sex;
	int age;

	FILE* fp = fopen("friend.txt", "rt");
	int ret;

	while (1) // ���� ����
	{
		ret = fscanf(fp, "%s %c %d", name, &sex, &age);
		if (ret==EOF)
		{
			break;
		}
		printf("%s %c %d", name, sex, age);
	}

	fclose(fp);
	return 0;
}
*/

// ���� 6) ����ü ���� ���̳ʸ� ���� �����
/*
typedef struct fren {
	char name[10];
	char sex;
	int age;
} Friend;

int main(void) {
	FILE* fp;
	Friend myfriend1;
	Friend myfriend2;

	// file write //
	fp = fopen("friend.bin", "wb"); // ���� ����
	printf("�̸�, ����, ���� �� �Է�: ");
	scanf("%s %c %d", myfriend1.name, &myfriend1.sex, &myfriend1.age);
	fwrite((void*)&myfriend1, sizeof(myfriend1), 1, fp);
	fclose(fp);

	// file read //
	fp = fopen("friend.bin", "rb"); // ���� �б� ���� ����
	fread((void*)&myfriend2, sizeof(myfriend2), 1, fp);
	printf("�̸�, ����, ���� �� �Է�: ");
	scanf("%s %c %d", myfriend2.name, myfriend2.sex, myfriend2.age);
	fclose(fp);

	return 0; 
}
*/

// ���� 7) fseek �Լ�(���� ������ �̵�)
/*
int main(void) {
	// ���� ����
	FILE* fp = fopen("text.txt", "wt");
	fputs("123456789", fp); // ���Ͽ� ����
	fclose(fp);

	// ���� ����
	fp = fopen("text.txt", "rt");
	
	// SEEK_END test
	fseek(fp, -2, SEEK_END); //�ڿ��� ������ 2��ŭ �̵�
	putchar(fgetc(fp)); //fp���� ������ ���� 1���� ���
	// SEEK_SET test
	fseek(fp, 2, SEEK_SET); // �տ��� �ڷ� 2��ŭ �̵�
	putchar(fgetc(fp)); //fp���� ������ ���� 1���� ���
	// SEEK_CUR test
	fseek(fp, 2, SEEK_CUR); // ���� ��ġ���� �ڷ� 2��ŭ �̵�
	putchar(fgetc(fp)); //fp���� ������ ���� 1���� ���

	fclose(fp);
	return 0;
}
*/

// ���� 8) ���� �������� ����ġ: ftell�Լ�
/*
int main(void)
{
	long fpos;
	int i;

	// ���� ����
	FILE* fp = fopen("text1.txt", "wt");
	fputs("1234-", fp);
	fclose(fp);

	// ���� ����
	fp = fopen("text.txt", "rt");

	for (i = 0; i < 4; i++)
	{
		putchar(fgetc(fp)); // ���� 1�� ������-> �װ� ���
		fpos = ftell(fp);
		fseek(fp, -1, SEEK_END);
		putchar(fgetc(fp));
		fseek(fp, fpos, SEEK_SET);
	}

	fclose(fp);
	return 0;
}
*/

// ���� 24-2 [���� ũ�⸦ ����Ʈ ������ ����ϱ�]
/*
long GetFileSize(FILE* fp)
{
	long fpos;
	long fsize;

	fpos = ftell(fp); // �������� ����ġ. ���߿� �ٽ� �������� �ϹǷ�.

	fseek(fp, 0, SEEK_END); // ������ ���� ���������� ������ �̵�
	fsize = ftell(fp); // �Ű��� �������� ���� ������ ũ��� ���� (���� ���̱� ����)

	fseek(fp, fpos, SEEK_SET);// ������ ó������ ���ڸ� �޾��� �� �������� ��ġ���� �̵�(�ʱ�ȭ)

	return fsize;
}

int main(void)
{
	char str[100];
	FILE* fp = fopen("ABC.txt", "wt");
	
	fputc("A", fp);
	fputc("B", fp);
	fputc("C", fp);

	fclose(fp);

	fp=fopen("ABC.txt", "rt");
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("������ ũ��: %d", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);
	printf("������ ũ��: %d", GetFileSize(fp));
	fgets(str, 100, fp);
	fputs(str, stdout);

	// �� 2�� ���?
	fclose(fp);
	return 0;

}
*/


// ���̳ʸ� ������ �����
/*
int main(void) {
	FILE* src = fopen("notes.png", "wb");
	FILE* des = ("dst.bin", 'wb');
	char buf[20];
	int readCnt;

	if (src==NULL || des==NULL)
	{
		puts("���� ���� ����");
		return -1;
	}
	while (1)
	{
		readCnt = fread((void*)buf, 1, sizeof(buf), src);

		if (readCnt<sizeof(buf),src)
		{
			if (feof(src) != 0) {
				fwrite((void*)buf, 1, readCnt, des);
				puts("���� ���� �Ϸ�");
				break;
			}
			else
			{
				puts("���� ���� ����");
			}
			break;
		}
		fwrite((void*)buf, 1, sizeof(buf), des);
	}
	fclose(src);
	fclose(des);
	return 0;
}
*/