#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// ���� 1)
/*
struct point // ����ü ���� // ����ü�� û�ϻ�
{
	int xpos;
	int ypos;
};


int main(void) {
	int x, y;
	struct point pos1, pos2;
	double distance;

	fputs("point1 pos: ", stdout);
	scanf("%d %d", &pos1.xpos, &pos1.ypos);

	fputs("point2 pos: ", stdout);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);

	// �� ������ �Ÿ� ��� ���� //
	x = (pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos);
	y = (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos);

	distance = sqrt((double)((x*x)+(y*y))); 
	//���� �����ؼ� x*x�̷������� ǥ���ϴ°� �������� �� ���ڱ�

	printf("�� �� ���� �Ÿ��� %g �Դϴ�. \n", distance); // ���� ���� ����

	return 0;
}
*/

//���� 2)
/*
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void) {

	struct person man1, man2;
	strcpy(man1.name, "�ȼ���");
	strcpy(man1.phoneNum, "010-1234-5678");
	man1.age = 23;

	printf("�̸� �Է�: "); scanf("%s", man2.name);
	printf("��ȣ �Է�: "); scanf("%s", man2.phoneNum);
	printf("���� �Է�: "); scanf("%d", &(man2.age));

	printf("�̸�: %s\n", man1.name); 
	printf("��ȣ: %s\n", man1.phoneNum); 
	printf("����: %d\n", man1.age); 

	printf("�̸�: %s\n", man2.name);
	printf("��ȣ: %s\n", man2.phoneNum);
	printf("����: %d\n", man2.age);
}
*/

// ���� 22-1
// ���� 1)
/*
struct Employee
{
	char name[20];
	char perID[20];
	int wage;
};

int main(void) {

	struct Employee jane;

	printf("�̸�: "); scanf("%s", jane.name);
	printf("�ֹε�Ϲ�ȣ: "); scanf("%s", jane.perID);
	printf("�޿�: "); scanf("%d", &(jane.wage));

	printf("\n==============\n");
	printf("[���� ����]\n\n");

	printf("�̸�: %s\n", jane.name);
	printf("�ֹε�Ϲ�ȣ: %s\n", jane.perID);
	printf("�޿�: %d\n", jane.wage);
}
*/

// ���� 3) ����ü ������ �ʱ�ȭ
/*
struct point
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void) {
	struct point pos = { 10,20 };// �̷��͵� ��..!
	struct person man = { "�̽±�","010-1234-4567",21 };
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);
	return 0;
}
*/

// ���� 4) ����ü �迭�� ����
/*
struct point 
{
	int xpos;
	int ypos;
};

int main(void) {

	struct point arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("���� ��ǥ �Է�: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (i = 0; i < 3; i++)
	{
		printf("[%d, %d]\n", arr[i].xpos, arr[i].ypos);
	}
	return 0;

}
*/

// ���� 5) ����ü �迭�� �ʱ�ȭ
/*
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void) {
	struct person arr[3] =
	{
		{"�̽±�", "010-1234-4567",21},
		{"������", "010-9876-2134", 22},
		{"������", "010-3542-5634", 23}
	};

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);
	}
	return 0;
}
*/

// ���� 22-2 [����ü �迭�� ����]
// ���� 1)
/*
struct employee 
{
	char name[20];
	char perID[20];
	int wage;
};

int main(void) {
	struct employee arr[3];
	int i;

	for (i = 0; i < 3; i++)
	{
		printf("���� %d�� �̸�: ", i+1); scanf("%s", arr[i].name);
		printf("���� %d�� �ֹε�Ϲ�ȣ:", i+1); scanf("%s", arr[i].perID);
		printf("���� %d�� �޿�: ", i+1); scanf("%d", &arr[i].wage);
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		printf("���� %d�� �̸�: %s \n",i+1,arr[i].name);
		printf("���� %d�� �ֹε�Ϲ�ȣ: %s \n", i+1, arr[i].perID);
		printf("���� %d�� �޿�: %d", i+1, arr[i].wage);
		printf("\n");

	}

	return 0;

}
*/

// ���� 6) ����ü ������
/*
struct point
{
	int xpos;
	int ypos;
};

int main(void) {

	struct point pos1 = { 1,2 };
	struct point pos2 = { 100,200 };
	struct point* pptr = &pos1; // ����ü ������ ���� ���� ������

	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);//->�� ���� �����ϴ� ������

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;

	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);//->�� ���� �����ϴ� ������

	return 0;
}
*/

// ���� 7) ������ ������ ����ü�� ����� �����ϱ�
/*
struct point  // ����Ʈ��� �̸��� ����ü ����
{
	int xpos;
	int ypos;
};

struct circle
{
	double radius;
	struct point* center; // ����Ʈ�� ����Ű�� ���� center�� ����
};

int main(void) {

	struct point cen = { 2,7 }; // cen�̶�� ����Ʈ ����ü ������ ����
	double rad = 5.5;

	struct circle ring = { rad, &cen }; // rad ������ 5.5���� ����, point����ü cen�� ���� {2,7} ���� ����
	printf("���� ������: %g\n", ring.radius);
	printf("���� �߽�: [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
	return 0;
}
*/

// ���� 8)
/*
struct point
{
	int xpos;
	int ypos;
	struct point* ptr; // ����ü point�� ������ ���� ����
};

int main(void) 
{
	struct point pos1 = { 1,1 };
	struct point pos2 = { 2,2 };
	struct point pos3 = { 3,3 };

	pos1.ptr = &pos2; // pos1�� pos2�� ����
	pos2.ptr = &pos3;
	pos3.ptr = &pos1;

	printf("���� �������...\n");
	printf("[%d, %d]��(��) [%d, %d] ����\n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d, %d]��(��) [%d, %d] ����\n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d, %d]��(��) [%d, %d] ����\n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);

	return 0;

}
*/

// ���� 9) ����ü ������ �ּ� ���� ����ü�� ù��° ������ �ּ� ��
/*
struct point 
{
	int xpos;
	int ypos;
};

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void) 
{
	struct point pos = { 10,20 };
	struct person man = { "�̽±�","010-1234-5678",21 };

	printf("%p %p \n", &pos, &pos.xpos);
	printf("%p %p \n", &man, &man.name);

}
*/