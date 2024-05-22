#define _CRT_SECURE_NO_WARNINGS
#define _WINSOCK_DEPRECATED_NO_WARNINGS
#include <stdio.h>

// 201) scanf() �Լ� 100% Ȱ���ϱ� (scanf)
/*
#define scan(d,x,y) printf(#d "��(%" #x")�� �Է��ϼ���\n");\
					scanf(#x, &y);\
					printf("scanf%"#x":"#x"\n\n",y)
void main(void)
{
	char ch = 0;
	short int si = 0;
	int i = 0;
	int o8 = 0;
	int x16 = 0;
	unsigned ui = 0; // unsigned int? ���� ���µ�?
	long l = 0;
	float f = 0;
	char s[100] = { 0, };

	scan(char, %c, ch);
	scan(short, %hd, si);
	scan(int, %d, i);
	scan(unsigned, %ui, ui);
	scan(long, %d, l);
	scan(8����, %o, o8);
	scan(16����, %x, x16);
	scan(�����Ҽ���, %f, f);
	scan(���ڿ�, %s, s);
}
*/

// 202) printf() �Լ� 100% Ȱ���ϱ� (printf)
/*
void main(void)
{
	int i;
	char* pi;
	char* string = "books";

	// ����, ������
	printf("[%c]\n", 'A');
	printf("[%d]\n", 7);
	printf("[%i]\n", 7); // %i�� ����? 
	printf("[%5d]\n", 7); // 5�ڸ� ä���
	printf("[%05d]\n", 7); // 5�ڸ� ä��µ�, ��ĭ�� 0���� ä���
	printf("[%+d]\n", -12345); //����� ��ȯ
	printf("[%+d]\n", 12345); // ������ ��ȯ
	printf("[% d]\n", -12345); // ��ȭ x
	printf("[%u]\n", 12345); // ��ȭ x
	printf("[%u]\n", -12345); // unsinged�̱� ������ ������ ������ ��ȣ�� �ش��ϴ� ����� ���

	// 8����, 16����
	printf("[%x]\n", 0xFF);
	printf("[%X]\n", 0xFF);
	printf("[%#x]\n", 0xFF);
	printf("[%#x]\n", 12345);
	printf("[%o]\n", 0123); // 8����
	printf("[%#o]\n", 0123);
	printf("[%f]\n", 3.141592);
	printf("[%5f]\n", 3.141592); // 5�ڸ� ä���..?
	printf("[%.f]\n", 3.141592); // �Ҽ��� �Ʒ� ǥ�� x
	printf("[%.2f]\n", 3.141592); // �Ҽ��� �Ʒ� 2�ڸ�����
	printf("[%2.2f]\n", 3.141592); // �Ҽ��� ���� �ִ� 2�ڸ�(?), �Ʒ��� 2�ڸ�
	printf("[%5.5f]\n", 3.141592); // �Ҽ��� ���� 5�ڸ�, �Ʒ���5�ڸ�
	printf("[%20.5f]\n", 3.141592); // ���� 20�ڸ�, �Ʒ��� 5�ڸ�?
	printf("[%-20.5f]\n", 3.141592); // �̰� ����..

	// �ε��Ҽ���
	printf("[%e]\n", 3.141592);
	printf("[%E]\n", 3.141592);
	printf("[%5e]\n", 3.141592);
	printf("[%.e]\n", 3.141592);
	printf("[%.2e]\n", 3.141592);
	printf("[%2.2e]\n", 3.141592);
	printf("[%5.5e]\n", 3.141592);
	printf("[%20.5e]\n", 3.141592);
	printf("[%20.2E]\n", 1.2e+10);
	printf("[%-20.2E]\n", 1.2e+10);

	// ����Ʈ�� 
	printf("[%g]\n", 3.141592); // �˾Ƽ� ���̸� ����..?

	// ���ڿ���
	printf("[%s]\n", string);
	printf("[%10s]\n", string); // 10�ڸ� ä��� ������ ����
	printf("[%-10s]\n", string); // 10�ڸ� ä��� ��������
	printf("[%2s]\n", string); // �ּ� 2�ڸ� ä���?
	printf("[%2.2s]\n", string); //�ּ� 2�ڸ� ä���, �ִ� 2�� ����?
	printf("[%3.2s]\n", string); //�ּ� 3�ڸ� ä���, �ִ� 2�� ���
	printf("[%010s]\n", string); // �ּ� 10�ڸ� ä���, 0���� ��ĭ ä���

	// ����Ʈ��
	printf("[%p]\n", &i);
	printf("[%p]\n", &pi);
}
*/

// 203) �ﰢ�� ����ϱ� (for)
/*
void main(void)
{
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++) 
		{
			printf("*");
		}
		printf("\n");
	}
}
*/

// 204) ���� �Է¹޾� Ȧ��/¦�� �����ϱ� (%)
/*
void main(void)
{
	int num;
	printf("���ڸ� �Է��ϼ���:");
	scanf("%d", &num);

	if (num%2==0) printf("%d�� ¦���Դϴ�.\n", num);
	else printf("%d�� Ȧ���Դϴ�.\n", num);
}
*/

// 205) 1~100���� Ȧ���� �� ���ϱ�
/*
void main(void)
{
	int i, hap = 0;

	for (i = 1; i <=100; i++) // repeat 101 times // ���..�� ���µ� �������� ���ؼ� i=1�� ���� ��...
	{
		if (i % 2) // 0�� �ƴ϶�� == Ȧ�����
		{
			hap += i;
		}
	}
	printf("1~100������ Ȧ���� ��: %d\n", hap);
}
*/

// 206) 21~50 ������ ���� �߻���Ű��
/*
#include <stdlib.h>
#include <time.h>

void main(void)
{
	int i, rand_num;

	srand(time(NULL));// 1970�����κ��� ���ݱ��� ���� �ʸ� ��ȯ -> �̰� seed�� ����

	for (i = 0; i < 10; i++)
	{
		rand_num = rand() % 30 + 21;
		printf("[%d]\n", rand_num);
	}
}
*/

// 207) ������ ���� ����ϱ� (&������)
/*
void main(void)
{
	int i = 127;
	int j;

	printf("%d, %x\n", i, i);
	printf("%#x\n", &i);
	printf("%#x\n", &j);
}
*/

// 208) �������� 16���� ���ڿ��� ��ȯ�ϱ� (itoa)
/*
#include <stdlib.h>

void main(void)
{
	char buff[100];
	int radix = 16;

	_itoa(10, buff, radix);
	puts(buff);

	_itoa(255, buff, radix);
	puts(buff);
}
*/

// 209) 2����/ 16���� ���ڿ��� ���������� ��ȯ�ϱ� (strtol)
/*
#include <stdlib.h>

void main(void)
{
	char string1[] = "1010";
	char string2[] = "ff";
	char* stop;
	long value;

	value = strtol(string1, &stop, 2); // stop�� �� ������
	printf("2�� ���ڿ� \"%s\"�� ������ �ٲٸ� %d�Դϴ�.\n", string1, value); 

	value = strtol(string2, &stop, 16);
	printf("16�� ���ڿ� \"%s\"�� ������ �ٲٸ� %d�Դϴ�.\n", string2, value);
}
*/

// 210) 2���� ���ڿ��� 16���� ���ڿ��� ��ȯ�ϱ� (strtol, itoa)
/*
#include <stdlib.h>

void main(void)
{
	int radix = 16; 
	int base = 2;
	char string[] = "10101011";
	char* stop;
	long value;
	char buff[100];

	value = strtol(string, &stop, base); //string�� �� �� ������ ��ȯ
	_itoa(value, buff, radix); // ��ȯ�� ������ �ٽ� ���ڿ��� ��ȯ�ؼ� ���ۿ� ����
	puts(buff);
}
*/
// 211) �ҹ��ڸ� �빮�ڷ� ��ȯ�ϱ� 
/*
#include <string.h>

void main(void)
{
	char string[] = "abcdefghijklmnopqrstuvwxyz"; //�������̰ų� �迭�̰ų�
	unsigned i, len;

	puts(string);

	len = strlen(string); // ���ڿ��� ���̸� ���� (null���� ������) == �迭 ���� -1

	for (i = 0; i < len; i++)
	{
		string[i] = string[i] & 0xDF;
	}

	puts(string);
}
*/

// 212) ��Ʈ ������ ����Ͽ� �������� 0���� �����
/*
void main(void)
{
	int i = -5;

	printf("i=%d\n", i);
	i = i ^ i;

	printf("i=%d\n", i);
}
*/

// 213) ��Ʈ ����Ʈ ������ ����Ͽ� ���� �����ϱ� (<<)
/*
void main(void)
{
	char value = 2;

	value = value << 1; // 1�ڸ� �̵� == *2
	printf("value: %d\n", value);
}
*/

// 214) ��Ʈ ����Ʈ ������ ����Ͽ� ������ �����ϱ� (>>) // ���������� �̵��ϸ� ������
/*
void main(void)
{
	char value = 4;
	value = value >> 1;
	printf("value:%d\n", value);
}
*/

// 215) ���ڿ����� Ư�� ���ڿ��� �ε��� ���ϱ� (strstr)
/*
#include <string.h>
void main(void)
{
	char string[] = "This is a book";
	char* pos;

	pos = strstr(string, "book"); // book�̶�� ���ڿ��� stirng �� ��ġ

	if (pos) // if(pos != NULL)
	{
		printf("book�� %d��°���� ã�ҽ��ϴ�.\n", pos-string); // pos�� 10�̰� string�� 0�̸� 10��°
		printf("%s\n", &string[pos-string]); // �޸��� �ּҰ� ��� ������ �𸣱� ������ string�� ���ش�
	}
}
*/

// 216) ���ڿ��� �޸��� �������� �и��ϱ� (strtok)
/*
#include <string.h>

void main(void)
{
	char string[] = "a12,b34,c56";
	char* token;

	token = strtok(string, ", ");//string tokeize

	while (token) // token�� 0�� �ƴ� �� ����
	{
		puts(token); // token�� ����ϰ�
		token = strtok(NULL, ", ");
	}
}
*/

// 217) ���ڿ��� �������� �и��Ͽ� ���� ���� ���ڿ��� ����� (strtok)
/*
#include <string.h>
void main(void)
{
	char string[] = "(a12),(b34),(c56)";
	char* token;

	token = strtok(string, "(123456),"); // ������ �� ���� ������ ���� ����

	while (token)
	{
		puts(token);
		token = strtok(NULL, "(123456),");
	}
}
*/

// 218) ���ڿ����� ���ڸ� �����س��� (isdigit)
/*
#include <ctype.h>
void main(void)
{
	char* string = "(02) 1111-2222";
	char buff[20] = { 0, };
	int i = 0;

	while (*string)
	{
		if (isdigit(*string)) //string�� ������ ������ �������� NULL�� �ƴ϶��
		{ 
			buff[i++] = *string; // �̹� �ּ��� ���� �ְ�
		}
		string++; // ���� �ּҷ�
	}
	puts(buff);
}*/

// 219) ���ڿ����� ���ĺ��� �����س��� (isalpha)
/*
#include <ctype.h>
void main(void)
{
	char* string = "temperature:200";
	char buff[20] = { 0, };
	int i = 0;

	while (*string) // null���� ����
	{
		if (isalpha(*string)) // ��ȯ
		{
			buff[i++] = *string;
		}
		string++;
	}
	puts(buff);
}
*/

// 220) ���ڿ����� �ѱ۸� �����س���
/*
void main(void)
{
	unsigned char* string = "���ѹα� Korea";
	unsigned char buff[20] = { 0, };
	int i = 0;

	while (*string) //string�� ���� null�� �ƴ� ��
	{
		if (*string>127)
		{
			buff[i++] = *string;
		}
		string++;
	}
	puts(buff);
}
*/

// 221) ���ĺ��� �ƴ� ù ������ ��ġ �����ϱ� (strspn)
/*
#include <string.h>
void main(void)
{
	char* string = "it's good";
	char* find = "abcdefghijklmnopqrstuvxyz";
	int nIndex;

	nIndex = strspn(string, find);// find�� ��ġ�� �ʴ� ù ������ ��ġ�� ��ȯ //���ĺ� �ҹ��ڰ� �ƴ� ù ���� ����� ��ġ
	printf("%d��ġ���� ���ĺ��� �ƴ� ù ���ڸ� ã�ҽ��ϴ�.\n", nIndex);
}
*/

// 222) ���ڿ����� ���ڰ� ���۵Ǵ� ��ġ �����ϱ� (strscspn)
/*
#include <string.h>

void main(void)
{
	char string[] = "���� 3����, �ڳ��� 5����, �罿 4����";
	char* find = "0123456789";
	int index; 

	index = strcspn(string, find); //strspn�� ��ġ���� �ʴ�, strcspn�� ��ġ�Ǵ� ù ����� �ּҸ� ��ȯ
	printf("%d��ġ���� ��ġ�Ǵ� ù ���ڸ� �߰��Ͽ����ϴ�.",index);
}
*/

// 223) ���ڿ��� Ư�� ���� ��ġ���� �߶󳻱� (strchr) // string chr?
/*
#include <string.h>

void main(void)
{
	char string[] = "a.book";
	char* pstr = string, * pfind = string;
	int i = 0;

	while (pfind)
	{
		pfind = strchr(pstr, 'a');

		if (pfind==NULL)
		{
			pfind - strchr(pstr, '.');
			if (pfind)
			{
				pstr = &string[++i];
			}
		}
		else
		{
			pstr = &string[++i];
		}
	}
	puts(pstr);
}
*/

// 224) ���ڿ��� �¿� ���� �����ϱ� (isspace)
/*
#include<string.h>
#include<ctype.h>

void main(void)
{
	char* string = " 123 ";
	char buff[20] = { 0, };
	int i = 0;

	printf("string�� ����: %d\n", strlen(string));

	while (*string)
	{
		if (!isspace(*string)) buff[i++] = *string; //������ �ƴϸ� string�� ��Ҹ� buff�� ����
		string++;
	}
	puts(buff);
	printf("string�� ����: %d\n", strlen(buff));
}
*/

// 225) ���ڿ��� �¿� Ư�� ���ڵ� �����ϱ� (strspn, strcspn)
/*
#include<string.h>
void main(void)
{
	char string[] = " .;;abc;;. ";
	char* sep = " .;";
	int nIndex1, nIndex2;

	nIndex1 = strspn(string, sep);
	nIndex2 = strcspn(&string[nIndex1], sep);
	(&string[nIndex1])[nIndex2] = 0;
	printf("%s\n", &string[nIndex1]);
}
*/

// 226) ���ڿ��� NULL�� ä���

// 226) ���ڿ��� NULL�� ä��� (strset)
/*
#include<string.h>
void main(void)
{
	char buff[] = "��ȣ�� Korea�Դϴ�.";

	puts(buff);
	_strset(buff, 0);
	printf("[%s]\n", buff);
}
*/

// 227) ���ڿ��� ù ���ڸ� �빮�ڷ� ��ȯ�ϱ�
/*
#include <string.h>
#include<ctype.h>
void main(void)
{
	char buff[] = "boy is man", * pos = buff;

	while (pos)
	{
		if (isalpha(buff[0]) && pos == buff) 
		{
			buff[0] &= 0xDF;
			pos++;
		}
		else if (pos=strpbrk(pos,""))
		{
			*++pos &= 0xDF;
		}
	}
	printf(buff);
}
*/

// 228) ���ڿ����� Ư�� ��ġ�� ���� ��ü�ϱ� (strnset)
/*
#include<string.h>

void main(void)
{
	char string[] = "��ȣ�� Korea�Դϴ�.";
	char* pstr;

	pstr = strstr(string, "Korea"); //�˻��ϱ�

	if (pstr)
	{
		_strnset(pstr, '*', 5); //5��ŭ *�� ��ü
	}
	puts(string);
}
*/

// 229) ���ڿ��� ���� �ӽ� ����� ����� (strdup)
/*
#include<string.h>
#include<malloc.h>

void main(void)
{
	char buff[] = "���ڿ� �����ϱ�";
	char* dup;

	dup = _strdup(buff); // ���������� malloc�Լ��� ����ϴµ�? // string duplicate
	if (dup)
	{
		strcpy(buff, "�ٸ� ���ڿ�");
		puts(buff);
		puts(dup);
		free(dup);
	}
}
*/

// 230) �޸𸮸� 1MB �Ҵ��ϰ� �����ϱ� (malloc, free)
/*
#include<string.h>
#include<malloc.h>

void main(void)
{
	char* pbuf;

	pbuf = malloc(100 * 10000); // ������ ����..?

	if (pbuf)
	{
		memset(pbuf, 0, 100 * 10000);
		strcpy(&pbuf[0], "����� ��õ�� ��");
		puts(&pbuf[9]);
		free(pbuf);
	}
}
*/

// 231) �޸𸮸� 100MB �Ҵ��ϰ� �����ϱ�
/*
#include<string.h>
#include<malloc.h>

#define MEGA_BYTE 1048576

void main(void)
{
	char* pbuf;

	pbuf = malloc(100 * MEGA_BYTE);

	if (pbuf)
	{
		memset(pbuf, 0, 100 * MEGA_BYTE);

		strcpy(&pbuf[0], "����� ��õ�� ��"); // pbuf�� 0���� ����
		puts(&pbuf[0]);

		strcpy(&pbuf[104857500], "�λ�� ������ ������");
		puts(&pbuf[104857500]);

		free(pbuf);
	}
}
*/

// 232) void�� �����͸� ����� �پ��� �迭 �����ϱ�
/*
void array_copy(void* dest, const void* src, int size);

void main(void)
{
	char array1[100] = "array of char";
	char array2[100] = { 0, };
	int array3[5] = { 1,2,3,4,5 };
	int array4[5] = { 0, };

	printf("array1: [%s]\n", array1);
	printf("array2: [%s]\n", array2);
	printf("array3: [%d]\n", array3[0]);
	printf("array4: [%d]\n", array4[0]);

	array_copy(array2, array1, sizeof(array1));
	array_copy(array4, array3, sizeof(array3));

	printf("array1: [%s]\n", array1);
	printf("array2: [%s]\n", array2);
	printf("array3: [%d]\n", array3[0]);
	printf("array4: [%d]\n", array4[0]);

}

void array_copy(void* dest, const void* src, int size) // ������ ����, ��� ������, ����
{
	while (size--)
	{
		*(char*)dest = *(char*)src;
		((char*)dest)++;
		((char*)src)++;
	}
}
*/

// 233) �ؽ�Ʈ ������ �� �پ� ���� (fopen, fputs, fclose)
/*
void main(void)
{
	FILE* fp;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp != NULL)
	{
		fputs("���ѹα�\n", fp);
		fputs("���ѹα�\n", fp);
		fputs("���ѹα�\n", fp);
		fputs("���ѹα�\n", fp);
		fputs("���ѹα�\n", fp);

		fclose(fp);
	}
}
*/

// 234) �ؽ�Ʈ ������ �� �پ� �б� (fgets)
/*
void main(void)
{
	FILE* fp;
	char buff[100];

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp != NULL)
	{
		while (!feof(fp)) //EOF�� �ƴ� ��
		{
			fgets(buff, 100, fp);
			printf(buff);
		}
	}

	fclose(fp);
}
*/

// 235) �ؽ�Ʈ ���� ���� (fwrite)
/*
void main(void)
{
	FILE* fp;
	char* string = "�츮����\n";

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp != NULL)
	{
		fwrite(string, 1, strlen(string), fp);//string�� �ִ� ������ ���� ��. �� ��� ũ��� 1����Ʈ(char). string�� ���̸�ŭ, fp��
		fwrite(string, 1, strlen(string), fp); 
		fwrite(string, 1, strlen(string), fp);
		fclose(fp);
	}
}
*/

// 236) �ؽ�Ʈ ���� �б� (fread)
/*
void main(void)
{
	FILE* fp;
	char buff[100] = { 0, };
	int len;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp !=NULL)
	{
		while (!feof(fp)) 
		{
			len = fread(buff, 1, 9, fp); //����, ��� ũ��, ����, ��Ʈ��
			if (ferror(fp) || len < 9) break;
			printf("read: %d, %s", len, buff); //len���� ����� ������ ����� (����)
		}
	}
	else
	{
		puts("����");
	}

	fclose(fp);
}
*/

// 237) ���� ���� ���� (fwrite)
/*
void main(void)
{
	FILE* fp;
	char buff[5];
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.bin", "w+b");

	buff[0] = '@';
	buff[1] = 0;
	buff[2] = 0x01;
	buff[3] = 0x03;
	buff[4] = 0x61;

	if (fp != NULL)
	{
		fwrite(buff, 1, 5, fp);
		fclose(fp);
	}
}
*/

// 238) ���� ���� �б� (fread)
/*
void main(void)
{
	FILE* fp;
	char buff;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.bin", "rb");

	if (fp != NULL)
	{
		while (!feof(fp))
		{
			fread(&buff, 1, 1, fp);//fp���� �о�� ���� buff�� ����
			if (!feof(fp)) printf("%d(%#x)\n", buff, buff);
		}
	}
	fclose(fp);

}
*/

// 239) ������ �ٸ� ���͸��� �̵��ϱ� (rename)
/*
void main(void)
{
	char* filename = "C:\\Users\\sumin\\Downloads\\file.txt";
	char* movefile = "C:\\temp\\file.txt";

	if (rename(filename,movefile) != 0) //������ �̵���Ų ����� 0�� �ƴ϶�� (���� �� 0��ȯ)
	{
		perror("���� �̵� ����");
	}
	else
	{
		puts("������ �̵��Ǿ����ϴ�.");
	}
}
*/

// 240) ���� �����ϱ� (fread, fwrite)
/*
void main(void)
{
	FILE* fpR, * fpW;
	char buff;
	int len;

	fpR = fopen("C:\\Users\\sumin\\Downloads\\file.bin", "rb");

	if (fpR == NULL)
	{
		perror("���� �б� ���� ����");
		return;
	}

	fpW = fopen("C:\\Users\\sumin\\Downloads\\file_copy.bin", "w+b");

	if (fpW == NULL)
	{
		perror("���� ���� ���� ����");
		fclose(fpR);
		return;
	}

	while (!feof(fpR))
	{
		len = fread(&buff, 1, 1, fpR);

		if (ferror(fpR))
		{
			perror("���� �б� ����");
			_fcloseall();
			return;
		}

		if (len > 0) //if(!feof(fpR))
		{
			fwrite(&buff, 1, 1, fpW);
			if (ferror(fpW))
			{
				perror("���� ���� ����");
				_fcloseall();
				return;
			}
		}
	}

	_fcloseall();

	puts("������ ���������� �����Ͽ����ϴ�.");
}
*/

// 241) �� ���� ���� ��ġ��
/*
#define FILEREAD 4096
void main(void)
{
	FILE* fpR1, * fpR2, * fpW;
	char buff[FILEREAD];
	int len;

	fpR1 = fopen("C:\\Users\\sumin\\Downloads\\file.bin", "rb");

	if (fpR1 == NULL)
	{
		perror("���� �б� ���� ����");
		return;
	}

	fpR2 = fopen("C:\\Users\\sumin\\Downloads\\file_copy.bin", "rb");

	if (fpR2 == NULL)
	{
		perror("���� �б� ���� ����");
		_fcloseall();
		return;
	}

	fpW = fopen("C:\\Users\\sumin\\Downloads\\file2.bin", "w+b");
	if (fpW == NULL)
	{
		perror("���� ���� ���� ����"); 
		_fcloseall();
		return;
	}

	while (!feof(fpR1))
	{
		len = fread(buff, 1, FILEREAD, fpR1); //���� ������ ���ۿ� ����
		if (ferror(fpR1))
		{
			perror("���� �б� ���� 1");
			_fcloseall();
			return;
		}

		if (len > 0)
		{
			fwrite(buff, 1, len, fpW);
			if (ferror(fpW))
			{
				perror("���� ���� ���� 1");
				_fcloseall();
				return;
			}
		}
	}

	while (!feof(fpR2))
	{
		len = fread(buff, 1, FILEREAD, fpR2);
		if (ferror(fpR2))
		{
			perror("���� �б� ���� 2");
			_fcloseall();
			return;
		}

		if (len > 0) //���� �б⿡ �������� ���� ���
		{
			fwrite(buff, 1, len, fpW);
			if (ferror(fpW))
			{
				perror("���� ���� ���� 2");
				_fcloseall();
				return;
			}
		}
	}

	_fcloseall();

	puts("������ ���������� ���������ϴ�.");
}
*/

// 242) ���Ͽ��� Ư�� ���ڿ� �˻��ϱ� (strstr)
// ��...
/*
#include<string.h>

void main(void)
{
	FILE* fp, *fpW;
	char buff[200];
	int line = 1;

	fpW = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");
	if (fpW == NULL)
	{
		perror("���� ���� ���� ����");
		return;
	}
	else
	{
		fputs("���ѹα��� �౸�� �����Ѵ�.", fpW);
	}

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");
	if (fp == NULL)
	{
		perror("���� �б� ���� ����");
		return;
	}


	while (!feof(fp))
	{
		fgets(buff, 200, fp); //fp���� 200��ŭ �о���� buff�� ����

		if (strstr(buff,"���ѹα�"))
		{
			printf("Line(%2d): %s\n", line, buff);
		}
		line++;
	}
	_fcloseall();
}
*/

// 243) ���Ͽ��� Ư�� ���ڿ� ��ü�ϱ�
/*
#include<string.h>
#include<stdlib.h>
#include<malloc.h>

void main(void)
{
	FILE *fpR, * fpW;
	char buff[200];
	char *pbuf, *dup;
	int len, pos1, pos2;

	fpR = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");// ���� �б� ���� ����
	if (fpR == NULL) // ��Ʈ���� ����� ����Ǿ����� Ȯ���ϱ�
	{
		perror("���� �б� ���� ����");
		return;
	}


	fpW = fopen("C:\\Users\\sumin\\Downloads\\file_change.txt", "w+"); // ���� ���� ����
	if (fpW == NULL) // ��Ʈ���� ����Ǿ����� Ȯ���ϱ�
	{
		perror("���� ���� ���� ����");
		_fcloseall();
		return;
	}

	while (!feof(fpR)) // ������ ���� �ƴ� ����
	{
		fgets(buff, 200, fpR); // fpR���� 200��Ҹ�ŭ �����͸� �о�ͼ� ���ۿ� ����
		pbuf = strstr(buff, "���ѹα�"); // ������ 1��ȯ? ��ġ ��ȯ? 
		// strstr�� ���? buff���� ""���ѹα�"�� �˻�(���Ե� ���� ��� �˻�)
		// ��ȯ��: �˻� ��Ұ� ���� ó�� ���� ��ġ
		// ���ѹα��� �˻��� ��ġ (�迭���� �� ��°������ �ƴ�, �� �ּ� ��ȯ)

		if (pbuf) // �˻� ��Ұ� ������ ��ġ�� NULL�� �ƴ϶�� (�����ϱ� �Ѵٸ�) //if���� 0�� 1�� �������� �Ǻ��Ѵٰ� �ߴµ�, �� 0�� 1�� NULL�� �����ΰ�? �ƴϸ� ���� ���� 0�� �����ΰ�? ���� ���ΰ�?
		{
			len = strlen(buff); // ���� ���ڿ��� ����
			pos1 = pbuf - buff; 

			dup = _strdup(buff); // ���ۿ� �ִ� ���� �ӽ� �޸𸮸� �Ҵ��Ͽ� �����ϰ� �� �ּҸ� dup�� ����
			_strnset(&buff[pos1], 0, len-pos1);
			strcat(buff, "�ѱ�");

			pos1 = pbuf - buff + strlen("���ѹα�"); // pos1�� ó������ �˻��� ���ڿ��� ������ ��ġ�� ����Ų��
			pos2 = pbuf - buff + strlen("�ѱ�"); 

			strcpy(&buff[pos2], &dup[pos1]);
			free(dup);
		}

		
		fputs(buff, fpW);
		
	}
	_fcloseall();
	puts("���ѹα��� ��� �ѱ����� ��ü�Ͽ����ϴ�.");
}
*/

// ����
/*
void main(void)
{
	FILE* fpR;
	char buff[200];
	fpR = fopen("C:\\Users\\sumin\\Downloads\\file_change.txt", "r");

	if (fpR == NULL)
	{
		perror("Failed to open file in reading mode");
		fclose(fpR);
		return; //�̰� �� ���°ɱ�...
	}

	while (!feof(fpR)) //feof�� EOF�� 0�� ��ȯ
	{
		fgets(buff, sizeof(buff), fpR);

		puts(buff);
	}

	fclose(fpR);
}
*/

// 244) ��/��/�� ��:��:�� ����ϱ� (time, localtime)
/*
#include <time.h>

void main(void)
{
	FILE* fp;
	char buff[200];
	time_t now; // time_t ��ü ����..�̰� ����..?
	struct tm t; // tm ��ü�� ����..�̰� �� ����?

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp == NULL)
	{
		perror("���� ���� ���� ����");
		_fcloseall();
		return;
	}

	now = time(NULL); 
	t = *localtime(&now); // tm��ü t�� now�� localtime���� ��ȯ�� ���� ����

	sprintf(buff, "%d/%d/%d %d:%d:%d",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);

	fputs(buff, fp);
	_fcloseall();

	puts(buff);
	puts("�ð��� C:\\Users\\sumin\\Downloads\\file.txt�� �����Ͽ����ϴ�.");
}
*/

// 245) ����Ϸκ��� ���ñ����� ����� �� ���ϱ� (mktime)
/*
#include <time.h>

#define DAYSEC (24*60*60) // 60�� * 60�� * 24�ð�

void main(void)
{
	time_t n1, n2;
	struct tm t1, t2;
	double elapsed;

	t1.tm_year = 101; // 2003�� -> ���� ������ 1900����
	t1.tm_mon = 8 - 1;  //���� �ε��� ������ ���� ��-1
	t1.tm_mday = 30;
	t1.tm_hour = 0;
	t1.tm_min = 0;
	t1.tm_sec = 0;

	n1 = time(NULL);
	t2 = *localtime(&n1); //t2���� ���� �ð��� ����

	n1 = mktime(&t1); //mktime�� tm��ü�� �ּҸ� �޾ƿ´�
	n2 = mktime(&t2);

	n2 = n2 - n1; // ���� �ð��� n2���� �¾ �ð��� n1�� ����
	elapsed = (double)(n2 / DAYSEC); // �� �ð��� �Ϸ�� ������

	printf("�������� �¾ �� %.f��° �Դϴ�.", elapsed);
}
*/

// 246) �� ���� ������ ��¥ ���ϱ� (mktime)
/*
#include<time.h>
#define DAYSEC 86400L

void main(void)
{
	int i;
	time_t now;
	struct tm t1, t2;
	int n1, n2, last;

	now = time(NULL);
	t1 =*localtime(&now); // ���� �ð�
	t1.tm_mday = 1; // 1��
	t2 = t1; // t2�� ���� �ð��� ��¥�� 1�Ϸ� �ٲ� ��
	
	for (i = 0; i < 11; i++)
	{
		t1.tm_mon = i;
		t2.tm_mon = i + 1; // ����� �� �� ����
		n1 = mktime(&t1); // n1�� t1�� �ð����� �ٲ㼭 ����
		n2 = mktime(&t2); // �� �� ���� �ð��� ����
		last = (n2 - n1) / DAYSEC; //��,��,�ʷ� ������ �ϼ��� ���� ��
		printf("%d�� %2d���� ������ ��¥�� %d���Դϴ�.\n", t1.tm_year + 1900, t1.tm_mon+1, last);
	}
	

	t1.tm_mon = 1; // 2�� 1��
	t2.tm_mon = 2; // 3�� 1��
	n1 = mktime(&t1);
	n2 = mktime(&t2);
	last = (n2 - n1) / DAYSEC; //ó���� ��� �ʷ� ������ ������ �Ϸ縦 �����ϴ� �ʸ�ŭ�� ���� ������� �� ������ ��
	printf("�ϼ�: %d\n", last); // 3�� 1�Ͽ��� 2�� 1���� ���� 29��
}
*/

// 247) D-Day ���ϱ� (mktime)
/*
#include<time.h>
#define DAYSEC 86400L

void main(void)
{
	time_t now;
	struct tm t, dday = { 0,0,0,8,8,2024 }; //��,��,��, 2020�� 9�� 8�� -> tm����ü�� ���ǵ� ����
	int n1, n2, nDday;

	now = time(NULL);
	t = *localtime(&now);

	dday.tm_year -= 1900;
	dday.tm_mon -= 1; 
	// ���� �ʱ� ���� 

	t.tm_hour = 0;
	t.tm_min = 0;
	t.tm_sec = 0; 
	// ���� �ð� 0���� ���߱�

	n1 = mktime(&t);
	n2 = mktime(&dday); 
	// �ð��� ������

	nDday = (n2 - n1) / DAYSEC; //����ϼ�

	printf("������ ��¥�� %s\n", ctime(&now)); //ctime==current time
	printf("�������ǻ���: %d�� ���ҽ��ϴ�.(%d %d %d)\n",nDday, dday.tm_year+1900, dday.tm_mon+1,dday.tm_mday);

}
*/

// 248) ���� ��¥�κ��� ũ�������������� ���� �ð� ���ϱ�
/*
#include<time.h>
#define DAYSEC (60*60*24)

void main(void)
{
	time_t now, n1, n2, nChristmas; // ���� �ð��� �ӽ� ������ ����
	struct tm t, christmas = { 0,0,0,25,12,2024 }; //���� ũ�������� ��¥
	//int n1, n2, nChristmas; //�ð��� ������ ����

	now = time(NULL);
	t = *localtime(&now);

	christmas.tm_year -= 1900;
	christmas.tm_mon -= 1;
	// ȣȯ���� �ֵ��� ǥ�� �������� ����

	n1 = mktime(&t);
	n2 = mktime(&christmas);

	nChristmas = (n2 - n1); //ũ������������ ���� �ð� �� ������ (=time_t �� ����)
	christmas = *localtime(&nChristmas); //ũ������������ ���� �ð��� tm���·� ��ȯ

	printf("������ ��¥�� %s\n", ctime(&now));
	printf("ũ������������ ���� �ð�: %d���� %d�� %d�ð� %d�� %d���Դϴ�.\n", christmas.tm_mon,
		christmas.tm_mday, christmas.tm_hour, christmas.tm_min, christmas.tm_sec);
}
*/

// 249) ���� ��¥�� ������ ��¥ ���ϰ� ����
/*
#include<time.h>
void main(void)
{
	time_t now;
	struct tm t, tb;

	now = time(NULL);
	t = *localtime(&now);

	tb = t;

	t.tm_mon += 100;
	t.tm_mday += 90;
	t.tm_hour += 80;

	mktime(&t); //���� ����ü ���� ��¥�� �°� �ڵ� ��ȯ

	printf("���� ��¥�� %d/%d/%d %d:%d:%d�Դϴ�.\n",
		tb.tm_year + 1900, tb.tm_mon + 1, tb.tm_mday, tb.tm_hour, tb.tm_min, tb.tm_sec);
	printf("100���� 90�� 80�ð��� ���� ��¥�� %d/%d/%d %d:%d:%d�Դϴ�.\n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);

	tb.tm_mon -= 100;
	tb.tm_mday -= 90;
	tb.tm_hour -= 80;

	mktime(&tb);
	printf("100���� 90�� 80�ð��� �� ��¥�� %d/%d/%d %d:%d:%d�Դϴ�.\n",
		tb.tm_year + 1900, tb.tm_mon + 1, tb.tm_mday, tb.tm_hour, tb.tm_min, tb.tm_sec);
}
*/

// 250) ũ���������� ���� ���ϱ�
/*
#include<time.h>
void main(void)
{
	struct tm christmas = { 0,0,0,25,12,2024 };
	char* wday[] = { "��", "��","ȭ", "��","��","��","��" };
	char buff[100];

	mktime(&christmas); //tm���� time_t���� ����
	strftime(buff, sizeof(buff), "2024�� 12�� 25���� %A�Դϴ�.", &christmas);

	puts(buff);
	printf("2024�� 12�� 25���� %s���� �Դϴ�.", wday[christmas.tm_wday]);
}
*/

// 251) ���� ǥ�� �ÿ� ���� ǥ�� ���� �ð� �� ���ϱ� (localtime)
/*
#include<time.h>

void main(void)
{
	time_t now, n1, n2;
	struct tm t1, t2;

	time(&now);
	t1 = *localtime(&now);
	t2 = *gmtime(&now);

	n1 = mktime(&t1);
	n2 = mktime(&t2);

	printf("���� ǥ�� �ÿ� ���ѹα��� �ð� ����: %g �ð�\n", difftime(n1, n2) / 3600);//�� ������ �ð� ������ ��ȯ
}
*/

// 252) 5�ʰ� �����ϴ� �Լ� �����ϱ� (clock)
/*
#include<time.h>

void sleep(int sec);

void main(void)
{
	time_t n1, n2;

	time(&n1);
	sleep(5);
	time(&n2);

	printf("%g�ʰ� �����Ǿ����ϴ�.\n", difftime(n2, n1));

}

void sleep(int sec)
{
	clock_t ct;
	ct = clock();
	while (ct + CLK_TCK * sec > clock());
}
*/

// 253) �� �ð� ���� ���� ���ϱ�(mktime)
/*
#include<time.h>
void main(void)
{
	struct tm t1, t2;
	int n1, n2, n3;

	t1.tm_year = 2020 - 1900;
	t1.tm_mon = 6 - 1;
	t1.tm_mday = 15;
	t1.tm_hour = 1;
	t1.tm_min = 12;
	t1.tm_sec = 50;

	t2.tm_year = 2020 - 1900;
	t2.tm_mon = 6 - 1;
	t2.tm_mday = 15;
	t2.tm_hour = 3;
	t2.tm_min = 35;
	t2.tm_sec = 22;

	n1 = mktime(&t1);
	n2 = mktime(&t2);

	n3 = n2 - n1;

	printf("�ð�1: %4d-%02d-%02d %02d:%02d:%02d\n",
		t1.tm_year + 1900, t1.tm_mon + 1, t1.tm_mday, t1.tm_hour, t1.tm_min, t1.tm_sec);
	printf("�ð�2: %4d-%02d-%02d %02d:%02d:%02d\n",
		t2.tm_year + 1900, t2.tm_mon + 1, t2.tm_mday, t2.tm_hour, t2.tm_min, t2.tm_sec);

	printf("�ð� ����: %d:%d:%d\n",
		n3 / 3600, (n3 % 3600) / 60, n3 % 60);
}
*/

// 254) �� ��¥ ���� ���� ���ϱ�(mktime)
/*
#include<time.h>
void main(void)
{
	struct tm t1, t2, t3;
	time_t n1, n2, n3;

	t1.tm_year = 2020 - 1900;  //���ϴ� ���� - 1900
	t1.tm_mon = 6 - 1; //���ϴ� �� -1
	t1.tm_mday = 23;
	t1.tm_hour = 1;
	t1.tm_min = 12;
	t1.tm_sec = 50;

	t2.tm_year = 2020 - 1900;  //���ϴ� ���� - 1900
	t2.tm_mon = 8 - 1; //���ϴ� �� -1
	t2.tm_mday = 19;
	t2.tm_hour = 3;
	t2.tm_min = 35;
	t2.tm_sec = 22;

	n1 = mktime(&t1);
	n2 = mktime(&t2);

	n3 = n2 - n1; 

	t3 = *gmtime(&n3); //n3�� tm������ ��ȯ + ǥ�ؽð����� ��ȯ
	t3.tm_year -= 70; // ���� �ʱ�ȭ

	
	printf("��¥1: %4d-%02d-%02d %02d:%02d:%02d\n",
		t1.tm_year + 1900, t1.tm_mon + 1, t1.tm_mday, t1.tm_hour, t1.tm_min, t1.tm_sec);
	printf("��¥2: %4d-%02d-%02d %02d:%02d:%02d\n",
		t2.tm_year + 1900, t2.tm_mon + 1, t2.tm_mday, t2.tm_hour, t2.tm_min, t2.tm_sec);

	printf("��¥ ����: %4d-%02d-%02d %02d:%02d:%02d\n",
		t3.tm_year, t3.tm_mon , t3.tm_mday, t3.tm_hour, t3.tm_min, t2.tm_sec);


}
*/

// 255) ������ ����� ��¥ �� ���ϱ�(localtime)
/*
#include<time.h>
void main(void)
{
	time_t now;
	struct tm t;

	now = time(NULL);
	t = *localtime(&now);

	printf("������ ����� ��:%d\n", t.tm_yday);
}
*/

// 256) ������ ����� ���� �� ���ϱ� (strtime)
/*
#include<time.h>
void main(void)
{
	time_t now;
	struct tm t;
	char buff[100];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "������ ����� ��: %U\n", &t);

	puts(buff);
}
*/

// 257) ������ ���� ���ϱ�
/*
#include<time.h>
void main(void)
{
	time_t now;
	struct tm t;
	char buff[100];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "����: %A\n", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "����: %a\n", &t);
	puts(buff);
	printf("%d\n", t.tm_wday);
}
*/

// 258) ����/���� ǥ���ϱ�
/*
#include<time.h>
#include<string.h>
void main(void)
{
	time_t now;
	struct tm t;
	char buff[100], AMPM[10];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S ", &t); //�̷��Ը� ������ ���� ����!
	puts(buff);
	
	strftime(AMPM, sizeof(AMPM), "%p", & t);
	puts(AMPM);

	if (strcmp(AMPM,"AM") == 0)
	{
		strcpy(AMPM, "����");
	}
	else if (strcmp(AMPM,"PM")== 0)
	{
		strcpy(AMPM, "����");
	}
	strcat(buff, AMPM);

	puts(buff);
}
*/

// 259) AM/PM ǥ���ϱ� (�ý��� ������ �ѱ��� ��� ����� ��ȯ)
/*
#include<time.h>
#include<string.h>
void main(void)
{
	time_t now;
	struct tm t;
	char buff[100], AMPM[10];

	now = time(NULL);
	t = *localtime(&now); //locatime�Լ��� ���ڷδ� ������ �Ǵ� �ּҸ� �Է��ؾ� ��

	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S ", &t); //�̷��Ը� ������ ���� ����!
	puts(buff);

	strftime(AMPM, sizeof(AMPM), "%p", &t);
	puts(AMPM);

	if (strcmp(AMPM, "����") == 0)
	{
		strcpy(AMPM, "AM");
	}
	else if (strcmp(AMPM, "����") == 0)
	{
		strcpy(AMPM, "PM");
	}
	strcat(buff, AMPM);

	puts(buff);
}
*/

// 260) ���ڿ��� �� ��¥�� time_t�������� ��ȯ�ϱ� (atoi, mktime)
/*
#include<time.h>
#include<stdlib.h>

void main(void)
{
	char date[] = "2020-06-23";
	time_t now;
	struct tm t = { 0, };

	t.tm_mday = atoi(&date[8]); date[7] = 0;
	t.tm_mon = atoi(&date[5]) - 1; date[4] = 0;
	t.tm_year = atoi(&date[0]) - 1900; //ǥ������ ����ϱ� ���� ���� ������
	//���ڷ� ���� 

	now = mktime(&t);
	printf("2020-06-23�� time_t�� ��ȯ�ϸ� %d�Դϴ�.\n", now);
}
*/

// 261) ���ڿ��� �� ��¥�� struct tm �������� ��ȯ�ϱ�
/*
#include<time.h>
#include<stdlib.h>
void main(void)
{
	char date[] = "2020-06-23 02:09:21";
	struct tm t = { 0, };

	t.tm_sec = atoi(&date[17]); date[16] = 0;
	t.tm_min = atoi(&date[14]); date[13] = 0;
	t.tm_hour = atoi(&date[11]); date[10] = 0;
	t.tm_mday = atoi(&date[8]); date[7] = 0;
	t.tm_mon = atoi(&date[5])-1; date[4] = 0;
	t.tm_year = atoi(&date[0])-1900;

	mktime(&t); //��¥ �������� ��ȯ
	printf("struct tm��ȯ �� ��¥: %4d-%02d-%02d %02d:%02d:%02d\n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec);
}
*/

// 262) ��¥ �� �ð��� �پ��� ������� ����ϱ� (_ftime)
/*
#include<time.h>
#include<sys/timeb.h>

void main(void)
{
	struct _timeb tb;
	struct tm t;
	char buff[100];

	_ftime(&tb);

	t = *localtime(&tb.time);

	printf("%4d-%d-%d %d:%d:%d.%d\n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour, t.tm_min, t.tm_sec, tb.millitm);

	printf(ctime(&tb.time));
	printf(asctime(&t)); //ascii 
	puts(_strdate(buff));
	puts(_strtime(buff));
	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%M:%S %p (%a)", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "%#Y-%#m-%#d %#H:%#M:%#S ", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "%c", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "%x %X", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "%c", &t);
	puts(buff);
	strftime(buff, sizeof(buff), "%#x", &t);
	puts(buff);
}
*/

// 263) �߱� ���� �����
/*
#define _CRT_SECURE_NO_WARNINGS
#include<time.h> // time
#include<stdlib.h> //srand, rand
#include<memory.h> //memset

void main(void)
{
	int com[3] = { 0, };
	int gamer[3] = { 0, };
	int guess[10] = { 0, };
	int count, i; 
	int strike, ball;
	char yesno='y';

	srand(time(NULL)); // ���� �Լ��� ���� ����
	puts("�߱� ������ �����մϴ�.");

	while (1)
	{
		com[0] = rand() % 10; // rand() �Լ��� ��ȯ�ϴ� ���� 0~32767 
		com[1] = rand() % 10; // 10���� ���� ������ == 10���� ���� �� =
		com[2] = rand() % 10;
		// com���� ���� 3���� ����
		count = 1;

		printf("���� ����: %d %d %d\n", com[0], com[1], com[2]);

		if (com[0] == com[1] || com[0] == com[2] || com[1] == com[2]) //���ڰ� ��ġ�� ���
		{
			continue;
		}

		puts("0~9 ������ ���ڸ� �������� �и��Ͽ� 3�� �Է��ϰ� ����Ű�� ġ����!");
		memset(guess, 0, sizeof(guess)); // guess�� ũ�⸸ŭ �޸� �Ҵ�

		while (1)
		{
			strike = 0; ball = 0; //strike�� ball��� �ʱ�ȭ

			for (i = 0; i < 10; i++)
			{
				printf("%d ", guess[i]); // �̰� ��...?
			}
			printf("[0~9] ������ ���ڸ� 3�� �Է��ϼ���: ");
			scanf("%d %d %d", &gamer[0], &gamer[1], &gamer[2]);
			
			for (i = 0; i < 3; i++)
			{
				if (com[i] == gamer[i]) strike++;
			}
			if (com[0] == gamer[1] || com[0] == gamer[2]) ball++;
			if (com[1] == gamer[0] || com[1] == gamer[2]) ball++;
			if (com[2] == gamer[0] || com[2] == gamer[1]) ball++;

			if (gamer[0] > 9 || gamer[1] > 9 || gamer[2] > 9)
			{
				puts("�Է��� ���ڰ� �ʹ� Ů�ϴ�. 0~9�� �Է��ϼ���.");
				continue;
			}

			for (i = 0; i < 3; i++)
			{
				guess[gamer[i]] = gamer[i];
			}

			printf("\n[%2dȸ] %d ��Ʈ����ũ %d��\n\n", count, strike, ball);
			if (strike == 3) break;
			count++;

		}
		getchar();
		printf("������ ����Ͻðڽ��ϱ� (y/n)?\n");
		scanf("%c", &yesno); //yesno�� ����//yesno�� char�� ����

		if (yesno == 'N' || yesno == 'n') break;
		// yesno�� n�̸� break
	}
}
*/

// 264) ���� �����ϱ�
/*
#include<string.h>
#include<stdlib.h>

#define STACK_MAX 100

int push(int value); // �Լ� ����
int pop(int* value);

typedef struct tagStack
{
	int array[STACK_MAX];
	int top;
	int bottom;
}STACK;

STACK s;

void main(void)
{
	char buff[100], tmp[100]; //declare two buffers to save data
	char* op = "+-* /%"; //���ڿ� ��� (string literals?)
	int index;
	int value1 = 0, value2 = 0;

	s.top = STACK_MAX; //top���� �̸� �ִ밪�� �����صα�

	puts("X+Y �������� ������ �Է��ϰ� ����Ű�� ġ����.");
	puts("�ƹ��͵� �Է����� ������ ����� ����˴ϴ�.");

	for (;;)
	{
		printf("����: ");
		gets(buff); // ������ �Է� �޾Ƽ� buff�� ����

		if (strlen(buff) == 0) break; 

		memset(tmp, 0, sizeof(tmp));

		index = strcspn(buff, op); // returns the length of inital segment of buff that does not contain characters from op
		// index == the number of digits in a number, the index of the operator
		// index�� �������� �ε��� ����

		// "2+3"���� buff[index] == "+" // index==1�̱� ����
		memcpy(tmp, buff, index); // tmp�� ù ��° �ǿ����� ���� 
		// index��ŭ �����ϸ� ù��° ����� "2"�� ����� // buff[index-1]�� ����
		
		value1 = atoi(tmp); // tmp�� ����� 2�� ���ڷ� ��ȯ
		value2 = atoi(&buff[index + 1]); // "+" ������ ���� ������ "3"���� ������ (���⼱ ����) ���ڷ� ��ȯ

		// 2, +, 3
		// value1, buff[index], value2

		switch (buff[index]) //�������� ���
		{
			case '+': value1 += value2; break;
			case '-': value1 -= value2; break;
			case '*': value1 *= value2; break;
			case '/': value1 /= value2; break;
			case '%': value1 %= value2; break;
			default:
				puts("�߸��� �����ڸ� ����Ͽ����ϴ�.");
				continue; //switch�� �ݺ�
		}
		// value1���� ������ ���� ����� ����Ǿ� ���� -> "2+3=5"
		// value1==5

		if (push(value1) == -1) //top-1�� value1�� �����ϰ� ��ȯ���� -1���� �˻�
		{
			puts("�� �̻� ������ �� �����ϴ�.");
			break;
		}
		printf("%s = %d, s.top = %d\n", buff, value1, s.top); // ���� top�� 99
	}

	value1 = 0;

	for (;;)
	{
		if (pop(&value2) == -1) { //value2�� 
			break;
		}
		value1 += value2;
	}
	printf("�Ի��� ������ %d�Դϴ�\n", value1);
}

int push(int value)
{
	s.array[--s.top] = value; // save value starting at the last(or TOP) element of the array
	//�׻� top�� ���ں��� 1 ���� �ε����� ���� (�ε����� ������ 0�̱� ����)
	if (s.top == 0) return -1;
	return 0; //��ȯ�� 0 -> doesn't do much on the program itself
}

int pop(int* value)
{
	if (s.top == STACK_MAX) return -1; // if var is already at its maximum, return -1
	*value = s.array[s.top++]; // �������� value�� ���� top�� �ִ� ����� ���� �ֱ� // �ٵ�...���������� �ص� �ǳ�..?
	return 0;
}
*/

// 265) ť �����ϱ� 
/*
#include<string.h>
#include<stdlib.h>

int add(int value);
int delete(int* value);

#define QUEUE_MAX 100

typedef struct tagQueue
{
	int array[QUEUE_MAX];
	int front;
	int rear;
}QUEUE;

QUEUE q; // ����ü ���� ����

void main(void)
{
	char buff[100], tmp[100];
	char* op = "+-*%/";
	int index;
	int value1 = 0, value2 = 0;

	q.front = q.rear = 0; //��.. �� �ٿ�..

	puts("������ 1+2ó�� �Է��ϰ� ����Ű�� ġ����!");
	puts("�ƹ��͵� �Է����� ������ ����� ����˴ϴ�.");

	for (;;)
	{
		printf("����:");
		gets(buff);

		if (strlen(buff)== 0 ) break; // ���⼭ �����. ������ �� �־��� ����!!

		memset(tmp, 0, sizeof(tmp));

		index = strcspn(buff, op); //ó�� ��ġ�ϴ� ��Ұ� ������ �������� ���ڿ��� ����==ù ����� �ε���

		memcpy(tmp, buff, index); //tmp�� buff�� index��ŭ ����

		value1 = atoi(tmp);
		value2 = atoi(&buff[index]); // �ּҷ� ������ ���ڿ��� ��. �ƴϸ� �� ���� �ϳ��� ��ȯ��


		switch (buff[index]) //�������� ���
		{
		case '+': value1 += value2; break;
		case '-': value1 -= value2; break;
		case '*': value1 *= value2; break;
		case '/': value1 /= value2; break;
		case '%': value1 %= value2; break;
		default:
			puts("�߸��� �����ڸ� ����Ͽ����ϴ�.");
			continue; //switch�� �ݺ�
		}

		if (add(value1) == -1)
		{
			puts("�� �̻� �߰��� �� �����ϴ�.");
		}

		printf("%s = %d, q.rear = %d\n\n", buff, value1, q.rear);
	}

	value1 = 0;

	for (;;)
	{
		if (delete(&value2) == -1) break;
		value1 += value2;
	}
	printf("����� ������ %d�Դϴ�.\n", value1);
}

int add(int value)
{
	q.array[q.rear++] = value;
	if (q.rear == QUEUE_MAX) return -1;
	return 0;
}

int delete(int* value)
{
	if (q.front == q.rear || q.front == QUEUE_MAX) return -1;
	*value = q.array[q.front++];
	return 0;
}
*/

// 266) ���� ��ũ�� ����Ʈ �����ϱ�
/*
#include<malloc.h>
#include<string.h>

int add_list(char* name, char* tel, char* addr);
void print_list(void);
void remove_list(void);

typedef struct tagLinkedList
{
	char name[30];
	char tel[30];
	char addr[100];

	struct tagLinkedList* next;
}ADDR;

ADDR* g_pAddrHead = NULL;

void main(void)
{
	add_list("ȫ�浿", "1111", "����Ư���� ���α�");
	add_list("ȫ���", "2222", "����Ư���� ������");
	add_list("Mr.Kim", "3333", "����Ư���� ���α�");
	add_list("��C", "4444", "����Ư���� ������");
	add_list("��C", "5555", "���������� ����");

	print_list();
	remove_list();

}

int add_list(char* name, char* tel, char* addr)
{
	ADDR* plocal, * pn = g_pAddrHead; //pn�� NULL
	//g_pAddrHead�� �ʱ�ȭ���� ���� ���, �� ���� ����˴ϴ�.

	if (g_pAddrHead == NULL)
	{
		g_pAddrHead = malloc(sizeof(ADDR)); //ADDR ����ü �Ҵ�

		if (g_pAddrHead == NULL)
		{
			return 0;
		}

		g_pAddrHead->next = NULL;
		plocal = g_pAddrHead;
	}
	else // g_pAddrHead�� �ʱ�ȭ�� �� ��� ����˴ϴ�.
	{
		plocal = malloc(sizeof(ADDR));

		if (plocal == NULL)
		{
			return 0; // �Ҵ� ���� ��
		}
		
		while ((*pn).next)
		{
			pn = pn->next;
		}

		pn->next = plocal; // ���� ����Ʈ�� ����
		plocal->next = NULL; // ���� ����Ʈ�� NULL�� ����
	}

	strcpy(plocal->name, name);
	strcpy(plocal->tel, tel);
	strcpy(plocal->addr, addr);

	return 1;
}

void print_list(void)
{
	int count = 1;
	ADDR* plist;

	plist = g_pAddrHead;

	// �� ���� ���
	while (plist)
	{
		printf("No.%d\n", count++);
		puts(plist->name);
		puts(plist->tel);
		printf("%s\n\n", plist->addr);

		plist = plist->next;
	}
}

void remove_list(void)
{
	ADDR* plocal;

	// �� ���� �޸� ����
	while (g_pAddrHead)
	{
		plocal = g_pAddrHead->next;
		
		free(g_pAddrHead);

		g_pAddrHead = plocal;
	}
}
*/

// ���� ���ϴ� ������ �� �ڷᱸ������ �����ϰڴٰ� ������ ���� ��¥

// 267) ���� ��ũ�� ����Ʈ �����ϱ�
/*
#include<malloc.h>
#include<string.h>

int add_list(char* name, char* tel, char* addr);
void print_list(void);
void remove_list(void);

typedef struct tagLinkedList
{
	char name[30];
	char tel[30];
	char addr[100];

	struct tagLinkedList* prev;
	struct tagLinkedList* next;
}ADDR;

ADDR* g_pAddrHead = NULL;

void main(void)
{
	add_list("ȫ�浿", "1111", "����Ư���� ���α�");
	add_list("ȫ���", "2222", "����Ư���� ������");
	add_list("Mr.Kim", "3333", "����Ư���� ���α�");
	add_list("��C", "4444", "����Ư���� ������");
	add_list("��C", "5555", "���������� ����");

	print_list();
	remove_list();
}

int add_list(char* name, char* tel, char* addr)
{
	ADDR* plocal;

	if (g_pAddrHead == NULL)
	{
		g_pAddrHead = malloc(sizeof(ADDR));

		if (g_pAddrHead == NULL)
		{
			return 0;
		}

		g_pAddrHead->prev = NULL;
		g_pAddrHead->next = NULL;
	}
	else
	{
		plocal = malloc(sizeof(ADDR));
		if (plocal == NULL)
		{
			return 0;
		}

		g_pAddrHead->next = plocal;
		plocal->prev = g_pAddrHead;
		g_pAddrHead = plocal;
		g_pAddrHead->next = NULL;
	}

	strcpy(g_pAddrHead->name, name);
	strcpy(g_pAddrHead->tel, tel);
	strcpy(g_pAddrHead->addr, addr);

	return 1; 
}
void print_list(void)
{
	int count = 1;
	ADDR* plocal;

	plocal = g_pAddrHead;

	while (plocal->prev)
	{
		plocal = plocal->prev; //������ ���� ����
	}

	while (plocal)
	{
		printf("No.%d\n", count++);
		puts(plocal->name);
		puts(plocal->tel);
		printf("%s\n\n", plocal->addr);

		plocal = plocal->next;
	}
}
void remove_list(void)
{
	ADDR* plocal;

	while (g_pAddrHead->prev)
	{
		g_pAddrHead = g_pAddrHead->prev;
	}

	while (g_pAddrHead)
	{
		plocal = g_pAddrHead->next;

		free(g_pAddrHead);
	}

	g_pAddrHead = NULL;
}
*/

// 268) �ּҷ� �����ϱ� 
/*
#include<malloc.h>
#include<string.h>
#include<conio.h>

#define ADDRFILE "c:\\addrlist.txt"

typedef struct tagLinkedList
{
	char name[30];
	char tel[30];
	char addr[100];

	struct tagLinkedList* prev;
	struct tagLinkedList* next;
}ADDR;

ADDR* g_pAddrHead = NULL;
ADDR* g_pFind;
int g_bSaved = 1;

void get_addrlist(void);
int add_list(const ADDR* addr);
int find_list(const char* name);
void SetHeadPosition(void);
void SetTailPosition(void);

void Add_addr(void);
void Find_addr(void);
void Modify_addr(void);
void Delete_addr(void);
void Print_addr(void);
void Save_addr(void);
void Remove_addr(void);

void main(void)
{
	int ch;

	get_addrlist();

	puts("�ּҷ� ���α׷� Version 1.0");
	while (1)
	{
		printf("\n[1]��� [2]�˻� [3]���� [4]���� [5]��� [S]���� [Q]����");
		ch = _getch();

		switch (ch)
		{
		case '1': Add_addr(); break;
		case '2': Find_addr(); break;
		case '3': Modify_addr(); break;
		case'4':  Delete_addr(); break;
		case'5':  Print_addr(); break;
		case 's': 
		case 'S': Save_addr(); break;
		case'q':
		case'Q': 
			if (g_bSaved == 0)
			{
				printf("\n\n����� �ּ� �����͸� �����Ͻðڽ��ϱ�? (y/n)");
				ch = _getch();
				if (ch == 'Y' || ch == 'y') Save_addr(); 
			}
			Remove_addr(); return;
		default: printf("\n\n1~5 �Ǵ� S/Q�� �����ʽÿ�.\n\n");
			break;
		}
	}
}

void get_addrlist(void)
{
	ADDR addr;
	FILE* fp;
	fp = fopen(ADDRFILE, "rb");

	if (fp=NULL)
	{
		perror("���� ���� ����");
		return;
	}
	while (!feof(fp))
	{
		fread(&addr, sizeof(ADDR), 1, fp);

		if (ferror(fp))
		{
			fclose(fp);
			perror("���� �б� ����");
			return;
		}

		if (feof(fp))break;
		
		if (add_list(&addr) == 0)
		{
			printf("�ּ� �����͸� ��ũ�� ����Ʈ�� �߰��� �� �����ϴ�.\n");
		}
	}

	fclose(fp);
}

int add_list(const ADDR* addr)
{
	ADDR* plocal, * pn = g_pAddrHead;

	SetHeadPosition();

	if (g_pAddrHead == NULL)
	{
		plocal = malloc(sizeof(ADDR));
		memset(plocal, 0, sizeof(ADDR));

		if (plocal == NULL)
		{
			return 0;
		}
		g_pAddrHead = plocal;
		g_pAddrHead->prev = NULL;
		g_pAddrHead->next = NULL;
	}
	else
	{
		plocal = malloc(sizeof(ADDR));
		memset(plocal, 0, sizeof(ADDR));

		if (plocal == NULL)
		{
			return 0;
		}

		while (pn->next)
		{
			pn = pn->next;
		}

		pn->next = plocal;
		plocal->prev = pn;
		plocal->next = NULL;
	}

	strcpy(plocal->name, addr->name);
	strcpy(plocal->tel, addr->tel);
	strcpy(plocal->addr, addr->addr);

	return 1;
}

int find_list(const char* name)
{
	ADDR* plocal;

	SetHeadPosition();

	plocal = g_pAddrHead;

	while (plocal)
	{
		if (strstr(plocal->name, name)) {
			g_pFind = plocal;
			return 1;
		}

		plocal = plocal->next;
	}

	return 0;
}

void SetHeadPosition(void)
{
	if (g_pAddrHead->prev) return;

	while (g_pAddrHead->prev)
	{
		g_pAddrHead = g_pAddrHead->prev;
	}
}

void SetTailPosition(void)
{
	if (g_pAddrHead == NULL) return;
	while (g_pAddrHead->next)
	{
		g_pAddrHead = g_pAddrHead->next;
	}
}
	

void Add_addr(void)
{
	ADDR addr;

	memset(&addr, 0, sizeof(ADDR));

	printf("\n\n����� �̸�:"); gets(addr.name);

	if (strlen(addr.name) == 0) return;
	
	printf("����� ��ȭ:"); gets(addr.tel);
	printf("����� �ּ�:"); gets(addr.addr);

	if (find_list(addr.name) ==1)
	{
		printf("\n�̹� ��ϵǾ� �ִ� �̸��Դϴ�.\n\n");
		puts(g_pFind->name);
		puts(g_pFind->tel);
		puts(g_pFind->addr);
		return;
	}

	if (add_list(&addr))
	{
		g_bSaved = 0;
		printf("\n��ϵǾ����ϴ�.\n\n");
	}
	else
	{
		printf("\n��Ͽ� �����Ͽ����ϴ�.\n\n");
	}
}

void Find_addr(void)
{
	char buff[100] = { 0, };
	ADDR* plocal;

	printf("\n\n�˻��� �̸�/��ȭ/�ּ��� �Ϻθ� �Է��ϼ���.\n");
	printf("�̸�/��ȭ/�ּ�:"); gets(buff);

	if (strlen(buff) == 0) return;

	SetHeadPosition();

	plocal = g_pAddrHead;
	g_pFind = NULL;

	while (plocal)
	{
		if (strstr(plocal->name, buff))
		{
			g_pFind = plocal;
			break;
		}

		if (strstr(plocal->tel, buff))
		{
			g_pFind = plocal;
			break;
		}

		if (strstr(plocal->addr, buff))
		{
			g_pFind = plocal;
			break;
		}

		plocal = plocal->next;
	}

	if (g_pFind)
	{
		puts(g_pFind->name);
		puts(g_pFind->tel);
		puts(g_pFind->addr);
	}
	else
	{
		printf("\n\n%s�� �ּҷϿ��� ã�� �� �����ϴ�.\n\n", buff);
	}
}

void Modify_addr(void)
{
	char name[100] = { 0, };
	ADDR addr;

	while (1)
	{
		printf("\n\n������ �̸�:"); gets(name);

		if (strlen(name) == 0) return;
		if (find_list(name)==0)
		{
			puts("������ �̸��� ã�� �� �����ϴ�.");
			continue;
		}

		break;
	}

	printf("\n%s�� ���� �ּ� �����͸� �Ʒ��� �����ϴ�.\n\n", name);
	puts(g_pFind->name);
	puts(g_pFind->tel);
	puts(g_pFind->addr);

	printf("\n�����Ϸ��� �̸�/��ȭ/�ּҸ� �Է��� �� ����Ű�� ġ����.\n\n");

	printf("�̸�: "); gets(addr.name);
	printf("��ȭ: "); gets(addr.tel);
	printf("�ּ�: "); getc(addr.addr);

	if (strlen(addr.name) == 0) strcpy(addr.name, name);
	
	strcpy(g_pFind->name, addr.name);
	strcpy(g_pFind->tel, addr.tel);
	strcpy(g_pFind->addr, addr.addr);

	g_bSaved = 0;

	printf("%s�� ���� �ּ� �����͸� �����Ͽ����ϴ�.\n", name);
}

void Delete_addr(void)
{
	char name[100] = { 0, };
	ADDR* plocal;
	int ch;

	while (1)
	{
		printf("\n\n������ �̸�: "); gets(name);

		if (strlen(name) == 0) return;
		
		if (find_list(name) == 0)
		{
			puts("������ �̸��� ã�� �� �����ϴ�.");
			continue;
		}
		break;
	}

	puts(g_pFind->name);
	puts(g_pFind->tel);
	puts(g_pFind->addr);

	printf("%s�� �����Ͻðڽ��ϱ�?(y/n)",name);
	ch = _getch();
	fflush(stdin);

	if (ch == 'Y' || ch == 'y')
	{
		if (g_pFind->prev == NULL)
		{
			free(g_pFind);
			g_pAddrHead = NULL;
		}
		else
		{
			plocal = g_pFind->next;
			free(g_pFind);
			plocal->prev = NULL;
			g_pAddrHead = plocal;
		}
	}
	else if(g_pFind->next = NULL)
	{
		plocal = g_pFind->prev;
		free(g_pFind);
		plocal->next = NULL;
		g_pAddrHead = plocal;
	}
	else
	{
		plocal = g_pFind->prev;
		plocal->next = g_pFind->next;

		plocal = g_pFind->next;
		plocal->prev = g_pFind->prev;

		free(g_pFind);

		g_pAddrHead = plocal;
	}

	g_bSaved = 0;

	printf("\n\n�˻��� �ּ� �����͸� �����Ͽ����ϴ�.\n\n");
}

void Print_addr(void)
{
	int count = 1;
	ADDR* plocal;

	SetHeadPosition();

	plocal = g_pAddrHead;

	while (plocal->prev)
	{
		plocal = plocal->prev;
	}
	printf("\n\n");

	while (plocal)
	{
		printf("��ȣ. %d\n", count++);
		puts(plocal->name);
		puts(plocal->tel);
		printf("%s\n\n", plocal->addr);

		printf("�ƹ� Ű�� ��������, (����:q)\n\n");
		if (_getch() == 'q') return;
		
		plocal = plocal->next;
		{

		}
	}
}

void Save_addr(void)
{
	ADDR* plocal;
	FILE* fp;

	if (g_pAddrHead == NULL) return;

	fp = fopen(ADDRFILE, "w+b");

	if (fp == NULL)
	{
		perror("���� ���� ����");
		return;
	}

	SetHeadPosition();

	while (g_pAddrHead)
	{
		plocal = g_pAddrHead->next;
		fwrite(g_pAddrHead, sizeof(ADDR), 1, fp);
		g_pAddrHead = plocal;
	}

	printf("\n��� �����͸� ���Ͽ� �����Ͽ����ϴ�.");
	g_bSaved = 1;

	fclose(fp);
}

void Remove_addr(void)
{
	ADDR* plocal;

	if (g_pAddrHead == NULL) return;

	SetHeadPosition();

	while (g_pAddrHead)
	{
		plocal = g_pAddrHead->next;
		free(g_pAddrHead);
		g_pAddrHead = plocal;
	}

	g_pAddrHead = NULL;

}
*/


// 269) TCP/IP �����ϱ�
/*
#include<winsock2.h>
#pragma comment(lib,"wsock32.lib")


void main(void)
{
	SOCKET s; // ���� ��ũ����
	WSADATA wsaData;
	SOCKADDR_IN sin; // ���� ����ü

	if (WSAStartup(WINSOCK_VERSION, &wsaData) !=0)
	{
		printf("WSAStartup ����, ���� �ڵ� = %d\n", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (s==INVALID_SOCKET)
	{
		printf("���� ���� ����, ���� �ڵ� = %d\n", WSAGetLastError());
		WSACleanup();
		return;
	}

	sin.sin_family = AF_INET; //�ּ� ü�� ����
	sin.sin_addr.s_addr = inet_addr("192.168.45.62"); //���� �ּ� ����
	sin.sin_port = htons(21); //��Ʈ ��ȣ ����

	if (connect(s,(struct sockaddr*)&sin, sizeof(sin) !=0))
	{
		printf("���� ����, ���� �ڵ� = %u\n",WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	if (closesocket(s) != 0)
	{
		printf("���� ���� ����, ���� �ڵ� = %u\n", WSAGetLastError());
		WSACleanup();
		return;
	}

	if (WSACleanup() != 0)
	{
		printf("WSACleanup ����, ���� �ڵ� = %u\n", WSAGetLastError());
		return;
	}

	puts("127.0.0.1�� 21�� ��Ʈ�� ������ �����Ͽ����ϴ�.");
}
*/

// 270) TCP/IP ����/Ŭ���̾�Ʈ ���α׷� �����
/*
#include<WinSock2.h>

#pragma comment(lib,"wsock32.lib")

void main(void)
{
	SOCKET s, cs;
	WSADATA wsaData;
	struct sockaddr_in sin, cli_addr; //���� ����ü
	int size = sizeof(cli_addr);
	char data[10] = { 0, };

	if (WSAStartup(WINSOCK_VERSION, &wsaData) != 0)
	{
		printf("WSAStartup ����, ���� �ڵ� = %d\n", WSAGetLastError());
		return;
	}

	s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);

	if (s==INVALID_SOCKET)
	{
		printf("���� ���� ����, ���� �ڵ�: %d\n", WSAGetLastError());
		WSACleanup();
		return;
	}

	sin.sin_family = AF_INET;
	sin.sin_port = htons(10000);
	sin.sin_addr.s_addr = htonl(ADDR_ANY); //��� Ŭ���̾�Ʈ�κ����� ���� ���

	if (bind(s,(struct sockaddr*)&sin, sizeof(sin))==SOCKET_ERROR)
	{
		printf("���ε� ����, ���� �ڵ� = %d\n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;

	}

	if (listen(s, SOMAXCONN)!=0)
	{
		printf("���� ��� ���� ����, ���� �ڵ� = %d\n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	printf("Ŭ���̾�Ʈ�κ����� ������ ��ٸ��� �ֽ��ϴ�...\n");

	cs = accept(s, (struct sockaddr*)&cli_addr, &size);

	if (cs==INVALID_SOCKET)
	{
		printf("���� ���� ����, ���� �ڵ� = %d\n", WSAGetLastError());
		closesocket(s);
		WSACleanup();
		return;
	}

	puts("Ŭ���̾�Ʈ�� ����Ǿ����ϴ�.");

	if (recv(cs,data,3,0)<3)
	{
		printf("������ ���� ����, ���� �ڵ� = %u\n", WSAGetLastError());
		closesocket(cs); closesocket(s); WSACleanup(); return;
	}

	printf("%s�� Ŭ���̾�Ʈ�κ��� ���ŵǾ����ϴ�.\n", data);

	if (closesocket(cs) != 0 || closesocket(s) !=0)
	{
		printf("���� ���� ����, ���� �ڵ� = %u\n", WSAGetLastError());
		WSACleanup();
		return;
	}

	if (WSACleanup() !=0)
	{
		printf("WSACleanup ����, ���� �ڵ� = %u\n", WSAGetLastError());
		return;
	}
}
*/
