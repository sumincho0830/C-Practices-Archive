/*
작성일 : 2024.01.05
작성자 : 조수민
내용 요약 : 열혈 C 프로그래밍 연습문제 풀이
*/

/*
#include <stdio.h>

int CelToFah(int cel);
int FahToCel(int fah);

int main(void) {
	int op;
	int temp;
	int result = 0;

	printf("1.섭씨에서 화씨로 2.화씨에서 섭씨로\n");
	printf("변환 단위를 고르세요 (1 or 2): ");
	scanf_s("%d", &op);

	printf("온도를 입력하세요: ");
	scanf_s("%d", &temp);

	if (op == 1) {
		result = CelToFah(temp);
	}
	else if (op == 2) {
		result = FahToCel(temp);
	}

	printf("변환된 온도: %d", result);

}

int CelToFah(int cel) {
	int fah;
	fah = 1.8 * cel + 32;
	return fah;
}

int FahToCel(int fah) {
	int cel;
	cel = fah / 1.8 - 32;
	return cel;
}
*/