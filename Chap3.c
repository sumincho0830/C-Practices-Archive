#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
#include <malloc.h>
#include <io.h>
#include <sys/stat.h>
#include <direct.h>
#include <time.h>
#include <sys/timeb.h>
#include <Windows.h>
#include <math.h>
#include <search.h>

// 51) ���� �Է¹ޱ� (getch) -> <conio.h> �� ���ǵ� �Լ�
// ��� �� ��������? Ű������ �Է� ���� �������� �ϴµ�,, �ϳ��� �������µ�?
/*
#define ENTER 13

void main(void)
{
	int ch;

	printf("�ƽ�Ű �ڵ�� ��ȯ�� Ű�� ��������...\n");
	printf("Enter Ű�� ������ ���α׷��� ����˴ϴ�.\n");

	do
	{
		ch = getch();
		printf("����: %c, �ƽ�Ű�ڵ� = %d\n", ch, ch);

	} while (ch != ENTER);

}
*/

// 52) ���� ����ϱ� (putch)
/*
int print(char* string);

void main(void)
{
	print("This is a putch function!");
}

int print(char* string)
{
	int len = 0;

	while (*string != (char)NULL) // string�� null�� �ƴ� �� ����ϴ� ����� �ַ� ����
	{
		_putch(*string); // �̷��� ���������� ������ �����ص� ��
		string++;
		len++;
	}

	// ���� ��µǰ� �ִ� ���� ���� ���� ù��°�� �̵�
	_putch('\r'); // ĳ���� ����
	_putch('\n'); // ���� �ǵ�

	return len;
}
*/

// 53) ������ �Է¹ޱ� (scanf)
/*
void main(void)
{
	int count; // 3ȸ�� ī��Ʈ�ϱ� ���� ����
	int tmp; // �������� ���� �ӽ� ����
	int total = 0; //���� �������� �ջ��ϱ� ���� ����

	for (count = 0; count < 3; count++)
	{
		printf("����%d �Է� �� EnterŰ�� ��������:", count+1);
		scanf("%d", &tmp);
		total += tmp;
	}

	printf("����: %d\n", total);
}
*/

/*
void main(void)
{
	char str1[100];
	char str2[100];
	char str3[100];

	printf("���ڿ� 3�� �Է�: ");
	scanf("%s %s", str1, str2); // ������ ������ ���ڿ��� scanf �Լ��� ���������� ����
	scanf("%s",str3);

	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
}
*/

// 54) ������ ����ϱ� (printf)
/*
void main(void)
{
	int i = 100;
	int j = 1000;
	int k = 12345;

	// ������ ������� �ʴ� ���
	printf("[%d]\n", i);
	printf("[%d]\n", j);
	printf("[%d]\n", k);
	printf("\n");

	// ����� 5�ڸ� ����
	printf("[%5d]\n", i);
	printf("[%5d]\n", j);
	printf("[%5d]\n", k);
	printf("\n");

	// ���� ����
	printf("[%+d]\n", i);
	printf("[%+d]\n", j);
	printf("[%+d]\n", k);
	printf("\n");
}
*/

// ���� �μ��� ������ �Լ�
/*
void var_print(char* format, ...) //char�� ������ ���� �ϳ��� �� �ڿ� �������� ���� ���ڷ� �޴� �Լ�
{
	char buff[1024];
	va_list arglist; // va_list�� ��򰡿� ���ǵǾ� �ִ� �⺻ ���� Ÿ��? ����ü?

	va_start(arglist, format);
	vsprintf(buff, format, arglist);
	va_end(arglist);

	printf(buff);

}
*/

// 55) ���ڿ� �Է¹ޱ� (gets)
/*
int count(char* str);

void main(void)
{
	char string[100];
	char* ret;

	ret = gets(string); //ret��� �����Ϳ� string�� �ּ�(?)�� ��ȯ? gets �Լ��� �� ��ȯ����?
	// string�ּҿ��� ���ڿ��� �о�ͼ� ��ȯ..! �ΰ��δ�

	if (ret != NULL)
	{
		printf("���� 'a'�� ������ %d�� �Դϴ�.", count(string)); 
	}
}

int count(char* str) // �����ͷ� �ް�
{
	int cnt = 0;

	while (*str != (int)NULL) 
	{
		if (*str++ == 'a') cnt++;
		// �̰� ���..
		// *str -> str�� �ּҿ� ����
		// ++ -> ��ġ����
		// 
	}

	return cnt;
}
*/

// 56) ���ڿ� ����ϱ� (puts) 
/*
#define KOREA   "���ѹα�"
#define SUMMER  "����"

void main(void)
{
	const char* winter = "�ܿ�"; // ���ڿ��� �迭 ����� ���ڿ��� �ٷ� ����

	puts(KOREA); // ���ڿ��� �ּ� �� ��ü��
	puts(SUMMER); // ���ڿ��� �ּ��� ǥ�� �� ��ü��
	puts(winter);// �̷��� �ּҷ� �Ѱ��ָ� ���ڿ��� ����Ʈ��

}
*/

// 57) ���ڿ� �����ϱ� (strcpy)
// strcpy�� <string.h>���Ͽ� ����Ǿ��ִ�

/*
#define KOREA "���ѹα�"

void main(void)
{
	char* string1; // ������
	char string2[100]; // �迭

	strcpy(string1, KOREA); // ����. ��?
	strcpy(string2, KOREA); // string2�� �������� (�迭�� �̸�)
	strcpy(string2, "��"); // �̰� �ǳ�..? ���ڿ� �� ��ü�� �ּ��̹Ƿ� �����ҵ� �ϴ�
}
*/

// 58) ���ڿ��� �����ϴ� �Լ� �����
/*
#define KOREA "���ѹα�"

char* My_strcpy(char* dest, const char* src);

void main(void)
{
	char string[100];

	My_strcpy(string, KOREA); // "�ּҰ�"�� "���ڿ� ���" ��ȯ
	puts(string); //string�ּҿ� �ִ� ���� ���
	// �迭�� ���ڿ��� ���� �ϳ��� ���ԵǾ� �����(�����)
}

char* My_strcpy(char* dest, const char* src)
{ 
	// ���� ó��
	// ���� dest�� NULL�̰ų�, src�� NULL�̶��
	// �� �� dest�� ���� NULL�� �ƴ϶��
	// -> �̰� �ٸ� �� // (string�� �ּҰ� Null, �� �ּҰ��� ����, �ʱ�ȭ���� ���� �����Ͷ��)
	// dest�� ���� NULL�� �����ϰ�
	// NULL�� ��ȯ
	if (dest==(int)NULL || src==(int)NULL) // �� �� �ּ��̹Ƿ� ������
	{
		if (*dest != (int)NULL) //�ּҰ� ������ ������ ���� ���� ���¶��
		{
			*dest = (int)NULL; // dest(�ּ�)�� NULL����
			return NULL;
		}
	}

	do
	{
		*dest++ = *src; // dest�� ���� src�� �����ϰ� dest�� ���� ������Ŵ..?
	} while (*src++ != (int)NULL); // src�� ���� NULL�� �ƴ� ���ȸ� �ݺ��� ����. 
	
	return dest;
}
*/

// 59) ���ڿ��� ��,�ҹ��ڷ� �����Ͽ� ���ϱ�(strcmp)
/*
#define SKY "sky"

void main(void)
{
	char string[100];
	int ret;

	printf("���ܾ �Է��� �� EnterŰ�� ġ����!\n");
	printf("sky�� �Է��ϸ� ���α׷��� ����˴ϴ�.\n");

	do
	{
		gets(string);

		ret = strcmp(string, SKY); // ���ؼ� ������ 0, str�� �� ũ�� 1, str�� �� ������ -1 ��ȯ
		//�� ret��� ������ ������ ��ȯ

		if (ret == 0) // �� ���ڿ��� ������
		{
			printf("%s == %s, ret = %d\n", string, SKY, ret);
			break; // �� ���ڿ��� ��ġ�� ���� ���α׷� ����. �� �ܿ��� ���ѹݺ�. 
		}
		else if (ret<0) // str�� �� ������
		{
			printf("%s < %s, ret = %d\n", string, SKY, ret);
		}
		else
		{
			printf("%s > %s, ret = %d\n", string, SKY, ret);
		}


	} while (1);
}
*/

// 60) ���ڿ��� ���ϴ� �Լ� ����� 
// strcmp �Լ� ���� ������

/*
#define SKY "sky"
int My_strcmp(const char* string1, const char* string2); // �� ���ڿ� ���? �����Ͱ� �ƴ϶�? ����..!
// ���� ���ڿ� ��� 2���� �ּҸ� ���ڷ� �޴� �Լ�

void main(void)
{
	char string[100];
	int ret;

	printf("���ܾ �Է��� �� EnterŰ�� ġ����!\n");
	printf("sky�� �Է��ϸ� ���α׷��� ����˴ϴ�.\n");

	do
	{
		gets(string); // string���� ���ڿ��� �Է¹ޱ�
		ret = My_strcmp(string, SKY); // string�� ����� ���� sky�� �� �� 

		if (ret == 0) // ���� ���ٸ�
		{ 
			//���α׷� ����
			printf("%s == %s, ret = %d\n", string, SKY, ret);
			break;
		}
		else if (ret < 0)
		{
			printf("%s < %s, ret = %d\n", string, SKY, ret);
		}
		else
		{
			printf("%s > %s, ret = %d\n", string, SKY, ret);

		}

	} while (1);
}

int My_strcmp(const char* string1, const char* string2) // ���ڿ� ��� "������"�̹Ƿ� �ᱹ ������ó�� ����ؾ� ��
{
	if (*string1 == (int)NULL && *string2 == (int)NULL) return 0;

	while (*string1 != NULL) //string1�� ���ڰ� NULL�� �ƴ�
	{
		if (*string2 == (int)NULL) return 1; // string1�� NULL�� �ƴϰ�, string2 �� NULL�� ��� 1�� �� ū ���� Ȯ���ϹǷ� 1 ��ȯ

		if (*string1 == *string2)
		{
			string1++;
			string2++;
			continue; 
		}

		if (*string1 < *string2) return -1 ; //1�� 2���� �۴ٸ�
		else return 1; // �� �ݴ��� �������� ������ string1==string2 ������ ��������Ƿ� 
	}
	if (*string2 != (int)NULL) return -1;
	return 0;
}
*/

// 61) ���ڿ��� ���� ũ�⸸ŭ ���ϱ� (strncmp)
/*
#define SKY "sky"

void main(void)
{
	char string[100];
	int ret;

	printf("���ܾ �Է��� �� EnterŰ�� ġ����!");
	printf("sky�� ���۵Ǵ� �ܾ �Է��ϸ� ���α׷��� ����˴ϴ�.");
	
	do // �ϴ� �ݺ�
	{
		gets(string); //�޾Ƽ� string�迭�� ����

		ret = strncmp(string, SKY, 3);

		if (ret==0)
		{
			printf("%3.3s == %s, ret = %d \n", string, SKY, ret);
			break;
		}
		else if (ret<0)
		{
			printf("%3.3s < %s, ret = %d \n", string, SKY, ret);

		}
		else
		{
			printf("%3.3s > %s, ret = %d \n", string, SKY, ret);

		}

	} while (1); //� ������ �������� �ʴ� �̻� ���Ϥ��ݺ�
}
*/

// 62) ���� �����ϱ� (strcat)
/*
void main(void)
{
	char string1[100];
	char string2[100];

	printf("ù ��° �ܾ �Է��ϼ���!\n");
	gets(string1);

	printf("�� ��° �ܾ �Է��ϼ���!\n");
	gets(string2);

	strcat(string1, string2); //1 �� 2�� ��

	puts(string1); 

}
*/


// 63) ���ڿ� ���� ���ϱ�(strlen)
/*
void main(void)
{
	char string[200];
	printf("������ �Է��� ��, EnterŰ�� ġ����!\n");
	printf("�ƹ��͵� �Է����� ������ ���α׷��� ����˴ϴ�!\n");

	do
	{
		gets(string);
		if (strlen(string) == 0)
		{
			break;
		}

		printf("���ڿ��� ���̴� %d �Դϴ�.\n", strlen(string));
	} while (1);
}
*/

// 64) ���ڿ� �˻��ϱ�(strstr)
/*
#define SKY "sky"

void main(void)
{
	char string[100];
	char* ret;
	
	puts("���ڿ��� �Է��� �� EnterŰ�� ġ����!"); // puts�Լ��� �ڵ� �ٹٲ�
	puts("���ڿ� �߿� sky�� ���ԵǾ� ������, ���α׷��� ����˴ϴ�.");

	do
	{
		gets(string);
		ret = strstr(string, SKY); // string���� SKYã��. ��ȯ ����� ret�� ����.

		if (ret==NULL) // ��ġ�ϴ� ���� ������ NULL��ȯ
		{
			puts("���ڿ� �߿� sky�� �����ϴ�."); 
		}
		else 
		{
			printf("%d ��ġ���� sky ���ڿ��� ã�ҽ��ϴ�.", ret - string);// ���ڿ��ε� �̷� ������ �ǳ�..?
			break;
		}

	} while (1); // �ϴ� ���ѹݺ� �ɾ����
	
}
*/

// 65) ���ڿ� �߿��� ���� �˻��ϱ�(strchr)
/*
#define FIND_CHAR 'h'

void main(void)
{
	char string[100];
	char* ret; // ������!

	puts("���ڿ��� �Է��� �� Enter Ű�� ġ����!");
	puts("���ڿ� �߿� 'h'�� ���ԵǾ� ������, ���α׷��� ����˴ϴ�.");

	do
	{
		gets(string);

		ret = strchr(string, FIND_CHAR); // ���ڿ� �� FIND_CHAR ���ڸ� �˻��ؼ� ��ȯ. ��ȯ���� ���ڿ��� �ּҰ�. ���н� NULL.

		if (ret == NULL)
		{
			puts("���ڿ� �߿� 'h'�� �����ϴ�.");
		}
		else
		{
			printf("%d ��ġ���� ���� 'h'�� ã�ҽ��ϴ�.", ret-string); // puts������ ���� �����ڸ� ���� ���Ѵ�
			break;
		}

	} while (1);
}
*/

// 66) ���ڿ� �߿��� ��ġ�Ǵ� ù ������ ��ġ ���ϱ�(strcspn)
// �� ���ڿ� �߿��� ��ġ�Ǵ� ù ������ ��ġ
/*
void main(void)
{
	char* string = "This is a string $$$"; // ������ ���� �ʱ�ȭ �� ���ڿ��� �����ϸ� ���ڿ��� �ּҰ� ���Ե�. ������ ���߿� ���ڿ��� �����Ϸ� �ϸ� ������ ��.
	char* strCharSet = "~!@#$%^&*()_+={}[]:;'<>./?";
	unsigned int pos; // position

	pos = strcspn(string, strCharSet); // pos������ strcspn�� ��ȯ���� ����
	// �� ���ڿ��� ��ġ�ϴ� ù ���ڴ� $��, string[-3]�� strCharSet[4]���� ó�� �����Ѵ�.

	puts("0     1     2     3");
	puts("123456789012345678901234567890");
	puts(string);
	puts(strCharSet);

	printf("%d ��ġ���� ��ġ�Ǵ� ù ���ڸ� �߰��Ͽ����ϴ�.\n", pos);
}
*/

// 67) ���ڿ� �߿��� ��ġ���� �ʴ� ù ������ ��ġ ���ϱ�(strspn)
/*
void main(void)
{
	char* string = "this is a very good!";
	char* strCharSet = "abcdefghijklmnopqrstuvwxyz ";
	unsigned int pos;

	pos = strspn(string, strCharSet);
	puts("0     1     2     3");
	puts("1234567890123456789012390");
	puts(string);
	puts(strCharSet);

	printf("%d ��ġ���� ��ġ���� �ʴ� ���ڸ� �߰��Ͽ����ϴ�.", pos);
}
*/

// 68) ���ڿ��� �����ڷ� �и��ϱ� 1 (strtok)
/*
#define TOCKEN " "

void main(void)
{
	char string[100];
	char* tocken;

	puts("���ڿ��� �Է��� �� Enter Ű�� ġ����!");

	gets(string);

	tocken = strtok(string, TOCKEN); // �ι�° parameter�� �������� ����
	// tocken�� NULL�� �ƴ��� �˻��ؾ� �ϹǷ� �̸� ���� ������ �� ���� �ݺ����� ������

	while (tocken != NULL)
	{
		puts(tocken);

		tocken = strtok(NULL, TOCKEN);
	}
}
*/

// 69) ���ڿ��� �����ڷ� �и��ϱ� 2(strpbrk)
/*
#define TOCKEN " "

void main(void)
{
	char string[100];
	char* pos;

	puts("���ڿ��� �Է��� �� EnterŰ�� ġ����!");

	gets(string); //string�� ������ ���ڿ��� �Է¹���

	pos = strpbrk(string, TOCKEN); // ������ �������� �ڸ���. �ּ� ��ȯ.

	while (pos != NULL)
	{
		puts(pos++);

		pos = strpbrk(pos, TOCKEN);// �ٽ� pos�� ���� �������� ����
	}
}
*/

// 70) ���ڿ��� Ư�� ���ڷ� ä��� (strset)
/*
void main(void)
{
	char string[100];

	puts("���ڿ��� �Է��� �� Enter Ű�� ġ����!");
	puts("�ƹ� ���ڵ� �Է����� ������ ���α׷��� ����˴ϴ�.");
	
	do
	{
		gets(string);	
		if (strlen(string) == 0)
		{
			break;
		}
		_strset(string, string[0]);
		puts(string);
	} while (1);
}
*/

// 71) �κ� ���ڿ��� Ư�� ���ڷ� ä��� (strnset)
/*
void main(void)
{
	char string[100];

	puts("���ڿ��� �Է��� �� Enter Ű�� ġ����!");
	puts("�ƹ� ���ڷ� �Է����� ������ ���α׷��� ����˴ϴ�.");

	do
	{
		gets(string);

		// ���ڿ��� ���̰� 0�� ��� vs 0�� �ƴ� ���
		if (strlen(string) == 0)
		{
			break;
		}

		_strnset(string, '*', 5); //string�� ó������ 5ĭ ��ŭ�� *���ڷ� ä���
		puts(string);

	} while (1);
}
*/

// 72) ���ڿ��� �빮�ڷ� ��ȯ�ϱ� (strupr)
/*
void main(void)
{
	char string[100];
	puts("���ڿ��� �Է��� �� EnterŰ�� ġ����!");
	puts("�ƹ� ���ڵ� �Է����� ������ ���α׷��� ����˴ϴ�."); 
	// �ൿ ���& ���� ������ ������ش�

	do
	{
		gets(string); //gets�� ���ڴ� ���ڿ��� ������ �ּ�

		if (strlen(string)==0) break;

		_strupr(string);//string��ü�� �����Ű�� �Լ�. string�� ��Ҹ� �빮�ڷ� �ٲ㼭 ����Ѵ�
		// ���� ���ڸ� �ϳ��� �����ͼ� �ε��� �� 97~nn(��� �� ��..)�� ������ ������ 
		// 'a'-'A'��ŭ�� ���ؼ� ���� �ڸ��� �ٽ� ���� 

		puts(string);
	} while (1);
}
*/

// 73) ���ڿ��� �ҹ��ڷ� ��ȯ�ϱ� (strlwr)
/*
void main(void)
{
	char string[100];
	puts("���ڿ��� �Է��� �� EnterŰ�� ġ����!");
	puts("�ƹ� ���ڵ� �Է����� ������ ���α׷��� ����˴ϴ�.");
	// �ൿ ���& ���� ������ ������ش�

	do
	{
		gets(string); //gets�� ���ڴ� ���ڿ��� ������ �ּ�

		if (strlen(string) == 0) break;

		_strlwr(string);//string��ü�� �����Ű�� �Լ�. string�� ��Ҹ� �빮�ڷ� �ٲ㼭 ����Ѵ�
		// ���� ���ڸ� �ϳ��� �����ͼ� �ε��� �� 65~nn(��� �� ��..)�� ������ ������ 
		// 'a'-'A'��ŭ�� ���� ���� �ڸ��� �ٽ� ���� 

		puts(string);
	} while (1);
}
*/

// 74) ���ڿ��� �Ųٷ� ������ (strrev)
/*
void main(void)
{
	char string[100];
	puts("���ڿ��� �Է��� �� EnterŰ�� ġ����!");
	puts("�ƹ� ���ڵ� �Է����� ������ ���α׷��� ����˴ϴ�.");
	// �ൿ ���& ���� ������ ������ش�

	do
	{
		gets(string); //gets�� ���ڴ� ���ڿ��� ������ �ּ�

		if (strlen(string) == 0) break;

		strrev(string);
		// for�� 2����


		puts(string);
	} while (1);
}
*/

//������ ��ƺ���
/*
void main(void)
{
	char str[100];
	char rev[100];

	int i, j;

	do
	{
		gets(str);

		if (strlen(str) == 0)break;

		i = strlen(str) - 2;
		j = 0;

		for (i = strlen(str)-1; i >=0 ; i--)
		{
			rev[j++] = str[i];
		}
		
		puts(rev);

	} while (1);
}
*/

// 75) ���ڿ��� �ߺ� �����ϱ�(strdup) stringduplicate
// ������ �ȵ�!
/*
int main(void)
{
	char string[100];
	char* pstr;

	puts("���ڿ��� �Է��� �� EnterŰ�� ġ����!");
	puts("�ƹ� ���ڵ� �Է����� ������ ���α׷��� ����˴ϴ�.");

	do
	{
		gets(string);

		if (strlen(string) == 0)break;

		pstr = _strdup(string); // malloc�Լ��� ���� ���� �����ؼ� ����� �����ϰ�, �� ���ڿ� ����� �ּҸ� ��ȯ

		strcpy(string, "temporary string");

		printf("���ڿ� string: %s\n",string);
		printf("���ڿ� pstr: %\n",pstr); 

		free(pstr);

	} while (1);
}
*/

// 76) ���ڿ��� ����ȭ�ϱ� (sprintf)
/*
void main(void)
{
	char cValue = 'a';
	int iValue = 1234567;
	long lValue = 7890123;
	float fValue = 3.141592;
	double dValue = 3.141592;
	char* string = "korea";
	char buffer[100];

	sprintf(buffer, "char���� %c", cValue); //buffer�� �ش� ���ڿ��� ����
	puts(buffer);

	sprintf(buffer, "int���� %d", iValue);
	puts(buffer);

	sprintf(buffer, "long���� %ld", lValue);
	puts(buffer);

	sprintf(buffer, "float���� %f", fValue);
	puts(buffer);

	sprintf(buffer, "double���� %e", dValue);
	puts(buffer);

	sprintf(buffer, "char*���� %s", string); //string�� �������
	puts(buffer);
}
*/

// 77) ���ڿ��� ������ ��ȯ�ϱ� 1(atoi)
/*
void main(void)
{
	int count;
	int total = 0;
	char string[100];

	for (count = 1; count <= 3; count++) // 3�� �ݺ�
	{
		printf("%d��° ���ڿ��� �Է��� �� EnterŰ�� ��������.\n", count);
		gets(string); // �Է� �ް�
		total += atoi(string); // string�� ���� ������ ��ȯ

		printf("�Է� �� = %d, �� �� = %d \n", atoi(string), total); //�����Ǵ� �� ��� ������
	}

	printf("���� ���ڿ��� �� ���� %d�Դϴ�. \n", total); 
	
}
*/

// 78) ���ڿ��� ������ ��ȯ�ϱ� 2(atol)
/*
void main(void)
{
	char* string1 = "2�� 1���� Ů�ϴ�.";
	char* string2 = "1004�� õ���Դϴ�.";
	char* string3 = "2016�⵵ �Դϴ�.";
	char* string4 = "������ 6�� 9�� �Դϴ�.";
	long t1, t2, t3, t4;

	puts(string1);
	puts(string2);
	puts(string3);
	puts(string4);

	t1 = atol(string1);
	t2 = atol(string2);
	t3 = atol(string3);
	t4 = atol(string4);
	//long���� ���ڷ� ��ȯ

	printf("���ڿ��� ���ڷ� ��ȯ�� ��: %ld, %ld, %ld, %ld\n", t1, t2, t3, t4);
	printf("�� ���� %d�Դϴ�.\n", t1 + t2 + t3 + t4);

}
*/

// 79) ���ڿ��� ������ ��ȯ�ϱ� 3(strtol)
/*
void main(void)
{
	char* string = "0xFF"; //16������ ��
	char* stop;
	int radix;
	long value;

	radix = 16; //6����? �̷��Ե� �Ƿ���

	value = strtol(string, &stop, radix); // stop�� ���� ���� �ּ�
	// string�� �о ���ڸ� radix������ ��ȯ�ϰ�
	// ��ȯ�ϴ� ���� ���� �ּҸ� stop�� ����
	// ��ȯ�� ���� value�� ����

	printf("%d���� ���ڰ� ��ȯ�Ǿ����ϴ�.\n", stop - string); // stop�� ���ڿ��� ���ڷ� ��ȯ�ϴ� ������ ��ġ
	// stop-string�̸� ���� ���� �ּҿ��� ù ��° ��Ҹ� �� ���̹Ƿ� ���� ����� ��ġ�� �� �� ����

	printf("16���� %s�� ���ڷ� ��ȯ�ϸ� %d�Դϴ�.\n", string, value); // ld������ ǥ���߱� ������ 10������ ����
}
*/

// 80) ���ڿ��� ������ ��ȯ�ϱ� 4(stroul) string to unsigned long
/*
void main(void)
{
	char* string = "11000";
	char* stop;
	int radix;
	unsigned long value; 

	radix = 2;// ������ ������ ���
	value = strtoul(string, &stop, radix);

	printf("%d ���� ���ڰ� ��ȯ�Ǿ����ϴ�.\n", stop - string); //
	printf("2���� %s�� ���ڷ� ��ȯ�ϸ�, %d�Դϴ�.\n", string, value);
}
*/

// 81) ���ڿ��� �Ǽ��� ��ȯ�ϱ� 1(atof)
/*
void main(void)
{
	char* str1 = "2.1�� 1.0���� Ů�ϴ�.";
	char* str2 = "1004.5���� õ��.�� �Դϴ�";
	char* str3 = "2005�⵵ �Դϴ�.";
	char* str4 = "������ 6�� 9�� �Դϴ�.";
	double t1, t2, t3, t4;

	puts(str1);
	puts(str2);
	puts(str3);
	puts(str4);

	t1 = atof(str1); // ���ڸ� �����ؼ� ����(�Ƹ� ù��° ���ڸ�..
	t2 = atof(str2);
	t3 = atof(str3);
	t4 = atof(str4);

	printf("���ڿ��� ���ڷ� ��ȯ�� ��: %.1f, %.1f, %.1f, %.1f\n", t1, t2, t3, t4);
	printf("�� ���� %.2f �Դϴ�.\n", t1 + t2 + t3 + t4);

}
*/

// 82) ���ڿ��� �Ǽ��� ��ȯ�ϱ� 2(strtod) string to double
/*
void main(void)
{
	char* string = "1.234E-10";
	char* stop;
	double value;

	value = strtod(string, &stop); //string���� ���ڸ� �����ϰ�, �� �ּҸ� stop�� ���� (������ ��ġ)
	// ��ȯ���� value�� ����
	printf("%d���� ���ڰ� ��ȯ�Ǿ����ϴ�.\n", stop - string);
	printf("���ڿ� [%s]�� ���ڷ� ��ȯ�ϸ� %e�Դϴ�.\n", string, value); //e�� ���� �˾ұ�..
	
}
*/

// 83) ������ ���ڿ��� ��ȯ�ϱ� 1(itoa)
/*
void main(void)
{
	int value;
	char string[100];
	int radix;

	radix = 2; // 10����
	value = 5;

	_itoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�.\n", string);

	value = -12345;
	_itoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�.\n", string);

}
*/


// 84) ������ ���ڿ��� ��ȯ�ϱ� 2(ltoa) long to 'a'
/*
void main(void)
{
	long value;
	char string[100];
	int radix;

	radix = 2; 

	value = 12345;
	_ltoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s �Դϴ�.\n", string);

	value = -12345;
	_ltoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s �Դϴ�.\n", string);
}
*/

// 85) ������ ���ڿ��� ��ȯ�ϱ� 3(_ultoa) unsigned long to 'a'
/*
void main(void)
{
	unsigned value;
	char string[100];
	int radix;

	radix = 16; // 16����

	value = 34567;
	_ultoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�.\n", string);

	value = 123457890;
	_ultoa(value, string, radix);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�.\n", string);

}
*/

// 86) �Ǽ��� ���ڿ��� ��ȯ�ϱ� 1(fcvt)
/*
void main(void)
{
	double value;
	char* pstr;
	int dec, sign;

	value = 3.1415926535;
	pstr = _fcvt(value, 6, &dec, &sign);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�.\n", pstr);
	printf("�Ҽ����� ��ġ�� %d, ��ȣ�� %d�Դϴ�.\n", dec, sign);

	value = -3.1415926535;
	pstr = _fcvt(value, 6, &dec, &sign);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�.\n", pstr);
	printf("�Ҽ����� ��ġ�� %d, ��ȣ�� %d�Դϴ�.\n", dec, sign);

}
*/ 
//

// 87) �Ǽ��� ���ڿ��� ��ȯ�ϱ� 2(evct)
/*
void main(void)
{
	double value;
	char* pstr;
	int dec, sign;

	value = 3.14e10;
	pstr = _ecvt(value,3, &dec, &sign);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�.\n", pstr);
	printf("�Ҽ����� ��ġ�� %d, ��ȣ�� %d�Դϴ�.\n", dec, sign);

	value = -3.14e10;
	pstr = _ecvt(value,3, &dec, &sign);
	printf("��ȯ�� ���ڿ��� %s�Դϴ�.\n", pstr);
	printf("�Ҽ����� ��ġ�� %d, ��ȣ�� %d�Դϴ�.\n", dec, sign);

}
*/

// 88) �Ǽ��� ���ڿ��� ��ȯ�ϱ� 3(gcvt)
/*
void main(void)
{
	double value;
	char buffer[100];

	value = 3.14e10;
	_gcvt(value, 3, buffer);

	printf("��ȯ�� ���ڿ��� %s�Դϴ�.\n", buffer);

	value = -3.14e10;
	_gcvt(value, 3, buffer);

	printf("��ȯ�� ���ڿ��� %s�Դϴ�.\n", buffer);
}
*/

// 89) ���ڰ� ���ĺ����� �˻��ϱ� (isalpha)
/*
#include <ctype.h>

void main(void)
{
	char* string = "Cat 1 Car 2 Cow 3,...";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string) // string�� 0�� �Ǹ� false�� �Ǹ鼭 ����
	{
		if (isalpha(*string)) // ���ĺ��̸� 1��ȯ
		{
			buffer[cnt++] = *string; // ���ۿ� string�� ��� ����
		}
		string++; // string�� �ּҸ� �������Ѽ� ���� ��ҷ� �Ѿ
	}

	puts(buffer);

}
*/

// 90) ���ڰ� �������� �˻��ϱ� (isdigit)
/*
void main(void)
{
	char* string = "Cat1 Car2 Cow3";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string) // string�� NULL�� �ƴ� ���� 
	{
		if (isdigit(*string))//���� ��쿡��. (���������� atoi�Լ� ���� ����ؼ� ������� !=0 �̸� ���� ��ȯ�ϴ� ��?
			buffer[cnt++] = *string; // buffer�� �ش� ���ڸ� ����

		string++; // string�� �ּҸ� ���� ������ �Űܼ� ���ڿ��� ���� ��ҷ� �Ѿ
	}


	puts(buffer);
	
}
*/

// 91) ���ڰ� ���ĺ� �Ǵ� �������� �˻��ϱ� (isalnum)
/*
void main(void) {
	char* string = "Cat 1 Car2 Cow 3, ...";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string)
	{
		if (isalnum(*string))
		{
			buffer[cnt++] = *string;
		}
		string++; // ���� ��ҷ� �Ѿ���� �ϴ� ������ ���ǹ� �ۿ� �־�� ��
	}

	puts(buffer);
}
*/

// 92) ���ڰ� �빮������ �˻��ϱ� (isupper)
/*
void main(void)
{
	char* string = "This is Korea!";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string)
	{
		if (isupper(*string))
			buffer[cnt++] = *string;

		string++;
	}

	puts(buffer); //����� �� �ϸ�...�翬�� �� ��������...? �ٺ���
}
*/

// 93) ���ڰ� �ҹ������� �˻��ϱ� (islower)
/*
void main(void)
{
	char* string = "This is Korea!";
	char buffer[100] = { 0, };
	int cnt = 0;

	while (*string)
	{
		if (islower(*string))
			buffer[cnt++] = *string;

		string++;
	}

	puts(buffer);
}
*/

// 94) ���ڰ� ����, �ǹ��� �Ǵ� ���๮������ �˻��ϱ� (isspace)
/*
void main(void)
{
	char* string = "This is Korea";
	int cnt = 0;

	while (*string) //string�� ��Ұ� NULL�� �ƴ� �� (��, ���ڿ��� ������)
	{
		if (isspace(*string))
			cnt++; // ������ ������ ����

		string++;
	}

	//puts(cnt); // puts�� "���ڿ�" ���¸� ����� �� ����. ������ cnt�� ��� �Ұ���.
	printf("����, �� �׸��� ���๮���� ���� %d�Դϴ�.\n", cnt);
}
*/

// 95) ���ڿ����� ��, �� 2����Ʈ�� ��ȯ�ϱ� (swab)
/*
void main(void)
{
	char string1[] = "1a2b3c4d5e";
	char string2[] = "............";

	puts(string1);
	puts(string2);

	_swab(string1, string2, sizeof(string1) - 1);// �������� �ε���? ��ġ? Ƚ��?
		// �ٲ� ����, �ٲ� ����, �ٲ� ���� ��

	puts(string1);
	puts(string2);
}
*/

// 96) �޸� �Ҵ��ϱ� (malloc)
/*
#define MEMORY "MEMORY"

void main(void)
{
	char* pmem;

	pmem = malloc(100); // ũ�� char * 100¥�� �޸𸮸� �Ҵ��ϰ� �� �ּҸ� pnem�� ��ȯ

	if (pmem == NULL)
	{
		puts("�޸𸮸� �Ҵ��� �� �����ϴ�."); // �޸𸮰� �Ҵ���� �ʾҴٸ� �ּҰ� ��ȯ���� �ʰ�, �׷��� �Ǹ� pmem�� NULL�� ���� ��
	}
	else
	{
		strcpy(pmem, MEMORY); // ���������� �޸𸮰� �Ҵ� �Ǿ��ٸ�, MEMORY �����ؼ� �����ϱ�
		puts(pmem); // puts���� �ּҸ� �����ָ� ���ڿ��� �����
	}

	free(pmem);
}
*/

// 97) �޸𸮸� ��� ������ �Ҵ��ϱ� (calloc)
/*
void main(void)
{
	char* pmem;
	printf("sizeof(int)�� ���̴� %d�Դϴ�\n", sizeof(int));

	pmem = calloc(100, sizeof(int));// int ũ���� ����� 100�� �Ҵ� (�迭?)

	if (pmem == NULL)
	{
		puts("�޸𸮸� �Ҵ��� �� �����ϴ�.");
	}
	else 
	{
		puts("������ ���� 100���� ������ ���۰� �Ҵ�Ǿ����ϴ�.");
	}

	free(pmem);
}
*/

// 98) �޸� �����ϱ� (free)
/*
#define MEGA 1024 * 1024

void main(void)
{
	int i;
	char* pmem;

	for (i = 0; i < 10; i++) // 10�� �ݺ�
	{
		pmem = malloc(MEGA); // MEGA��ŭ�� ũ���� �޸𸮸� �Ҵ�

		if (pmem==NULL)
		{
			puts("�޸𸮸� �Ҵ��� �� �����ϴ�.");
		}
		else
		{
			puts("�޸𸮸� 1MB �Ҵ��Ͽ����ϴ�.");
		}

		free(pmem);
		puts("�޸𸮸� �����Ͽ����ϴ�.");
	}
}
*/

// 99) �޸� ���Ҵ��ϱ� (realloc)
/*
void main(void)
{
	char* pmem;

	pmem = malloc(100);

	if (pmem == NULL)
	{
		puts("�޸𸮸� �Ҵ��� �� �����ϴ�.");
	}
	else
	{
		printf("�Ҵ�� �޸� ���̴� %d ����Ʈ�Դϴ�.\n", _msize(pmem)); //msize�� �޸��� ũ�⸦ �˷���..?

		pmem = realloc(pmem, 200); // pmem�� ũ�⸦ 100 -> 200 ���� �缳��
		
		if (pmem==NULL)
		{
			puts("�޸𸮸� ���Ҵ��� �� �����ϴ�.");

		}
		else
		{
			printf("���Ҵ�� �޸� ���̴� %d ����Ʈ�Դϴ�.\n", _msize(pmem));
		}
	}

	free(pmem);
}
*/

// 100) �޸� �����ϱ� (memcpy)
/*
struct tagM1
{
	int x, y;
	char buffer[30];
};

void main(void)
{
	struct tagM1 x1, x2;

	x1.x = 5;
	x1.y = 10;
	strcpy(x1.buffer, "memory copy");

	memcpy(&x2, &x1, sizeof(x1)); // ����ü�� ��°�� ����

	puts(x2.buffer);

}
*/
 
// 101 �޸� ���ϱ� (memcmp)
/*
void main(void)
{
	char s1[100] = "123";
	char s2[100] = "123";

	strcpy(&s1[4],"abc");
	strcpy(&s2[4],"efg");

	if (strcmp(s1, s2) == 0)
	{
		puts("strcmp: ������ ���� ��ġ�մϴ�.");
	}
	if (memcmp(s1, s2, 7) == 0)
	{
		puts("memcmp: ������ ���� ��ġ�մϴ�.");
	}
	else
	{
		puts("memcmp: ������ ���� ��ġ���� �ʽ��ϴ�.");
	}
}
*/

// 102) �޸� �̵��ϱ� (memmove)
/*

char s1[20] = "1234567890";
char s2[20] = "1234567890";

void main(void)
{
	puts(s1);
	memcpy(s1 + 4, s1 + 2, 5); //s1+4������ s1+2������ 5����Ʈ��ŭ ����
	puts(s1);

	puts(s2);
	memmove(s2 + 4, s2 + 2, 5); // memmove �Լ��� 5����Ʈ�� ��
	puts(s2);
}
*/

// 103) �޸� ä��� (memset)
/*
void main(void)
{
	char string[50] = "�Ƹ��ٿ� �츮���� ���ѹα�";

	puts(string);

	memset(string, (int)NULL, sizeof(string)); // �޸� ä���
	// string�� , (int)NULL��, string�� ũ�⸸ŭ ä���

	memset(string, '*', sizeof(string)-1); // ������ �� ä�������� \0(NULL) ���ڰ� ������� ���ڿ��� ���� �� �ξ���. ���� �� ���� �̻��� �����Ⱚ�� �Բ� ��µ�.
	// * 49�� ���

	puts(string);
}
*/

// 104) �޸𸮸� �����ϴ� �Լ� �����
/*

struct tagM1
{
	int x, y;
	char buffer[30];
};

void* My_memcpy(void* dest, const void* src, unsigned int count);// void������. �ּҸ� �ް� ���� ������ �Ұ�.

void main(void)
{
	struct tagM1 x1, x2;
	x1.x = 5;
	x1.y = 10;
	strcpy(x1.buffer, "memory copy");

	My_memcpy(&x2, &x1, sizeof(x1)); //������ ����, ������ ������, ���� ũ��

	puts(x2.buffer);
}
void* My_memcpy(void* dest, const void* src, unsigned int count)
{
	void* ret = dest; // return�� dest �ּҸ� ����. �̹� ȣ�⿡�� &x2
	
	while (count--) //count�� ���� ����. ���� �� 1 ����.
	{
		//void*�� �� char*������ �� ��ȯ(ĳ��Ʈ ������)
		*(char*)dest = *(char*)src; // ������ �����Ϳ� ����Ű�� ���� �ٸ� ������ �����Ͱ� ����Ű�� ������ ����
		dest = (char*)dest + 1;  // �� �տ��� �� ����..? ������ �����Ϳ��ٰ� ������ �ϴ°�����
		src = (char*)src + 1;
	}
	return ret;
}
*/

// 105) �޸𸮸� �̵��ϴ� �Լ� �����
/*

char s[20] = "1234567890";

void* My_memmove(void* dst, const void* src, unsigned int count);

void main(void)
{
	puts(s);
	My_memmove(s + 4, s + 2, 6); //s�� 4��° ��ҿ� s�� 2��° ��Һ��� 6����Ʈ�� �̵���Ű��
	puts(s);
}

void* My_memmove(void* dst, const void* src, unsigned int count)
{
	void* ret = dst;

	if (dst<=src || (char*)dst >= ((char*)src + count)) 
	{
		// ���� ù ��° �ּҰ� (����Ǿ�� �� ��ġ) �ι�° �ּ�(������ �����͸� ������ ��ġ)�� ���ų� �۴ٸ�
		// �Ǵ� ù ��° �ּ�(char*����)�ι�° �ּҺ��� �ű� �������� ũ�⸦ ���� �� ���� ũ�ų� ���ٸ�

		while (count--)//������ �������� ������ŭ
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst + 1; //�ڿ������� ����
			src = (char*)dst + 1; // ���⿡�� �� �� ��ȯ�� ����? �ּ� ������ ��� ���� �ʳ�..?
				//src�� �ּҿ� src���� 1�� �� �ּҸ� �ٽ� ����
		}
	}
	else
	{
		dst = (char*)dst + count - 1;
		src = (char*)src + count - 1;

		while (count--)
		{
			*(char*)dst = *(char*)src;
			dst = (char*)dst - 1;
			src = (char*)src - 1;
		}
	}

	return ret;
}
*/

// 106) ������ ����ϱ�
/*
void main(void)
{
	char* p_char;
	short* p_short;
	int* p_int;
	long* p_long;
	float* p_float;
	double* p_double;

	printf("�������� ũ��: %d ����Ʈ\n", sizeof(char));
	printf("�������� ũ��: %d ����Ʈ\n", sizeof(short));
	printf("�������� ũ��: %d ����Ʈ\n", sizeof(int));
	printf("�������� ũ��: %d ����Ʈ\n", sizeof(long));
	printf("�Ǽ����� ũ��: %d ����Ʈ\n", sizeof(float));
	printf("�Ǽ����� ũ��: %d ����Ʈ\n", sizeof(double));
	printf("\n");

	printf("������ �������� ũ��: %d ����Ʈ\n", sizeof(p_char));
	printf("������ �������� ũ��: %d ����Ʈ\n", sizeof(p_short));
	printf("������ �������� ũ��: %d ����Ʈ\n", sizeof(p_int));
	printf("������ �������� ũ��: %d ����Ʈ\n", sizeof(p_long));
	printf("�Ǽ��� �������� ũ��: %d ����Ʈ\n", sizeof(p_float));
	printf("�Ǽ��� �������� ũ��: %d ����Ʈ\n", sizeof(p_double));
}
*/

// 107) �����͸� �Լ����� ����ϱ�
/*
void change_x1(int x1);
void change_x2(int* x2);

void main(void)
{
	int x;

	x = 5;
	printf("�Լ��� ȣ���ϱ� �� x��: %d\n", x);

	change_x1(x);
	printf("change_x1()�Լ��� ȣ���� ���� x��: %d\n", x); //x�� �����ͷ� �����Ͽ� �������� ���� �ٲ�� ��

	change_x2(&x);
	printf("change_x2()�Լ��� ȣ���� ���� x��: %d\n", x); //x�� �����ͷ� �����Ͽ� �������� ���� �ٲ�� ��
}

void change_x1(int x1)
{
	x1 = 50;
}

void change_x2(int* x2)
{
	*x2 = 100; //�����ͷ� �ޱ� ������ ���� x�� �ּҿ� �����Ͽ� ���� �����ϰ� ��
}
*/

// 108) ������ �迭 ����ϱ�
/*
void main(void)
{
	int x = 0, y = 0;
	int* pxy[2]; // �����ͷ� �̷���� �迭

	pxy[0] = &x;
	pxy[1] = &y;

	*pxy[0] = 5;
	*pxy[1] = 10;

	printf("x = %d, pxy[0] = %d \n", x, *pxy[0]);
	printf("y = %d, pxy[0] = %d \n", y, *pxy[1]);

	printf("x + y = %d \n", x + y);
	printf("*xy[0] + *xy[1] = %d\n", *pxy[0] + *pxy[1]);
}
*/

// 109) ������ �迭�� �Լ����� ����ϱ�
/*
void print_pxy(int* pxy[2]);

void main(void)
{
	int x = 0, y = 0;
	int* pxy[2];

	pxy[0] = &x;
	pxy[1] = &y;

	*pxy[0] = 5;
	*pxy[1] = 10;

	print_pxy(pxy); //�迭 �̸��� �� ��ü�� �ּ��̱� ������ ��°�� �ѱ�� ��. �׸��� ������ �迭 ������ ���ڰ� ������ ���� ������ ���� X
}

void print_pxy(int* pxy[2])
{
	printf("pxy[0] = %d\n", *pxy[0]);
	printf("pxy[1] = %d\n", *pxy[1]);
}
*/

// 110) 1���� �迭 ����ϱ�
/*
void main(void)
{
	char one[10] = "Koxea";

	puts(one);
	one[2] = 'r'; // �迭 ��ҿ� ���� �����ؼ� ���� ���� (���ڿ� ����� �ٸ� ��(?))
	puts(one);

	printf("one[0] = %3d, %c\n", one[0], one[0]);
	printf("one[1] = %3d, %c\n", one[1], one[1]);
	printf("one[2] = %3d, %c\n", one[2], one[2]);
	printf("one[3] = %3d, %c\n", one[3], one[3]);
	printf("one[4] = %3d, %c\n", one[4], one[4]);
	printf("one[5] = %3d, %c\n", one[5], one[5]);

}
*/

// 111) 1���� �迭�� ������ ����ϱ�
/*
void main(void)
{
	char one[] = "Korea";
	char* pone;

	pone = one; // �迭�� �̸��� �� �ּ�. pone�� one�̶�� �迭�� ����Ű�� �ȴ�.

	puts(one);
	puts(pone);

	strcpy(pone, "Japan"); //pone�� ���ڿ� �迭�� �ּ��̹Ƿ� ��� ����
	// ũ�Ⱑ Korea���� ū ���� ���� �� ����. ó�� ���ڿ��� ���缭 ������ ũ�⸦ �ʱ�ȭ�߱� ����.

	puts(one);
	puts(pone);
	// �� �� ���� �޸𸮸� ����Ű�� �ֱ� ������ �ϳ��� �ٲ㵵 ���� ���� �����
}
*/

// 112) 1���� �迭�� �Լ����� ����ϱ�
/*
void print_one(char* pone);
void print_one2(char one[]); // �����Ͷ� �ƴ϶� �迭�� ��°�� ������ ��.

void main(void)
{
	char one[] = "Korea"; // ũ�� 6���� �ʱ�ȭ. ������ �ε����� 6�̰� \0��

	print_one(one);
	print_one2(one);
}

void print_one(char* pone)
{
	puts(pone);
}

void print_one2(char one[])
{
	puts(one);
}
*/

// 113) 2���� �迭 ����ϱ�
/*
void main(void)
{
	int i;
	int jumsu[100][3];
	int total[3] = { 0, };

	for (i = 0; i < 100; i++)
	{
		jumsu[i][0] = 92; // 0�� ���� ����
		jumsu[i][1] = 90; // 1�� ���� ����
		jumsu[i][2] = 95; // 2�� ���� ����
	}

	for (i = 0; i < 100; i++)
	{
		total[0] += jumsu[i][0]; // ���� ���� ����
		total[1] += jumsu[i][1]; // ���� ���� ����
		total[2] += jumsu[i][2]; // ���� ���� ����
	}

	printf("���� ������ ����: %d\n", total[0]);
	printf("���� ������ ����: %d\n", total[1]);
	printf("���� ������ ����: %d\n", total[2]);
}

*/

// 114) 2���� �迭�� ������ ����ϱ�
/*
void main(void)
{
	int i;
	int jumsu[100][3];
	int total[3] = { 0, };
	int(*pjumsu)[3]; // 2���� �迭 ������

	pjumsu = jumsu;

	for (i = 0; i < 100; i++)
	{
		pjumsu[i][0] = 92; // 0�� ���� ����
		pjumsu[i][1] = 90; // 1�� ���� ����
		pjumsu[i][2] = 95; // 2�� ���� ����
	}

	for (i = 0; i < 100; i++)
	{
		total[0] += pjumsu[i][0]; // ���� ���� ����
		total[1] += pjumsu[i][1]; // ���� ���� ����
		total[2] += pjumsu[i][2]; // ���� ���� ����
	}

	printf("���� ������ ����: %d\n", total[0]);
	printf("���� ������ ����: %d\n", total[1]);
	printf("���� ������ ����: %d\n", total[2]);
}
*/

// 115) 2���� �迭�� �Լ����� ����ϱ�
/*
void calc(int(*pjumsu)[3], int* ptotal);

void main(void)
{
	// 2���� �迭
	// �迭 ������
	// total�� ������ ������ �迭 (������ 3���̱� ������ �迭�� ����)
	 
	int jumsu[100][3];
	int total[3] = { 0, };
	int(*pjumsu)[3];

	pjumsu = jumsu;

	calc(pjumsu, total); //�� �� �ּҰ��̹Ƿ� �̷��� ���ڸ� ����

	printf("���� ������ ����: %d\n", total[0]);
	printf("���� ������ ����: %d\n", total[1]);
	printf("���� ������ ����: %d\n", total[2]);
}

void calc(int(*pjumsu)[3], int* ptotal)
{
	int i;

	for (i = 0; i < 100; i++) // i�� 0���� 99�� �� ����
	{
		pjumsu[i][0] = 92;
		ptotal[0] += pjumsu[i][0];

		pjumsu[i][1] = 90;
		ptotal[1] += pjumsu[i][1];

		pjumsu[i][2] = 95;
		ptotal[2] += pjumsu[i][2];

	}
}
*/

// 116) 3���� �迭 ����ϱ�
/*
void main(void)
{
	int i, j;
	int jumsu[10][30][3];
	int total[3] = { 0, };

	for (i = 0; i < 10; i++) // 10
	{
		for (j = 0; j < 30; j++)
		{
			jumsu[i][j][0] = 92;
			total[0] += jumsu[i][j][0];

			jumsu[i][j][1] = 90;
			total[1] += jumsu[i][j][1];

			jumsu[i][j][2] = 95; // ��ΰ� ���� ����
			total[2] += jumsu[i][j][2];
		}
	}

	printf("��� ���� ���� ������ ����: %d\n", total[0]);
	printf("��� ���� ���� ������ ����: %d\n", total[1]);
	printf("��� ���� ���� ������ ����: %d\n", total[2]);
}
*/

// 117) 3���� �迭�� ������ ����ϱ�
/*
void main(void)
{
	int i, j;
	int jumsu[10][100][3];
	int total[3] = { 0, };
	int(*pjumsu)[100][3];

	pjumsu = jumsu;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 100; j++) 
		{
			pjumsu[i][j][0] = 92;
			total[0] += pjumsu[i][j][0];

			pjumsu[i][j][1] = 90;
			total[1] += pjumsu[i][j][1];

			pjumsu[i][j][2] = 95;
			total[2] += pjumsu[i][j][2];

		}
	}

	printf("��� ���� ���� ������ ����: %d\n", total[0]);
	printf("��� ���� ���� ������ ����: %d\n", total[1]);
	printf("��� ���� ���� ������ ����: %d\n", total[2]);
}
*/

// 118) 3���� �迭�� �Լ����� ����ϱ�
/*

void calc(int(*psumsu)[100][3], int* ptotal);

void main(void)
{
	int jumsu[10][100][3];
	int total[3] = { 0, }; //total �ʱ�ȭ �� �ϸ� �����Ⱚ�� ä���� ����

	calc(jumsu, total);

	printf("��� ���� ���� ������ ����: %d\n", total[0]);
	printf("��� ���� ���� ������ ����: %d\n", total[1]);
	printf("��� ���� ���� ������ ����: %d\n", total[2]);

}
void calc(int(*pjumsu)[100][3], int* ptotal)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 100; j++)
		{
			pjumsu[i][j][0] = 92;
			ptotal[0] += pjumsu[i][j][0];

			pjumsu[i][j][1] = 90;
			ptotal[1] += pjumsu[i][j][1];

			pjumsu[i][j][2] = 95;
			ptotal[2] += pjumsu[i][j][2];

		}
	}
}
*/

// 119) ����ü ����ϱ�
/*

struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad;

	strcpy(ad.name, "ȫ�浿");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "����� ��õ�� �񵿾���Ʈ 13����");

	printf("�̸�: %s\n", ad.name);
	printf("��ȭ: %s\n", ad.phone);
	printf("�ּ�: %s\n", ad.address);
}

*/

// 120) ����ü ������ ����ϱ�
/*
struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad;
	struct tagAddress* pad; //Ÿ�� + ������

	pad = &ad; // pad���� ad�� �ּ� ���� 

	strcpy((*pad).name, "ȫ�浿"); //�迭�� ����̱� ������ ���ο� �� ������ �Ұ���?
	strcpy((*pad).phone, "02-1234-5678");
	strcpy((*pad).address, "��⵵ ����� �Ͼ��ְ� 5����");


	printf("�̸�: %s\n", pad->name);
	printf("��ȭ: %s\n", pad->phone);
	printf("�ּ�: %s\n", pad->address);

}
*/

// 121) ����ü�� �Լ����� ����ϱ�
/*
void print(struct tadAddress* pad);// ����ü �����͸� �Ű������� �ϴ� �Լ�

struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad;

	strcpy(ad.name, "ȫ�浿");
	strcpy(ad.phone, "010-1234-5678");
	strcpy(ad.address, "��⵵ ����� �Ͼȵ�");

	print(&ad);// ����ü�� �迭�� �ƴϱ� ������ �ּҿ����� ���
}

void print(struct tagAddress* pad)
{
	printf("�̸�: %s\n", pad->name);
	printf("��ȭ: %s\n", pad->phone);
	printf("�ּ�: %s\n", pad->address);
}
*/


// 122) ����ü �迭 ����ϱ�
/*
struct tagAddress
{
	char name[20];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad[3]; // �׳� ���ȣ�� ����� �߰����ָ� ��
	int i;

	for (i = 0; i < 3; i++)
	{
		sprintf(ad[i].name, "ȫ�浿 %d", i+1);//�����ϴ� �Լ�
		strcpy(ad[i].phone, "010-1234-5678");
		strcpy(ad[i].address, "��⵵ �����");
	}

	for (i = 0; i < 3; i++)
	{
		printf("�̸�: %s\n", ad[i].name);
		printf("��ȭ: %s\n", ad[i].phone);
		printf("�ּ�: %s\n", ad[i].address);
		printf("\n");
	}
}
*/

// 123) ����ü �迭 ������ ����ϱ�
// ����ü�� 2����, 3���� �迭��?
/*
struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

void main(void)
{
	struct tagAddress ad[3];
	struct tagAddress* pad;
	int i;

	pad = ad; // �迭�̹Ƿ� �ּҿ����� X

	for (i = 0; i < 3; i++)
	{
		sprintf(pad[i].name, "ȫ�浿 %d", i + 1);//�����ϴ� �Լ�
		strcpy(pad[i].phone, "010-1234-5678");
		strcpy(pad[i].address, "��⵵ �����");
	}
	// �迭�� *������ �ʿ�X

	for (i = 0; i < 3; i++)
	{
		printf("�̸�: %s\n", pad[i].name);
		printf("��ȭ: %s\n", pad[i].phone);
		printf("�ּ�: %s\n", pad[i].address);
		printf("\n");
	}
}
*/

// 124) ����ü �迭�� �Լ����� ����ϱ�
//������
/*
struct tagAddress
{
	char name[30];
	char phone[30];
	char address[100];
};

void print(struct tagAddress* pad);// �׳� ����ü �����͸� ����ص� ��

void main(void)
{
	struct tagAddress ad[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		sprintf(ad[i].name, "ȫ�浿 %d", i+1);
		strcpy(ad[i].phone, "010-5693-8006");
		strcpy(ad[i].address, "��⵵ �����");
	} // 3�� �ݺ�

	print(&ad);
}

void print(struct tagAddress *pad)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		print("�̸�: %s\n", pad[i].name);
		print("��ȭ: %s\n", pad[i].phone);
		print("�ּ�: %s\n", pad[i].address);
	}
}
*/


// 125) ����ü�� ���̸� ���ϰ� �ʱ�ȭ�ϱ�
/*
struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];
};

typedef struct tagAddress addr;

void main(void)
{
	addr ad;
	int len;

	len = sizeof(addr);

	printf("����ü addr�� ũ��: %d\n", len); // 30+20+100�� ��. ����ü ���� ��� �޸� ������ ��.

	memset(&ad, 0, len); 
	// ����ü �ʱ�ȭ �ÿ��� memset�� ���� �ȴ�
}
*/

// 126) ����ü ����ϱ�
/*
typedef union tagVariable
{
	int i;
	double d;
} VA;

void main(void)
{
	VA va;

	va.i = 5;

	printf("va.i ����ü�� ��: %d\n", va.i);

	va.d = 3.14; // ����ü�� ����� �� ���� �ʱ�ȭ

	printf("va.d ����ü�� ��: %f\n", va.d);
	printf("va.i ����ü�� ��: %d\n", va.i);
}
*/

// 127) ����ü�� �Լ����� ����ϱ�
/*
typedef union tagVariable
{
	int i;
	double d;
}VA;

void print(VA* pva);

void main(void)
{
	VA va;

	print(&va); // ����ü�� ����ó�� �ּҷ� �Ѱ���
}

void print(VA* pva)
{
	pva->i = 5; //�迭�� �ƴϱ� ������ ���� �����ڰ� �ʿ���
	printf("pva->i ����ü�� ��: %d\n", pva->i);
	printf("\n");
	pva->d = 3.14;
	printf("pva->d ����ü�� ��: %f\n", pva->d);
	printf("pva->i ����ü�� ��: %d\n", pva->i);
}
*/

// 128) void�� ������ ����ϱ�
/*
void main(void)
{
	int i;
	double d = 3.14;

	int* pi;
	double* pd;
	void* pv;

	pi = &i;
	pd = &d;
	pi = &d;
	pv = &i;
	pv = &d;

	printf("�Ǽ� �� d: %f\n", *(double*)pv);

}
*/

// 129) void�� �����͸� �Լ����� ����ϱ�
/*
typedef struct tagPoint
{
	int x;
	int y;
}point;

void My_memset(void* dest, int c, unsigned count);

void main(void)
{
	point pt = { 5,10 };
	char array[10];

	printf("x,y: %d, %d\n", pt.x, pt.y);

	My_memset(&pt, 0, sizeof(pt)); //void �����͸� ����Ͽ����� �Լ� �� ���� �� ĳ��Ʈ �����ڸ� ����ؾ� ��
	
	printf("x,y: %d, %d\n", pt.x, pt.y);

	My_memset(array, 65, sizeof(array));


	printf("array[0]~arra[9]: %c ~ %c\n", array[0], array[9]);


}


void My_memset(void* dest, int c, unsigned count)
{
	while (count--) //�������� ũ�⸸ŭ
	{
		*(char*)dest = c; //c�� �ֱ� ���� char������ ��ȯ?
		dest = (char*)dest + 1; // �ּ� 1����

	}
}
*/

// 130) �������� ������ ����ϱ�
// ������
/*
void main(void)
{
	char* animal[3]; // ������ �迭?
	char** ppanimal;

	animal[0] = "ȣ����";//���ڿ��� ����� �ּ� ǥ���̱� ������ �迭 �����Ϳ� �����ؾ� �� 
	animal[2] = "����";
	animal[2] = "�䳢";

	ppanimal = animal;

	puts(animal[0]);
	puts(ppanimal[1]);
	puts(ppanimal[2]);
}
*/

// 131) �������� �����͸� �Լ����� ����ϱ�
/*
void print(char** ppanimal);

void main(void)
{
	char* animal[3];

	animal[0] = "ȣ����";
	animal[1] = "����";
	animal[2] = "�䳢";

	print(animal);
}


void print(char** ppanimal) // ������ �迭�� �ּҸ� �޴� ������. �������� ������.
{
	puts(ppanimal[0]);
	puts(ppanimal[1]);
	puts(ppanimal[2]);
	// ���� �� �� ��..?
}
*/

// 132) �Լ� ������ ����ϱ�
/*
void main(void)
{
	int (*myfunc)(const char*);
	// const char*Ÿ���� ���ڸ� ������ myfunc�̶�� �̸��� �Լ�...������ ������

	myfunc = puts; // �Լ� �����Ϳ� puts�Լ� ����

	puts("��ì��");
	myfunc("��ì��");

	myfunc = strlen;
	printf("���ڿ��� ����: %d", strlen("apple"));
	printf("���ڿ��� ����: %d", myfunc("apple"));
}
*/

// 133) �Լ� �����͸� �迭���� ����ϱ�
/*
void main(void)
{
	int (*myfunc[3])(const char*); //�Լ� ������ �迭

	myfunc[0] = puts;
	myfunc[1] = strlen;
	myfunc[2] = myfunc[1]; //strlen

	puts("��ì��");
	myfunc[0]("��ì��");

	printf("���ڿ��� ����: %d\n", strlen("apple"));
	printf("���ڿ��� ����: %d\n", myfunc[1]("apple"));
	printf("���ڿ��� ����: %d\n", myfunc[2]("apple"));
}
*/

// 134) �Լ� �����͸� �Լ����� ����ϱ�
/*
void print1(int (*X)(const char*));
void print2(int (*X[2])(const char*)); //���ڷ� ���ڿ� ���

void main(void)
{
	int (*myfunc[2])(const char*);

	myfunc[0] = puts;
	myfunc[1] = strlen;

	print1(myfunc[0]);
	print2(myfunc);

}


void print1(int (*X)(const char*))
{
	X("��ì��");
}
void print2(int (*X[2])(const char*))
{
	X[0]("�޴ٸ�");
	printf("���ڿ��� ����: %d\n", X[1]("apple"));
}
*/

// 135) main() �Լ� ���� ����ϱ�
/*
int main(int argc, int *argv[]) // ���� �� ���� ���ڿ� �迭 �� ���� �޾Ƽ�
{
	int i;
	printf("�μ��� ��: %d\n", argc);  // ������ ����ϰ�

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]); // ���ڿ� �迭�� �ε����� ���� �� ���� ������� ���
	}
}

*/

// 136) ���� �����ϱ� (fopen)
/*
void main(void)
{
	FILE* file; //FILE ����ü�� ���� file ����

	file = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+"); // ���� ���� ���� ����

	if (file == NULL) // ������ �ڿ��� ������ ���ٸ�
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		puts("������ ���������� �����Ǿ����ϴ�.");
		fclose(file);
	}
}
*/

// 137) ���Ͽ� �� ���� ���� (fputc)
/*

void main(void)
{
	FILE* fp; // file pointer

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");  // write���������� ��ο� ������ ������ ����, ������ ������

	if (fp==NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fputc('A', fp);
		puts("���� 'A'�� ���Ͽ� �����Ͽ����ϴ�.");
		fclose(fp);
	}
}
*/


// 138) ���Ͽ��� �� ���� �б� (fgetc)
/*
void main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp==NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		ch = fgetc(fp);
		printf("���� ����: %c\n", ch);
		fclose(fp);

	}
}
*/

// 139) ���Ͽ� ���ڿ� ���� (fputs)
/*
void main(void)
{
	FILE* fp;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		fputs("���ѹα�\n", fp);
		fclose(fp);
	}
}
*/

// 140) ���Ͽ��� ���ڿ� �б� (fgets)
/*
void main(void)
{
	FILE* fp;
	char buffer[100];

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp==NULL)
	{
		puts("���� ���⿡ �����Ͽ����ϴ�.");
	}
	else
	{
		fgets(buffer, 100, fp);
		puts(buffer);
		fclose(fp);
	}
}
*/

// 141) ���Ͽ� ����ȭ�� ���ڿ� ���� (fprintf)
/*
void main(void)
{
	FILE* fp;
	int i = 12345;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("������ �� �� �����ϴ�.");
	}
	else 
	{
		fprintf(fp,"%d\n", i);
		fclose(fp);
	}
	
}
*/

// 142) ���Ͽ��� ����ȭ�� ���ڿ� �б� (fscanf)
/*
void main(void)
{
	FILE* fp;
	int i;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp==NULL)
	{
		puts("������ �� �� �����ϴ�.");
	}
	else
	{
		fscanf(fp, "%d", &i); // ����ȭ�� ���ڿ� �б�
		printf("i = %d\n", i);
		fclose(fp);
	}
}
*/

// 143) ������ ���� ���� (fflush)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("���� ���� ����");
	}
	else
	{
		fputs("���ѹα�",fp);
		fflush(fp);
		fclose(fp);
	}
}
*/

// 144) ���� �������� ���� ��ġ ���ϱ� (ftell)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("File cannot be opened");
	}
	else
	{
		printf("���� �������� ��ġ : % d\n", ftell(fp));
		fputs("abcde", fp);
		printf("���� �������� ��ġ: %d\n", ftell(fp)); // result should be 5, but returned 0(why?)
		fclose(fp);
	}
}
*/


// 145) ���� �����͸� ó������ �̵��ϱ� 1
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("���� ���� ����");
	}
	else
	{
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		fputs("abcde", fp);
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		fseek(fp, 3L, SEEK_SET);
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		fclose(fp);
	}
}
*/

// 146) ���� �����͸� ó������ �̵��ϱ� 2(rewind)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("������ ������ �� �����ϴ�.");
	}
	else
	{
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		fputs("abcde", fp);
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		rewind(fp);
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		fclose(fp);
	}
}
*/

// 147) ���� �����͸� ������ �̵��ϱ� (fseek)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("���� ���� ����");
	}
	else
	{
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		fputs("12345", fp);
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		rewind(fp);
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		fseek(fp, 0L, SEEK_END);
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		fclose(fp);

	}
}
*/

// 148) ���� �����͸� ������ ��ġ�� �̵��ϱ� (fseek)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("���� ���� ����");
	}
	else
	{
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		fputs("Hello", fp);
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		fseek(fp, 3L, SEEK_CUR);
		printf("���� �������� ��ġ: %d\n", ftell(fp));
	}
}
*/

/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp== NULL)
	{
		puts("���� ���� ����");
	}
	else
	{
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		fputs("Hello there, this is me speaking.", fp);
		fseek(fp, 0L, SEEK_END);
		fprintf(fp, "I see %d of them", 4); // Ŀ���� ���� ������ �ΰ� �ٽ� ������ ���� �����Ͱ� �������� �ʴ´�.
		printf("���� �������� ��ġ: %d\n", ftell(fp));
		
	}
}
*/

// 149) ������ ���� ���ϱ� (fseek)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp==NULL)
	{
		puts("���� ���� ����");
	}
	else
	{
		fseek(fp, 0L, SEEK_END);
		printf("������ ����: %d\n", ftell(fp));// ����: 48
		fclose(fp);
	}
}
*/


// 150) ���� �������� ���� ��ġ ���ϱ� 2 (fgetpos)
/*
void main(void)
{
	FILE* fp;
	fpos_t pos; //fpos_t��� ����ü�� ��򰡿� ���ǵǾ� ����

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("Failed to open file.");
	}
	else
	{
		fputs("abcde", fp);
		fgetpos(fp, &pos);// fp�� ��ġ�� �����ͼ� pos�� ����
		printf("location of file pointer: %d\n", pos);
		fclose(fp);
	}

}
*/

/*
void main(void)
{
	FILE* fp;
	fpos_t pos;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	if (fp==NULL)
	{
		puts("Failed to open file.");
	}
	else
	{
		fputs("Hello, this is Sumin speaking.", fp);
		fgetpos(fp, &pos);
		printf("File pointer location: %d\n", pos);
		rewind(fp);
		fgetpos(fp, &pos);
		printf("File pointer location: %d\n", pos);
		fseek(fp, 4L, SEEK_CUR);
		fgetpos(fp, &pos);
		printf("File pointer location: %d\n", pos);

		fclose(fp);

	}
}
*/

// 151) ���� �������� ���� ��ġ �����ϱ� (fsetpos)
/*
void main(void)
{
	FILE* fp;
	fpos_t pos;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	
	fputs("abcde", fp);
	fgetpos(fp, &pos);					
	printf("���� �������� ��ġ: %d\n", pos); // ���� �������� ��ġ: 5
	fsetpos(fp, &pos);						
	printf("���� �������� ��ġ: %d\n", pos);  // ���� �������� ��ġ: 0 // fsedtpos�� 0���� �缳���ϴ� �Լ�?

	fputs("Hello", fp);
	printf("���� �������� ��ġ: %d\n", ftell(fp)); //6 or 5
	rewind(fp);
	printf("���� �������� ��ġ: %d\n", ftell(fp));  //0
	fsetpos(fp, &pos); // �ٷ� ������ ��ġ�� ������
	printf("���� �������� ��ġ: %d\n", pos); // ?
	fclose(fp);
}
*/

// 152) ���� �ݱ� (fclose)
/*
void main(void)
{
	FILE* fp;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "w+");

	fputs("fclose()�Լ�", fp);
	fclose(fp);
}
*/

// 153) ������ ���� �����ߴ��� �˻��ϱ� (feof)
// �� eof�� ��ȯ���� ����?
/*
void main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r"); // �б� ��尡 �ƴϸ� �о���� ����


	if (fp==NULL)
	{
		puts("Failed to open file.");
	}
	else
	{
		while (!feof(fp)) //feof�Լ��� eof�� ��ȯ�Ǹ� ��, �׷��� ������ ������ ��ȯ��. 
			//eof�� ���̹Ƿ� !������ �ϸ� eof�� ���� ��� ������ ������ �Ǿ� �ݺ����� ����
		{
			ch = fgetc(fp); // ���ڸ� �ϳ��� �о ����
			printf("���� ����: %c \n", ch);
		}
		
		fclose(fp);
	}
 }
 */

// 154) ���� �б�/ ���� �� ���� �˻��ϱ� (ferror)
/*
void main(void)
{
	FILE* fp;
	int ch;

	fp = fopen("C:\\Users\\sumin\\Downloads\\file.txt", "r");

	if (fp==NULL)
	{
		puts("Failed to open file");
	}
	else
	{
		while (!feof(fp))
		{
			ch = fgetc(fp);
			if (ferror(fp))
			{
				puts("������ �д� �߿� ������ �߻��Ͽ����ϴ�.");
			}
			printf("���� ����: %c\n", ch);
		}
		fclose(fp);
	}
}
*/

// 155) ���� ó�� �� �߻��� ���� ǥ���ϱ� (perror)
/*
void main(void)
{
	FILE* fp;
	int ch;
	fp = fopen("C:\\Users\\sumin\\Downloads\\file_name.txt", "r");

	if (fp==NULL)
	{
		perror("���� ���� ����");
	}
	else
	{
		while (!feof(fp))
		{
			ch = fgetc(fp);
			printf("���� ����: %c\n", ch);

			if (ferror(fp))
			{
				perror("���� ���� ����");
			}
			fclose(fp);
		}
		
	}
}
*/

// 156) �ӽ� ���� �̸� ����� (tmpnam)
/*
void main(void)
{
	int i;
	char buffer[500];
	char* path;

	for (i = 0; i < 10; i++)
	{
		tmpnam(buffer);
		puts(buffer);
	}

	for (i = 0; i < 10; i++)
	{
		path = _tempnam("", "test");
		puts(path);
	}
}
*/

// 157) ������ �����ϴ��� Ȯ���ϱ� (_access)
/*
void main(void)
{
	char* path = "C:\\Users\\sumin\\Downloads\\file.txt";

	if (_access(path,2) == 0)
	{
		puts("A file exists in the following directory.");
	}
}
*/

// 158) ���� �̸� �����ϱ� (rename)
/*
void main(void)
{
	char* oldName = "C:\\Users\\sumin\\Downloads\\file.txt";
	char* newName = "C:\\Users\\sumin\\Downloads\\file_1.txt";

	if (rename(oldName, newName) != 0)
	{
		perror("���ϸ� ���� ����");
	}
	else
	{
		puts("���ϸ��� ���������� �����߽��ϴ�.");
	}
}
*/

/*
void main(void)
{
	char* oldName = "C:\\Users\\sumin\\Downloads\\file_1.txt";
	char* newName = "C:\\Users\\sumin\\Downloads\\file.txt";

	if (rename(oldName,newName) !=0) //���� �� 0��ȯ
	{
		perror("���ϸ� ���� ����.");
	}
	else
	{
		puts("���ϸ��� ���������� �����߽��ϴ�.");
	}

}
*/

// 159) ���� �Ӽ� �����ϱ� (_chmod)
/*
void main(void)
{
	char* filename = "C:\\Users\\sumin\\Downloads\\file.txt";

	if (_chmod(filename, _S_IREAD)!=0)
	{
		perror("���� �Ӽ� ���� ����");
	}
	else
	{
		puts("������ �Ӽ��� ���������� �����Ͽ����ϴ�.");
	}
}
*/

// 160) ���� �����ϱ� (remove)
/*
void main(void)
{
	char* filename = "C:\\Users\\sumin\\Downloads\\file.txt"; //��δ� �Ϲ� ���ڿ� �����Ϳ� ���� ����

	if (remove(filename)) // 0�� ��ȯ�ϸ� ���� ���
	{
		perror("���� ���� ����");

		_chmod(filename, _S_IWRITE);
		remove(filename);
		puts("������ ���������� �����Ͽ����ϴ�.");

	}
	else
	{
		puts("������ ���������� �����Ͽ����ϴ�.");
	}
}
*/

// 161) ���͸� �����ϱ� (_mkdir)
// ���͸� == ����
/*
void main(void)
{
	char* pathname = "c:\\ccc";

	if (_mkdir(pathname) == -1) // ���� �� -1 ��ȯ
	{
		perror("���͸� ���� ����");
	}
	else
	{
		puts("���͸��� ���������� �����Ͽ����ϴ�.");
		// ���߿� �ٽ� ���� ���ص� ���� �ִ�.
	}
}
*/

// 162) ���͸� �����ϱ� (_rmdir)
/*
void main(void)
{
	char* pathname = "c:\\ccc";
	if (_rmdir(pathname) == -1)
	{
		perror("���͸� ���� ����");
	}
	else
	{
		puts("���͸��� ���������� �����Ͽ����ϴ�.");
	}
}
*/

// 163) ���� �۾����� ���͸� ���ϱ� (_getcwd)
/*
void main(void)
{
	char pathname[_MAX_PATH]; // �������� ��ũ�� Ȱ�� 
	// _MAX_PATH �ü������ ����ϴ� ���丮�� �ִ� ����

	_getcwd(pathname, _MAX_PATH); // _getcwd(����, ���� ����) -> ���� �۾����� ���͸� ��ȯ

	puts(pathname);
}
*/

// 164) ���� �۾����� ���͸� �����ϱ� (_chdir)
/*
void main(void)
{
	char pathname[_MAX_PATH] = "c:\\temp"; //�ٸ� ���丮�� ����

	if (_chdir(pathname) == 0) // error: -1 // ���� ���丮�� pathname�� ����� ���丮�� ����
	{
		_getcwd(pathname, _MAX_PATH); // ���� ���丮�� pathname�̶�� �̸��� ���ۿ� ����. ũ��� _MAX_PATH
		puts(pathname);// ���ۿ� ����� ���ڿ�(���丮) ���
	}
}
*/

// 165) ���� �۾����� ����̺� ���ϱ� (_getdrive)
/*
void main(void)
{
	int drive;

	drive = _getdrive();

	printf("���� ����̺�: %c\n", 'A' + drive - 1);
}
*/

// 166) ���� �۾����� ����̺� �����ϱ� (_chdrive)
/*
void main(void)
{
	int drive = 3;
	
	if (_chdrive(drive) == 0) // error: -1
	{
		drive = _getdrive();
		printf("����� ����̺�: %c\n", 'A' + drive - 1);
	}
	else
	{
		perror("����̺� ���� ����");
	}
}
*/

// 167) ǥ�� ��,��� ��Ʈ�� ����ϱ� (stdin, stout)
/*
void main(void)
{
	printf("���� ���̿� ���� ���̷δ�...");
}
*/

/*
void main(void)
{
	char buffer[100];
	gets(buffer);
	puts(buffer);
}
*/

// 168) ������� ����� ���� �� ���ϱ� (time)
/*
void main(void)
{
	time_t now;

	time(&now); 
	printf("1970�� 1�� ���� ������� ����� ��: %d\n", now);
}
*/

// 169) ��¥ �� �ð� ���ϱ� (localtime)
/*
void main(void)
{
	time_t now;
	struct tm t;

	time(&now);

	t = *localtime(&now);

	printf("���� ��¥ �� �ð�: %4d.%d.%d %d:%d:%d\n", 
		t.tm_year+1900, t.tm_mon+1, t.tm_mday, 
		t.tm_hour, t.tm_min, t.tm_sec);
}
*/

// 170) ��¥ �� �ð� ���ϱ� 2 (_ftime)
/*
void main(void)
{
	struct _timeb tb;
	struct tm t;

	_ftime(&tb);

	t = *localtime(&tb.time);

	printf("���� ��¥ �� �ð�: %4d.%d.%d %d:%d:%d.%d\n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday, t.tm_hour,
		t.tm_min, t.tm_sec, tb.millitm);
}
*/

// 171) ���� ǥ�� �� ���ϱ� (gmtime)
/*
void main(void)
{
	time_t now;
	struct tm t;

	time(&now); // now��� ������ ���� �ð��� ����

	t = *gmtime(&now); // gmtime�̶�� �Լ��� �����Ͽ� now�� �ּҸ� ���ڷ� �Է��ϰ� �� ����� ��ȯ

	printf("���� ǥ�� ��: %4d.%d.%d %d:%d:%d\n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday,
		t.tm_hour, t.tm_min, t.tm_sec);

}
*/

// 172) ��¥ �� �ð��� ���ڿ��� ��ȯ�ϱ� (ctime)
/*
void main(void)
{
	time_t now;

	time(&now); //now���� ���� �ð��� ����Ǿ� ����

	printf("���� ��¥ �� �ð�: %s\n", ctime(&now)); // �ð��� ����(Char)�� ���
}
*/

// ���̺귯���� ����, �ܾ��̴�. ���� �Ẽ���� ���� �˰� �ȴ�.

// 173) ��¥ �� �ð��� ���ϰų� ���� (mktime)
/*
void main(void)
{
	time_t now;
	struct tm t;

	time(&now);
	t = *localtime(&now); // ǥ�ؽð��� ����ȭ
	t.tm_mday += 100; //���� ��¥�� 100���� ���� ��¥
	mktime(&t);

	printf("���� ǥ�� ��: %4d.%d.%d %d:%d:%d\n",
		t.tm_year + 1900, t.tm_mon + 1, t.tm_mday,
		t.tm_hour, t.tm_min, t.tm_sec);
}
*/

// 174) ��¥ �� �ð��� ���� ���ϱ� (difftime)
/*
void main(void)
{
	time_t s1, s2;
	double gop = 1;
	int i;

	time(&s1); // ���α׷� ���� �� �ð��� s1�� ����

	
	for (i = 0; i < 20; i++)
	{
		gop *= 2;
	}
	
	Sleep(3000);


	time(&s2); // for���� ����� ���� �ð��� s2�� ����
	printf("����ð�: %g�� \n", difftime(s2, s1)); // s2���� s1�� ����
	// for���� õ���� �ݺ��Ǵ� ���� �ɸ��� �ð��� ������ش�
	printf("%d", gop);

}
*/

// 175) ��¥ �� �ð��� �̱������� ��ȯ�ϱ� (asctime)
/*
void main(void)
{
	time_t now;
	struct tm t;
	now = time(NULL);
	t = *localtime(&now);

	printf("���� ��¥ �� �ð�:%s\n", asctime(&t));
}
*/

// 176) ��¥ �� �ð��� ����ȭ�ϱ� (strftime)
/*
void main(void)
{
	time_t now;
	struct tm t;
	char buff[100];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "%Y-%m-%d %I:%M:%S %p", &t);

	puts(buff);
}
*/

// 177) �ﰢ �Լ� ���� �� ���ϱ� (sin)
/*
void main(void)
{
	double x;
	x = sin(1);
	printf("sin(1): %g\n", x);
}
*/

// 178) �ﰢ �Լ� ��ũ ���� �� ���ϱ� (asin)
/*
void main(void)
{
	double x;

	x = asin(0.5);

	printf("asin(0.5):%g\n", x);
}
*/

// 179) �ﰢ �Լ� x/y�� ���� ��ũ ź��Ʈ �� ���ϱ� (atan2)
/*
void main(void)
{
	double x;

	x = atan2(1.0, 1.0);

	printf("atan2(1.0,1.0): %g\n",x);
}
*/

// 180) ���� �Լ� ������ ���ϱ�(exp)
/*
void main(void)
{
	double x;
	x = exp(1.0);

	printf("exp(1.0): %g\n", x);
}
*/

// 181) �α� �Լ� �ڿ� �αװ� ���ϱ� (log)
/*
void main(void)
{
	double x;
	x = log(2.0);

	printf("log(2.0): %g\n", x);
}
*/

// 182) �α� �Լ� �ؼ��� 10���� �ϴ� �αװ� ���ϱ� (log10)
/*
void main(void)
{
	double x;
	x = log10(2.0);
	printf("long10(2.0):%g \n", x);
}
*/

// 183) ������ ���ϱ� (sqrt)
/*
void main(void)
{
	double x;
	x = sqrt(4.0);
	printf("sqrt(4.0):%g\n", x);
}
*/

// 184) ���밪 ���ϱ� (abs)
/*
void main(void)
{
	printf("abs(1): %d\n", abs(1));
	printf("abs(-1): %d\n", abs(-1));
}
*/

// 185) �־��� ������ ���� ���� �ּ� ������ ���ϱ� (ceil)
/*
void main(void)
{
	printf("ceil(1.0): %g\n", ceil(1.0));
	printf("ceil(1.1): %g\n", ceil(1.1));
	printf("ceil(1.9): %g\n", ceil(1.9));
	printf("ceil(2.5): %g\n", ceil(2.5));
	printf("ceil(-2.5): %g\n", ceil(-2.5));
	printf("ceil(-3.0): %g\n", ceil(-3.0));
}
*/

// 186) �־��� ������ ũ�� ���� �ִ��� ������ ���ϱ� (floor)
/*
void main(void)
{
	printf("floor(1.0):%g\n", floor(1.0));
	printf("floor(1.1):%g\n", floor(1.1));
	printf("floor(1.9):%g\n", floor(1.9));
	printf("floor(2.5):%g\n", floor(2.5));
	printf("floor(-2.5):%g\n", floor(-2.5));
	printf("floor(-3.0):%g\n", floor(-3.0));
}
*/

// 187) �־��� ���� ������ �Ҽ��� �и��ϱ� (modf)
/*
void main(void)
{
	double x = 2.3, n, y;
	y = modf(x, &n);
	printf("2.3�� ������ �Ҽ��� �и��ϸ�, %g�� %g�Դϴ�.\n", n, y);
}
*/

// 188) x�� y�� ���ϱ� (pow)
/*
void main(void)
{
	double x = 10.0, y = 3.0, r;

	r = pow(x, y); // x to the power of y

	printf("10�� 3���� %g�Դϴ�.\n", r);
}
*/

// 189) ���� ���ϱ� (srand, rand)
/*
void main(void)
{
	int i;
	srand((unsigned)time(NULL)); // ���� �߻��⸦ �ʱ�ȭ -> 1970����� ������� ���� �ð�����

	for (i = 0; i < 5; i++)
	{
		printf("���� %d: %d\n",i+1, rand());
	}
}
*/

// 1���� 150���� ���� �߻���Ű��
/*
void main(void)
{
	int rnd; 
	int i;

	srand((unsigned)time(NULL)); // �ʱ�ȭ (��� ��ȭ�ϴ� �ð����� ����)

	 // ������ 150���� ���� ������ (�׻� 150 ������ ��) + 1 -> 1~150������ ������ ��ȯ�ϰ� ��

	for (i = 0; i < 5; i++)
	{
		rnd = rand() % 500 + 1500;
		printf("���� %d: %d \n", i, rnd);
	}
}
*/

// 190) ���� �����ϱ� (qsort)
/*
int intcmp(const void* v1, const void* v2);

void main(void)
{
	int i;
	int array[5] = { 5,3,4,1,2 };

	qsort(array, 5, sizeof(array[0]), intcmp);

	for (i = 0; i < 5; i++)
	{
		printf("%d ", array[i]);
	}
}

int intcmp(const void* v1, const void* v2)
{
	int cmpvalue1, cmpvalue2;

	cmpvalue1 = *(int*)v1; // ���� ������ ������ ��ȯ(void pointer�̱� ����) �� ���� ���� + cmpv1�� ����
	cmpvalue2 = *(int*)v2;

	return cmpvalue1 - cmpvalue2;
}
*/

// 191) ���� �˻� ����ϱ� (bsearch)
/*
int intcmp(const void* v1, const void* v2);

void main(void)
{
	int key = 5, * ptr; // int�� ������ int�� �����͸� �� ���� ������ �� �ִ�
	int array[10] = { 150,27,33,1,5,100,99,75,81,10 };

	qsort(array, 10, sizeof(array[0]), intcmp); //������ ��
	ptr = bsearch(&key, array, 10, sizeof(array[0]), intcmp); // �տ������� ã��?

	if (ptr)
	{
		puts("5�� ã�ҽ��ϴ�.");
	}
}

int intcmp(const void* v1, const void* v2)
{
	return (*(int*)v1 - *(int*)v2);
}
*/

// 192) ��ũ�� ��� �����ϱ�
/*
#define program void main(void) // ��ũ�� �Լ�?
#define println printf

#define MAX 1000
#define MIN 0

program
{
	println("MAX: %d, MIN: %d\n", MAX, MIN);
}
*/

// 193) ��ũ�� �Լ� �����ϱ� 1
/*
#define max(x,y) ((x)>(y)? (x):(y))
#define min(x,y) ((x)<(y)? (x):(y))

void main(void)
{
	printf("�ִ밪: %d\n", max(5, 3));
	printf("�ּҰ�: %d\n", min(5, 3));
	printf("�ִ밪: %g\n", max(3.5, 4.4));
	printf("�ּҰ�: %g\n", min(3.5, 4.4));
}
*/

// 194) ��ũ�� �Լ� �����ϱ� 2
/*
#define x_i(x,i) printf("x%s�� ���� %d�Դϴ�.\n",#i, x##i)

void main(void)
{
	int xa = 3, xb = 5;

	x_i(x, a); // x�� ���ڷ� ġȯ xa�� �ٿ����� ġȯ
	x_i(x, b);
}
*/

// 195) ��ũ�� ����� ����Ǿ����� �˻��ϱ�
/*
//#define COUNT 100

#if !defined COUNT
#define COUNT 90
#endif 

void main(void)
{
	printf("COUNT: %d\n", COUNT);
}
*/

// 196) ��ũ�� ������ ���� ����ϱ�
/*
#define COUNT 10

#if !defined COUNT// COUNT ����Ǿ����� �ʴٸ�
#error "COUNT MACRO is not defined!"
#endif // !defined COUNT// COUNT ����Ǿ����� �ʴٸ�

void main(void)
{
	printf("COUNT: %d\n", COUNT);
}
*/

// 197) ��ũ�� ����� ���� �˻��ϱ� 
/*

#define COUNT 10

#if COUNT !=100
#error "COUNT != 100"
#endif

void main(void)
{
	printf("COUNT: %d\n", COUNT);
}
*/

// 198) ��ũ�� ����� ������ ����ϱ�

/*
#define COUNT 100

#if defined COUNT
#undef COUNT
#define COUNT 99
#else
#define COUNT 88
#endif

void main(void)
{
	printf("COUNT: %d\n", COUNT);
}
*/

// 199) ��� ������ �߻���Ű�� �ʱ�
/*
#pragma warning(disable:410) // �� �ȵ���...?

void main(void)
{
	int i;
}
*/

// 200) ����� ��ũ�� ����ϱ�
/*
void main(void)
{
	printf("���ϸ�: %s\n", __FILE__);
	printf("��¥: %s\n", __DATE__);
	printf("�ð�: %s\n", __TIME__);
	printf("�� ��: %d\n", __LINE__);
}
*/
