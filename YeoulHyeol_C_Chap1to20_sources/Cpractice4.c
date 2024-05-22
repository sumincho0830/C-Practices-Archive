/*#define _CRT_SECURE_NO_WARNINGS    // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main(void) {



	// 조건에 따른 0/1 반환
	
	int num1 = 10;
	int num2 = 12;
	int result1, result2, result3, result4, result5, result6;
	

	result1 = (num1 == num2); // false
	result2 = (num1 <= num2); // true
	result3 = (num1 > num2); // false
	result4 = (num1 == 10 && num2 == 12); //true
	result5 = (num1 < 12 || num2>12); //true (둘 중 하나의 조건 충족)
	result6 = (!num1); //false

	// C는 True와 False 를 0과 1로 표현한다

	printf("result1: %d\n", result1);
	printf("result2: %d\n", result2);
	printf("result3: %d\n", result3);
	printf("result4: %d\n", result4);
	printf("result5: %d\n", result5);
	printf("result6: %d\n", result6);


	return 0;

	/*
	========================
	result1: 0
	result2: 1
	result3: 0
	result4: 1
	result5: 1
	result6: 0
	========================
	*/
	

	// 전치연산 & 후치연산
	/*
	
	int num1 = 12;
	int num2 = 12;

	printf("num1 : %d\n", num1);
	printf("num1++ : %d\n", num1+1); //전치/후치 연산자는 저장의 의미를 내포하고 있으므로, 단순하게 더해서 표현할 때는 +1형식으로 구분해서 적어주어야 한다.
	printf("num1 : %d\n\n", num1);

	printf("num2 : %d\n", num2);
	printf("++num2 : %d\n", ++num2);
	printf("num2 : %d\n\n", num2);

	return 0;
	*/

	//후치연산
	/*
	int num1 = 10;
	int num2 = (num1--) + 2; //후치 연산이기 때문에 10+2가 먼저 연산되고 그 뒤에 num--가 연산됨. 따라서 답은 9+2=11이 아니라 10+2=12임
	//여기에서 이미 num1 -= num1이 저장되었기 때문에 num1의 초기화 값과 현재 값이 달라짐

	printf("num1: %d\n", num1);
	printf("num2: %d\n", num2);
	*/

	//계산기 예제(오류남)
	/*
	 
	
	int num1=0;
	char op1="";
	int num2=0;
	int result=0;

	printf("Enter first operand: ");
	scanf_s("%d", &num1);
	printf("\nEnter operator: ");
	scanf_s("%c", &op1);//string 의 conversation specifier은?
	printf("\nEnter second operand: ");
	scanf_s("%d", &num2);

	if (op1 == "+") {
		result = num1 + num2;
		return result;
	}
	else if (op1 == "-") {
		result = num1 - num2;
		return result;
	}
	else if (op1 == "*") {
		result = num1 * num2;
		return result;
	}
	else if (op1 == "/") {
		result = num1 + num2;
		return result;
	}

	printf("The answer is: %d", result);

	*/


//}

