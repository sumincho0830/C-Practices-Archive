//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>

// 문제) 1)
/*
int main(void) {

	int arr[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int arr90[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int arr180[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int arr270[4][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};

	int i = 0, j = 0, e = 0;

	//90도 회전

	for (i = 0; i < 4; i++)
	{
		e = 3;
		for (j = 0; j < 4; j++) {
			arr90[i][e] = arr[j][i];
			e--;
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++) {
			printf("%d ", arr90[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	// 180도 회전

	for (i = 0; i < 4; i++)
	{
		e = 3;
		for (j = 0; j < 4; j++) {
			arr180[i][e] = arr90[j][i];
			e--;
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++) {
			printf("%d ", arr180[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");


	// 270도 회전

	for (i = 0; i < 4; i++)
	{
		e = 3;
		for (j = 0; j < 4; j++) {
			arr270[i][e] = arr180[j][i];
			e--;
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++) {
			printf("%d ", arr270[i][j]);
		}
		printf("\n");
	}

	printf("\n\n");

	return 0; 
}
*/


// 문제 2) 
/*
void Horizontal(int* n, int* m, int* i, int* j, int* rep1, int* add, int (*arr)[100]) {

	if (*rep1%2 != 0)
	{
		if (*rep1>1)
		{
			(*j)++;
		}
		
		for (; *j < *n; (*j)++) {
			arr[*i][*j] = ++(*add);
			printf("%d ", arr[*i][*j]);
		}
		(*rep1)++;
	}
	else if(*rep1%2 == 0)
	{
		(*j)--;
		for (; *j >= *m ;(*j)--)
		{
			arr[*i][*j] = ++(*add);
			printf("%d ", arr[*i][*j]);
		}
		(*rep1)++;
		(*m)++;
	}
	

}
void Vertical(int* n, int* m, int* i, int* j, int* rep2, int* add, int (*arr)[100]) {

	if (*rep2 % 2 != 0)
	{
		for (; *j < *n; (*j)++) {
		
			arr[*i][*j] = ++(*add);
			printf("%d ", arr[*i][*j]);
		}
		(*rep2)++;
		(*n)--;
	}
	else if (*rep2 % 2 == 0)
	{
		(*j)--;
		for (; *j >= *m; (*j)--)
		{
			arr[*i][*j] = ++(*add);
			printf("%d ", arr[*i][*j]);
		}
		(*rep2)++;
	}
}


int main(void) {
	int n=0, m=0;
	int num;
	int i=0, j=0;
	int rep1=1, rep2=1;
	int all;
	int add = 0;
	int arr[100][100] = { {0} };

	printf("정수 입력: ");
	scanf("%d",&num);
	n = num;


	 // 크기는 재선언 할 수 없음
	//printf("크기: %d\n", sizeof(arr) / sizeof(arr[0]));

	
	
	for (all = 1; all <= 2*n-1; all++) // 4*2 -1 => 7번 반복
	{
		if (all%2 != 0)// all이 홀수라면
		{
			//가로 함수 출력
			Horizontal(&n, &m, &i, &j, &rep1, &add, arr);

		}
		else if (all%2 == 0)// all이 짝수라면
		{
			// 세로 함수 출력
			Vertical(&n, &m, &i, &j, &rep2, &add, arr);
		}
		
	}
	
	
	
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < num; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	
}
*/

// 문제 3)
/*
int main(void) {
	int i;
	int num;
	printf("난수의 범위: 0부터 99까지\n");
	printf("난수 몇 개 출력?");
	scanf("%d", &num);


	for ( i = 0; i < num; i++)
	{
		printf("난수 출력: %d\n", rand()%100); //100으로 나누면 나머지가 0~99가 된다
	}
	return 0;
}
*/

// 문제 4)
/*
int main(void) {
	int num1, num2;
	
	srand((int)time(NULL)); // 씨앗을 심는다
	// seed of rand 에 매개변수가 없는 time변수의 반환값을 int형으로 변환해서 인자로 전달
	num1 = rand() % 6 + 1;
	num2 = rand() % 6 + 1;
	
	printf("주사위 1: %d\n", num1); //열매를 수확한다?
	printf("주사위 2: %d\n", num2);

	return 0;
}
*/

// 문제 5)
/*
int main(void) {
	int num;
	int win=1;
	int round=0, tie=0;
	int program;

	printf("바위는 1, 가위는 2, 보는 3");

	// 1은 2에 승
	// 2는 3에 승
	// 3은 1에 승


	while (win==1)
	{
		printf("숫자 입력: ");
		scanf("%d", &num);

		srand((int)time(NULL));//난수 생성 기준 설정
		// 난수는 4로 나눈 뒤 1을 더해서 0을 없앰
		program = (rand() % 4 + 1);

		if (num==1)
		{
			printf("당신의 선택: 바위\n");
			if (program == 1) 
			{
				printf("컴퓨터의 선택: 바위\n");
				tie += 1;
				printf("%d무 \n",tie);
			}
			else if (program==2)
			{
				printf("컴퓨터의 선택: 가위\n");

				round +=1;
				printf("%d 승\n",round);
			}
			else if (program==3)
			{
				printf("컴퓨터의 선택: 보\n");
				printf("Game Over\n");
				win = 0;
				break;
			}
		}
		else if (num==2)
		{
			printf("당신의 선택: 가위\n");
			if (program == 1)
			{
				printf("컴퓨터의 선택: 바위\n");
				printf("Game Over\n");
				win = 0;
				break;
			}
			else if (program == 2)
			{
				printf("컴퓨터의 선택: 가위\n");
				tie += 1;
				printf("%d무 \n", tie);
				
			}
			else if (program == 3)
			{
				printf("컴퓨터의 선택: 보\n");
				round += 1;
				printf("%d 승\n", round);
			}

		}
		else if (num == 3) 
		{
			printf("당신의 선택: 보\n");
			if (program == 1)
			{
				printf("컴퓨터의 선택: 바위\n");
				round += 1;
				printf("%d 승\n", round);
			}
			else if (program == 2)
			{
				printf("컴퓨터의 선택: 가위\n");
				printf("Game Over\n");
				win = 0;
				break;

			}
			else if (program == 3)
			{
				printf("컴퓨터의 선택: 보\n");
				tie += 1;
				printf("%d무 \n", tie);
			}
		}
	}
	printf("%d 승 %d무\n", round, tie);
}
*/

// 문제 6) 
/*
int main(void) {
	int program[3] = { 0 };
	int num1, num2, num3;
	int strike=0, ball=0;
	int i,j;
	int arr[3] = { 0 };


	srand((int)time(NULL));
	for (i = 0; i < 3; i++)
	{
		program[i] = rand() % 10;
	}
	
	printf("Game Start!\n\n");
	

	while (strike < 3)
	{
		strike = 0;
		ball = 0;

		printf("3개의 숫자 선택: ");
		scanf("%d %d %d", &num1, &num2, &num3);
		arr[0] = num1, arr[1] = num2, arr[2] = num3;

		for (i = 0; i < 3; i++)
		{
			for (j = 0; j < 3; j++)
			{
				if (arr[i] == program[j] && i==j) {
					strike += 1;
				}
				else if (arr[i] == arr[j] && i != j) {
					ball += 1; 
				}
			}
		
		}
		printf("%d Strike, %d Ball!\n", strike, ball);
		
	}

	printf("Game Over!");
}
*/




