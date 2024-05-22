#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


// 예제 1) typedef 선언
/*
typedef int INT;
typedef int* PTR_INT;

typedef unsigned int UINT;
typedef unsigned int* PTR_UINT;

typedef unsigned char UCHAR;
typedef unsigned char* PTR_UCHAR;

int main(void)
{
	INT num1 = 120;
	PTR_INT pnum1 = &num1;

	UINT num2 = 190;
	PTR_UINT pnum2 = &num2;

	UCHAR ch = 'Z';
	PTR_UCHAR pch = &ch;

	printf("%d, %u, %c \n", *pnum1, *pnum2, *pch);
	return 0;
}
*/

// 예제 2) 간략한 typedef 선언
/*
struct point
{
	int xpos;
	int ypos;
};

typedef struct point Point;

typedef struct person {
	char name[20];
	char phoneNum[20];
	int age;
} Person; // Person이라는 이름의 새로운 자료형으로 선언

int main(void) {

	Point pos = { 10,20 };
	Person man = { "이승기", "010-1234-5678", 24 };
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);
	return 0;
}
*/

// 예제 3) 구조체 변수를 함수의 매개변수로 
/*
typedef struct point {
	int xpos;
	int ypos;
} Point;

void ShowPosition(Point pos) {
	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition(void) { // 반환형이 Point형인 함수
	Point cen; // Point 자료형을 가진 cen 변수를 선언
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;// 구조체 {a,b} 형태 통째로 반환
}

int main(void) {
	Point curPos = GetCurrentPosition(); // 자동으로 함수 실행 & 결과값 반환 
	ShowPosition(curPos);
	return 0;
}
*/

// 예제 4)
/*
typedef struct person {
	char name[20];
	char phoneNum[20];
	int age;
} Person;

void ShowPerson(Person man) {
	printf("name: %s\n", man.name);
	printf("phone: %s\n", man.phoneNum);
	printf("age: %d\n", man.age);

	return 0;
}

// Person 형태로 데이터를 입력 받아서 반환해줄 함수
Person ReadPersonInfo(void) { // 매개 변수를 받아서 뭘 하지는 않고, 그냥 함수 자체가 특정 동작을 수행

	Person man; // man은 구조체이기 때문에 Person의 멤버를 모두 가지고 있음{name, phone, age}
	printf("name: "); scanf("%s", &man.name);
	printf("phone: "); scanf("%s", &man.phoneNum);
	printf("age: "); scanf("%d", &man.age);
	return man;
}

int main(void) {
	
	Person man = ReadPersonInfo();
	ShowPerson(man);
	return 0;
}
*/

// 예제 5) 구조체 Call-by-reference
/*
typedef struct point {
	int xpos;
	int ypos;
} Point;

// 원점 대칭
void OrgSymTrans(Point* ptr) { // Point 구조체 변수를 가리킬 수 있는 같은 데이터 형의 포인터

	ptr->xpos = (ptr->xpos) * -1; //-1을 곱해서 다시 저장
	ptr->ypos = (ptr->ypos) * -1;

}

void ShowPosition(Point pos) {

	printf("[%d, %d]\n", pos.xpos, pos.ypos);
}

int main(void) {
	Point pos = { 7,5 };
	ShowPosition(pos);
	OrgSymTrans(&pos);
	ShowPosition(pos);
	return 0;
}
*/

// 예제 6) 구조체 변수를 대상으로 가능한 연산
/*
typedef struct point {
	int xpos;
	int ypos;
} Point;

int main(void) {
	Point pos1 = { 1,2 };
	Point pos2;
	pos2 = pos1;// pos1의 멤버가 pos2의 멤버로 복사됨

	printf("크기: %d \n", sizeof(pos1));// pos1의 전체 크기 반환
	printf("[%d %d]\n", pos1.xpos, pos1.ypos);
	printf("크기: %d \n", sizeof(pos2));// pos1의 전체 크기 반환
	printf("[%d %d]\n", pos2.xpos, pos2.ypos);
	return 0;
}
*/

// 예제 7) 구조체 변수의 사칙연산
/*
typedef struct point {
	int xpos;
	int ypos;
}Point;

Point AddPoint(Point pos1, Point pos2) {
	Point pos = { pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos }; // declare a temporary user defined structure variable to save the result of the calculation
	return pos;
}

Point MinPoint(Point pos1, Point pos2) { // this function returns the difference of each point in two positions
	Point pos = { pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos };
	return pos;
}

int main(void) {
	
	Point pos1 = { 5,6 };
	Point pos2 = { 2,9 };
	Point result;

	result = AddPoint(pos1, pos2);
	printf("[%d %d]\n", result.xpos, result.ypos);
	result = MinPoint(pos1, pos2);
	printf("[%d %d]\n", result.xpos, result.ypos);

	return 0;

}
*/

// 23-1 [구조체 변수의 연산]
// 문제 1)
/*
typedef struct point {
	int xpos;
	int ypos;
} Point;

Point ReadPoint(void) {
	Point pos;

	printf("x-coordinate: "); scanf("%d", &pos.xpos);
	printf("y-coordinate: "); scanf("%d", &pos.ypos);

	return pos;
}

Point SwapPoint(Point *pos) {
	int temp = pos->xpos;
	pos->xpos = pos->ypos;
	pos->ypos = temp;

}

void ShowPoint(Point pos) {
	printf("[%d %d]\n", pos.xpos, pos.ypos);
}


int main(void) {

	Point pos;
	pos = ReadPoint();

	SwapPoint(&pos); // 반환형으로 받으면 이런식이고, 그냥 포인터를 활용하는 방법도 있을듯
	ShowPoint(pos);
	return 0;
}
*/

// 예제 8)
/*
typedef struct student {
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo(Student* sptr) {

	printf("학생 이름: %s \n", sptr->name);
	printf("학생 고유번호: %s \n", sptr->stdnum);
	printf("학교 이름: %s \n", sptr->school);
	printf("선택 전공: %s \n", sptr->major);
	printf("학년: %d \n", sptr->year);
}

int main(void) {
	Student arr[7]; // Student 타입의 배열 선언
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("학생 이름:");scanf("%s",&arr[i].name);
		printf("학생 고유번호:");scanf("%s", &arr[i].stdnum);
		printf("학교 이름: ");scanf("%s",&arr[i].school);
		printf("선택 전공:"); scanf("%s",&arr[i].major);
		printf("학년:"); scanf("%d", &arr[i].year);
	}
	// 값을 받아서 저장

	for (i = 0; i < 7; i++)
	{
		ShowStudentInfo(&arr[i]);
	}
	return 0;
}
*/

// 예제 9) 중첩된 구조체 변수
/*
typedef struct point {
	int xpos;
	int ypos;
} Point;

typedef struct circle {
	Point cen;// center의 좌표
	double rad;
} Circle;

void ShowCircleInfo(Circle* cptr) {
	printf("[%d %d]\n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g\n", cptr->rad);
}

int main(void) {
	Circle c1 = { {1,2},3.5 };
	Circle c2 = { 2,4,3.9 }; //이렇게 초기화도 가능

	ShowCircleInfo(&c1);
	ShowCircleInfo(&c2);

	return 0;
}
*/

// 문제 23-2 [다양한 형태의 구조체 정의]
// 문제 1)
/*
typedef struct pos {
	int xpos;
	int ypos;
} Point;

typedef struct rectangle {
	Point leftTop;
	Point rightBtm;
} Rectangle;

void GetCoordinates(Rectangle* rec) {

	printf("좌 상단의 좌표 (x,y): "); scanf("%d %d", &(rec->leftTop).xpos, &(rec->leftTop).ypos);
	printf("우 하단의 좌표 (x,y): "); scanf("%d %d", &(rec->rightBtm).xpos, &(rec->rightBtm).ypos);
}

int Area(Rectangle* rec) {

	int height, width, area;
	height = (rec->leftTop).ypos - (rec->rightBtm).ypos;
	height = height > 0 ? height : height * (-1);

	width = (rec->leftTop).xpos - (rec->rightBtm).xpos;
	width = width > 0 ? width : width * (-1);

	area = height * width;

	return area;
}

int main(void) {

	Rectangle rec;
	int area;

	GetCoordinates(&rec);
	area = Area(&rec);

	printf("사각형의 넓이: %d\n", area);

	return 0;
}
*/

// 예제 10) 구조체와 공용체
/*
typedef struct sbox {
	int mem1;
	int mem2;
	double mem3;
} SBox;

typedef union ubox {
	int mem1;
	int mem2;
	double mem3;
}UBox;

int main(void) {
	SBox sbx;
	UBox ubx;
	printf("%p %p %p \n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
	printf("%p %p %p \n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
	printf("%d %d \n", sizeof(sbx), sizeof(ubx));
	return 0;

}
*/

// 예제 11) 
/*
typedef union ubox
{
	int mem1;
	int mem2;
	double mem3;
} UBox;

int main(void) {
	UBox ubx;
	ubx.mem1 = 20;
	printf("%d \n", ubx.mem2);

	ubx.mem3 = 7.15;

	printf("%d \n", ubx.mem1);
	printf("%d \n", ubx.mem2);
	printf("%d \n", ubx.mem3);

	return 0;
}
*/

// 예제 12) 공용체 활용 사례
/*
typedef struct dbshort {
	unsigned short upper;
	unsigned short lower;
}DBShort;

typedef union rdbuf {
	int iBuf;
	char bBuf[4];
	DBShort sBuf;
}RDBuf;

int main(void) {
	RDBuf buf;
	printf("정수 입력: ");
	scanf("%d", &(buf.iBuf));

	printf("상위 2바이트: %u\n", buf.sBuf.upper);
	printf("하위 2바이트: %u\n", buf.sBuf.lower);
	printf("상위 1바이트 아스키 코드: %c\n", buf.bBuf[0]);
	printf("하위 1바이트 아스키 코드: %c\n", buf.bBuf[3]);

	return 0;
}
*/

// 예제 13) Enumerated Type 열거형
/*
typedef enum syllable
{
	Do = 1, Re = 2, Mi = 3, Fa = 4, Sol = 5, La = 6, Ti = 7
} Syllable;

void Sound(Syllable sy)
{
	switch (sy)
	{
	case Do:
		puts("도는 하얀 도라지 🎵"); return;
	case Re:
		puts("레는 둥근 레코드 🎵"); return;
	case Mi:
		puts("미는 파란 미나리 🎵"); return;
	case Fa:
		puts("파는 예쁜 파랑새 🎵"); return;
	case Sol:
		puts("솔은 작은 솔방울 🎵"); return;
	case La:
		puts("라는 라디오고요~ 🎵"); return;
	case Ti:
		puts("시는 졸졸 시냇물~ 🎵🎵"); return;
	default:
		break;
	}
}

int main(void) 
{
	Syllable tone;
	for (tone=Do; tone<=Ti; tone++)
	{
		Sound(tone);
	}
	return 0;
}
*/
