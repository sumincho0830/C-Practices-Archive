#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

// 예제 1)
/*
struct point // 구조체 정의 // 구조체는 청록색
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

	// 두 점간의 거리 계산 공식 //
	x = (pos1.xpos - pos2.xpos) * (pos1.xpos - pos2.xpos);
	y = (pos1.ypos - pos2.ypos) * (pos1.ypos - pos2.ypos);

	distance = sqrt((double)((x*x)+(y*y))); 
	//따로 저장해서 x*x이런식으로 표현하는게 가독성이 더 좋겠군

	printf("두 점 간의 거리는 %g 입니다. \n", distance); // 서식 문자 주의

	return 0;
}
*/

//예제 2)
/*
struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void) {

	struct person man1, man2;
	strcpy(man1.name, "안성준");
	strcpy(man1.phoneNum, "010-1234-5678");
	man1.age = 23;

	printf("이름 입력: "); scanf("%s", man2.name);
	printf("번호 입력: "); scanf("%s", man2.phoneNum);
	printf("나이 입력: "); scanf("%d", &(man2.age));

	printf("이름: %s\n", man1.name); 
	printf("번호: %s\n", man1.phoneNum); 
	printf("나이: %d\n", man1.age); 

	printf("이름: %s\n", man2.name);
	printf("번호: %s\n", man2.phoneNum);
	printf("나이: %d\n", man2.age);
}
*/

// 문제 22-1
// 문제 1)
/*
struct Employee
{
	char name[20];
	char perID[20];
	int wage;
};

int main(void) {

	struct Employee jane;

	printf("이름: "); scanf("%s", jane.name);
	printf("주민등록번호: "); scanf("%s", jane.perID);
	printf("급여: "); scanf("%d", &(jane.wage));

	printf("\n==============\n");
	printf("[직원 정보]\n\n");

	printf("이름: %s\n", jane.name);
	printf("주민등록번호: %s\n", jane.perID);
	printf("급여: %d\n", jane.wage);
}
*/

// 예제 3) 구조체 변수의 초기화
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
	struct point pos = { 10,20 };// 이런것도 돼..!
	struct person man = { "이승기","010-1234-4567",21 };
	printf("%d %d\n", pos.xpos, pos.ypos);
	printf("%s %s %d\n", man.name, man.phoneNum, man.age);
	return 0;
}
*/

// 예제 4) 구조체 배열에 접근
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
		printf("점의 좌표 입력: ");
		scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
	}

	for (i = 0; i < 3; i++)
	{
		printf("[%d, %d]\n", arr[i].xpos, arr[i].ypos);
	}
	return 0;

}
*/

// 예제 5) 구조체 배열의 초기화
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
		{"이승기", "010-1234-4567",21},
		{"정지영", "010-9876-2134", 22},
		{"한지수", "010-3542-5634", 23}
	};

	int i;
	for (i = 0; i < 3; i++)
	{
		printf("%s %s %d\n", arr[i].name, arr[i].phoneNum, arr[i].age);
	}
	return 0;
}
*/

// 문제 22-2 [구조체 배열의 선언]
// 문제 1)
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
		printf("직원 %d의 이름: ", i+1); scanf("%s", arr[i].name);
		printf("직원 %d의 주민등록번호:", i+1); scanf("%s", arr[i].perID);
		printf("직원 %d의 급여: ", i+1); scanf("%d", &arr[i].wage);
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		printf("직원 %d의 이름: %s \n",i+1,arr[i].name);
		printf("직원 %d의 주민등록번호: %s \n", i+1, arr[i].perID);
		printf("직원 %d의 급여: %d", i+1, arr[i].wage);
		printf("\n");

	}

	return 0;

}
*/

// 예제 6) 구조체 포인터
/*
struct point
{
	int xpos;
	int ypos;
};

int main(void) {

	struct point pos1 = { 1,2 };
	struct point pos2 = { 100,200 };
	struct point* pptr = &pos1; // 구조체 데이터 형과 같은 포인터

	(*pptr).xpos += 4;
	(*pptr).ypos += 5;
	printf("[%d, %d] \n", pptr->xpos, pptr->ypos);//->는 값에 접근하는 연산자

	pptr = &pos2;
	pptr->xpos += 1;
	pptr->ypos += 2;

	printf("[%d, %d] \n", (*pptr).xpos, (*pptr).ypos);//->는 값에 접근하는 연산자

	return 0;
}
*/

// 예제 7) 포인터 변수를 구조체의 멤버로 선언하기
/*
struct point  // 포인트라는 이름의 구조체 선언
{
	int xpos;
	int ypos;
};

struct circle
{
	double radius;
	struct point* center; // 포인트를 가리키는 변수 center을 선언
};

int main(void) {

	struct point cen = { 2,7 }; // cen이라는 포인트 구조체 변수를 선언
	double rad = 5.5;

	struct circle ring = { rad, &cen }; // rad 변수의 5.5값을 저장, point구조체 cen의 값에 {2,7} 값을 저장
	printf("원의 반지름: %g\n", ring.radius);
	printf("원의 중심: [%d, %d] \n", (ring.center)->xpos, (ring.center)->ypos);
	return 0;
}
*/

// 예제 8)
/*
struct point
{
	int xpos;
	int ypos;
	struct point* ptr; // 구조체 point의 포인터 변수 선언
};

int main(void) 
{
	struct point pos1 = { 1,1 };
	struct point pos2 = { 2,2 };
	struct point pos3 = { 3,3 };

	pos1.ptr = &pos2; // pos1과 pos2를 연결
	pos2.ptr = &pos3;
	pos3.ptr = &pos1;

	printf("점의 연결관계...\n");
	printf("[%d, %d]와(과) [%d, %d] 연결\n", pos1.xpos, pos1.ypos, pos1.ptr->xpos, pos1.ptr->ypos);
	printf("[%d, %d]와(과) [%d, %d] 연결\n", pos2.xpos, pos2.ypos, pos2.ptr->xpos, pos2.ptr->ypos);
	printf("[%d, %d]와(과) [%d, %d] 연결\n", pos3.xpos, pos3.ypos, pos3.ptr->xpos, pos3.ptr->ypos);

	return 0;

}
*/

// 예제 9) 구조체 변수의 주소 값과 구조체의 첫번째 변수의 주소 값
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
	struct person man = { "이승기","010-1234-5678",21 };

	printf("%p %p \n", &pos, &pos.xpos);
	printf("%p %p \n", &man, &man.name);

}
*/