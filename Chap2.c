#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

// 11) ������ ���� �����ϱ�
/*
main() 
{
	char ch;
	unsigned char uch;
	char k;

	ch = 200; // char�� ������ -128 ~ +127 �̱� ������ �ٸ� ���� ��µȴ�(�ٸ� �κ� �޸𸮸� ħ���ϰ� �ǳ�?)
	uch = 200;
	k = 'a';

	printf("%d\n", ch);
	printf("%d\n", uch);
	printf("%d\n", k);
}
*/

// 12) ������ ���� �����ϱ�
/*
main() 
{
	int i;
	unsigned int j;
	int k;

	i = 2000000000;
	j = 4000000000;
	k = 'b';

	printf("%d\n", i);
	printf("%u\n", j); // ���Ĺ��� ������ ��
	printf("%d\n", k);
}
*/

// 13) �Ǽ��� ���� �����ϱ� (float)
/*
main()
{
	float d;
	double d1;
	double d2;

	d = 3.141592;
	d1 = 1234567890;
	d2 = 'c'; // 99

	printf("%E\n", d); // �� %E?
	printf("%E\n", d1);
	printf("%E\n", d2);

}
*/

// 14) ���� ���� �����ϱ� (bool)
/*
main()
{
	int b;
	int j;

	b = 10 > 5; // true. 1 �̻��� ���� ��ȯ
	j = 10 > 20; // false. 0 ��ȯ

	printf("���� ���� b�� ����: %d\n", b);
	printf("���� ���� j�� ����: %d\n", j);

	if (b)
	{
		printf("10>5�� ���� ���Դϴ�.\n");
			
	}
	else {
		printf("10>5�� ���� �����Դϴ�.\n");

	}

	if (j)
	{
		printf("10>20�� ���� ���Դϴ�.\n");

	}
	else
	{
		printf("10>20�� ���� �����Դϴ�.\n");

	}

	if (-1)
	{
		printf("-1�� ���Դϴ�.\n");
	}
	else
	{
		printf("-1�� �����Դϴ�.\n");

	}
}
*/

// Ȱ���ϴ� ���ø� ���� ���� ���� �� ���ڴ�

// 15) ���ڿ��� ���� �����ϱ�(char*)
// ���ڿ��� ������ "������"
/*
main() {
	
	// char���� �迭�� �����ϸ� �ڵ����� ���ڿ��� �ν�. 
	//�� �迭�� ���̴� 4���� + \n���� �����Ͽ� �� 5�� �ڵ� ���� & �����
	char str[] = "���ѹα�";
	char* j = "I love Korea"; // ������ ������ ���ڿ� ����

	printf("���ڿ��� ���� str�� ����: %s\n", str); // %s�� ����ϸ� ���ڿ� str�� �ٷ� ����� �� ����
	printf("���ڿ��� ���� j�� ���� %s\n", j);// j�� ���ڿ� �������̱� ������ �̷��� ����ϸ�...�ּҸ�..��ȯ�ϰ� ��..! �迭�̴ϱ� �迭�̸��� �ּ��̰�, %s�� �� �ּҿ� �ִ� ���ڿ��� ��ȯ�ϴ� ���� ���ڿ���

}
*/

// 16) ������ ��� �����ϱ�(char)
/*
#define HUNDRED 100 // ��ũ��

const char j = 10; // ��������

main()
{
	// HUNDRED = 200; // ���� - ��ũ��
	// j = 200; // ���� - ���

	printf("������ ��� HUNDRED�� ���� %d\n", HUNDRED);
	printf("������ ��� j�� ���� %d\n", j);

}
*/

// 17) ������ ��� �����ϱ�(int)
/*
#define HUNDRED_THOUSAND 100000
const j = 200000; // ���� ���� ������ �� �ϸ�? -> �׷��� ������ ��
main()
{
	// HUNDRED_THOUSAND = 100000;
	// j = 200000;

	printf("%d\n", HUNDRED_THOUSAND);
	printf("%d\n", j);
}
*/

// 18) �Ǽ��� ��� �����ϱ�(double)
/*
#define PI 3.141592

const double j = 1.23456789;

main()
{
	printf("%f %f", PI, j); // printf�Լ����� %lf�� ������ ���� �ʴ´�
}
*/

// 19) ���� ��� �����ϱ� (bool)
/*
#define TRUE 1
#define FALSE 0

main()
{
	if (TRUE)
	{
		printf("TRUE�� ���� ���Դϴ�");
	}
	else
	{
		printf("TRUE�� ���� �����Դϴ�");
	}

	if(FALSE)
	{
		printf("FALSE�� ���� ���Դϴ�");
	}
	else // ������ FALSE�̹Ƿ� ���Ⱑ ��µ�
	{
		printf("FALSE�� ���� �����Դϴ�");
	}
	
}
*/

// 20) ���ڿ��� ��� �����ϱ� (char)
/*
#define KOREA "���ѹα�"
#define BOOK "This is a book"

const char* SOCCER = "���� �౸�� �����մϴ�."; //ũ��� 25

main()
{
	printf("���ڿ��� ��� KOREA�� ��: %s, %d\n", KOREA, sizeof(KOREA));
	printf("���ڿ��� ��� BOOK�� ��: %s, %d\n", BOOK, sizeof(BOOK));
	printf("���ڿ��� ��� SOCCER�� ��: %s, %d\n", SOCCER, sizeof(SOCCER)); // �� ũ�Ⱑ 8...?

	return 0;
}
*/

// 21) ���� ������ �����ϱ� (=)
/*
main()
{
	int x = 1;
	int y = 2;
	int z;
	int zz;

	z = x + y;

	zz = printf("z�� ��:%d\n", z); // printf�� ��ȯ���� ��¹� (ù ��° ����)�� ũ�� (���⼭�� 9 ����?)
	printf("zz�� ��: %d\n", zz);
}
*/

// 22) ��ȣ ������ �����ϱ� (+,-)
/*
main()
{
	int x = +4;
	int y = -2;

	printf("x + (-y) = %d\n", x + (-y));
	printf("-x + (+y) = %d\n", -x + (+y));
}
*/

// 23) ��Ģ ������ �����ϱ� (+,-,*,/)
/*
main()
{
	int x = 4;
	int y = 2;
	int z;

	z = x + y;
	printf("%d ", z);
	z = x - y;
	printf("%d ", z);
	z = x * y;	
	printf("%d ", z);
	z = x / y;
	printf("%d ", z);
	z = (x + y) * (x - y);
	printf("%d ", z);
	z = (x * y) + (x / y);
	printf("%d ", z);
	z = x + y + 2004;
	printf("%d ", z);
	z = 2004 - x - y;
	printf("%d ", z);
}
*/

// 24) ���� ������ �����ϱ� (++,--)
/*
main()
{
	int x = 1;
	printf("x=%d\n", x++); // x��ü�� ���� ����. ���: 1/ ��: 2 ����
	printf("x=%d\n", x++); // ���: 2/ ��: 3 ����
	printf("x=%d\n", ++x); // ��: 4/ ���: 4
	printf("x=%d\n", x--); // ���: 4/ ��: 3
	printf("x=%d\n", x--); // ���: 3/ ��: 2
	printf("x=%d\n", --x); // ��: 1/ ���: 1
	// 1 2 4 4 3 2
}
*/

// 25) ���� ������ �����ϱ� (<, >, =, <=, >=, !=)
/*
main()
{
	int x = 1;
	int y = 2;
	int z = 3;

	if (x == y)printf("x�� y�� �����ϴ�.\n");
	if (x != y)printf("x�� y�� ���� �ʽ��ϴ�.\n");
	if (x > y)printf("x�� y���� Ů�ϴ�.\n");
	if (x < y)printf("x�� y���� �۽��ϴ�.\n");
	if (x >= y)printf("x�� y���� ũ�ų� �����ϴ�.\n");
	if (x <= y)printf("x�� y���� �۰ų� �����ϴ�.\n");
}
*/

// 26) �� ������ �����ϱ� (||, &&, !)
/*
main()
{
	int x = 5;
	int y = 2;

	if (x > 0 && x < 10) // x�� 0���� ũ�� 10���� �۴ٸ�
		printf("0>x<10\n");
	if (x < 0 || y == 2) // x�� 0���� �۰ų� y==2���
		printf("x�� 0���� �۰ų�, y�� 2�Դϴ�.\n");
	if(!(x>y))
		printf("x�� y���� ũ�� �ʽ��ϴ�.\n");

}
*/

// 27) ���� ������ �����ϱ� (:?)
/*
main()
{
	int x = 1;
	int y = 2;
	int max;

	max = x > y ? x : y;
	printf("%d", max);

	// ������ ����
	if (x > y)max = x;
	else max = y;
}
*/

// 28) ��ǥ ������ �����ϱ�(,)
/*
main()
{
	int x = 1, y = 2, max;

	max = x > y ? x : y;
	printf("max = %d, x = %d, y = %d\n", max, x, y);
}
*/

// 29) ��Ʈ ������ �����ϱ� (|, &, ~, ^, <<, >>)
/*
main()
{
	unsigned char ch = 255, mask = 0x75;

	printf("%d\n", ch);
	printf("%d\n", ch & mask);
	printf("%d\n", (char)~ch);
	printf("%d\n", ch ^ ch);
	printf("%d\n", ch >> 1);
	printf("%d\n", mask << 1);
}
*/

// 30) ĳ��Ʈ ������ �����ϱ� 
/*
main()
{
	int x = 5, y = 2;

	printf("%d\n", x / y);
	printf("%f\n", (double)x / y);
}
*/

// 31) sizeof ������ �����ϱ�
/*
main()
{
	char i;
	int j;
	double k;

	printf("%d\n", sizeof(i));
	printf("%d\n", sizeof(j)); 
	printf("%f\n", sizeof(k));
}
*/

// 32) ��ø ���ǹ� �����ϱ� (Understanding Nested Conditional statements)
/*
main()
{
	int i = 1;
	int j = 2;
	int k = 7;

	if (i==1)
	{
		if (j == 2) 
		{
			if (k == 3)
				printf("i=1, j=2, k=3�Դϴ�.");
			else if (k == 4)
				printf("i=1, j=2, k=4�Դϴ�.");
			else if (k == 5)
				printf("i=1, j=2, k=5�Դϴ�.");
			else
				printf("i = 1, j = 2, k = %d�Դϴ�.", k);
		}
	}
}
*/

// 33) ��ø ��ȯ�� �����ϱ� (for~continue~break)
/*
main()
{
	int i;
	int j;

	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d x %d = %2d\n", i, j, i * j); 
		}
		printf("\n");
	}
}
*/

// 34) ���� ���ù� �����ϱ�(switch~case~default)
/*
main()
{
	int i = 5;

	switch (i) //i�� �������� switch
	{
	case 1:
		printf("i�� 1�Դϴ�.");
	case 2:
		printf("i�� 2�Դϴ�.");
	case 3:
		printf("i�� 3�Դϴ�.");
	default:
		printf("i�� %d�Դϴ�", i);
		break;
	}
}
*/

// 35) ���� ��ȯ�� �����ϱ�1 (while~continue~break)
/*
main()
{
	int i = 1;
	int hap = 0;

	while (i <=10)
	{
		hap += 1; i++;
		if (i == 5)continue;
		if (i == 7)break;
	}

	printf("hap = %d\n", hap);
}
*/

// 36) ���� ��ȯ�� �����ϱ�2 (while~continue~break)
/*
main()
{
	int i = 1;
	int hap = 0;

	
	while (i < 1)
	{
		hap += i;
		i++;

	}

	printf("hap = %d", hap);
}
*/

// 37) ������ �б⹮ �����ϱ�
/*
main()
{
	int i;
	int j;

	for (i = 1; i <= 100; i++)
	{
		for (j = 1; j <= 9; j++) 
		{
			printf("%d x %d = %2d\n", i, j, i * j);
			if (i == 9 && j == 9) goto ku_ku_end;
		}
	}

ku_ku_end:
printf("hello");
}
*/

// 38) ���ڿ� �����ϱ�
/*
#define ASCII_BEGIN 0
#define ASCII_END 255

main()
{
	int i;
	char ch[] = "Hello"; // ���ڿ��� �迭���� ���� ����, single quotation���� ������
	printf("%s", ch);
	
	for (i = ASCII_BEGIN; i <= ASCII_END; i++)
	{
		printf("ASCII �ڵ� (%3d), ����='%c'\n", i, i); //
	}
	
}
*/

// 39) �迭 �����ϱ�
/*
main()
{
	int kor[10] = { 100, 90, 35, 75, 55, 95, 80, 90, 70 };
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d ", kor[i]);
	}
}
*/

// 40) �޸� �����ϱ�
/*
main()
{
	int i = 0;
	int j = 1;

	printf("��=%d, �޸��ּ�=%p\n", i, &i);
	printf("��=%d, �޸��ּ�=%p\n", j, &j);

}
*/

// 41) ������ �����ϱ�(*)
/*
main()
{
	int saram_A = 0;
	int saram_B = 0;
	int* pointer;
	int* psaram;

	pointer = &saram_A; // ������ ������ ���A�� �ּҰ��� ����
	*pointer = 1; // �ּҿ� �����Ͽ� �� ����
	printf("%d, %d\n", saram_A, *pointer);

	psaram = &saram_A; // ������ ������ ���A�� �ּҰ��� ����
	*psaram = 2; // �ּҿ� �����Ͽ� �� ����
	printf("%d, %d, %d\n", saram_A, *pointer, *psaram);

	pointer = &saram_B;
	*pointer = 3;
	printf("%d, %d, %d\n", saram_A, saram_B, *pointer);

	psaram = &saram_B;
	*psaram = 4;
	printf("%d, %d, %d, %d\n", saram_A, saram_B, *pointer, *psaram);
}
*/

// 42) ��(NULL)���� �����ϱ�
/*
int length(char* pstr); // �Լ��� ����

main()
{
	int len = length("abcde"); // �ּҸ� �޾ƾ� �ϴµ�...? �� ���ڿ��� �� ù° ����� �迭 �� �ּ�?

	printf("���� = %d", len);
}

int length(char* pstr)
{
	int len = 0;
	while (*pstr != NULL) // pstr�� ����� �ּҿ� ������ ���� NULL�� �ƴϸ� 
	{
		pstr++; 
		len++;
	}

	return len;
}
*/

// 43) ����ü �����ϱ�
/*
struct tagSungJuk
{
	int kor;
	int eng;
	int math;
};

main()
{
	struct tagSungJuk SJ; // ����ü ���� ����

	SJ.kor = 100;
	SJ.eng = 95;
	SJ.math = 99;

	printf("����: %d", SJ.eng + SJ.kor + SJ.math);
}
*/

// 44) ����ü �����ϱ�
/*
union tagVariant
{
	int i;
	float d;
};

main()
{
	union tagVariant V;
	V.i = 0;
	V.d = 5.5;

	printf("V.i = %d\n", V.i);
	printf("V.d = %f\n", V.d); // float�� ������ %f ���Ĺ��ڿ� ������ �� ����
}
*/

// 45) ������ �����ϱ� 
/*
enum {Sun = 0, Mon, Tue, Wed, Thur, Fri, Sat}; // �������� �̸��� ��� ��
// �������� ��� ���������� 1�� �����ϸ� �ڵ� �ʱ�ȭ��
main()
{
	printf("%d\n", Sun);
	printf("%d\n", Mon);
	printf("%d\n", Tue);
	printf("%d\n", Wed);
	printf("%d\n", Thur);
	printf("%d\n", Fri);
	printf("%d\n", Sat);

}
*/

// 46) �������� �����ϱ�
/*
#define true 1
#define false 0

typedef int bool; // bool�� int�� ����

main()
{
	bool bCondition; // int�� �������� bool�� ������ bCondition�� ����

	bCondition = true; // bool Ÿ�� bCondition�� true��ũ�� ���� . ��ũ�δ� ����ó���⿡ ���� 1�� ġȯ. ��������� bCondition���� 1�� �����. 

	if (bCondition==true) 
	{
		printf("���ǽ��� true�Դϴ�.");
	}
}
*/

// 47) �Լ��� �μ� �����ϱ�
// �������� �� ����
/*

int print(char* string); // �Լ� ����

main()
{
	print("This is a function!"); 
}

int print(char* string)
{
	int len = 0;

	while ((*string) != NULL)
	{
		print("%c", *string); // ���ڿ��� ��Ҹ� �ϳ��� ���
		string++; // �ּ� 1����. ���� ��ҷ� �Ѿ��.
		len++;// �迭�� ���� ����
	}

	return len;
}
*/

// 48) ������ ���� �����ϱ�
/*
void print_x(int x);
void print_gx(void); //���ڰ� ���� �Լ�

int x = 20;

main()
{
	int x = 5;
	printf("x = %d\n", x);

	print_x(10);
	print_gx();
}

void print_x(int x)
{
	printf("x = %d\n", x);
}

void print_gx(void)
{
	printf("gx = %d\n", x);
}
*/

// 49) #include�� �����ϱ�
/*
main()
{
	int ch;

	printf("�ƹ� Ű�� ��������...\n");

	ch = _getch(); // getchar�� ������? ���� �̰�...
	printf("%c Ű�� ���������ϴ�.\n", ch);

}
*/

// 50) ��ũ�� �����ϱ�
/*
#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

main()
{
	int i, j;

	i = 5;
	j = 7;

	printf("�ִ��� %d�Դϴ�.\n", MAX(i, j));
	printf("�ּڰ��� %d�Դϴ�.\n", MIN(i, j));
}
*/
