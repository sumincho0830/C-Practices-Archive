//#include <stdio.h>
//int main(void) 
//{
	// 문제 1 
	// 10진수 정소를 16진수로
	/*
	int num;
	printf("정수 입력: ");
	scanf_s("%d", &num);
	printf("%d의 16진수: %x ", num, num);
	*/

	// 문제 2
	/*
	int a , b;
	printf("정수 2개 입력: ");
	scanf_s("%d %d", &a, &b);
	printf("\n");

	a = a < b ? a : b; // a에는 더 작은 수
	b = b > a ? b : a; // b에는 더 큰 수 저장

	for (; a <= b; a++)
	{
		int i;
		for (i = 1; i < 10; i++)
		{
			printf("%d x %d = %d\n", a, i, a * i);
		}
		printf("\n");
	}
	*/

	// 문제 3
	// 두 개의 정수를 입력받아 최대공약수 (Greatest Common Factor)을 찾는 문제
	// 더 작은 정수를 넘지 않아야 한다. 따라서 둘 중 작은 정수를 n에 저장한다.
	// for문을 사용해서 i를 하나씩 증가시켜 넣어보며 찾으면 된다 i의 제한은 n이다.
	/*
	int num1, num2;
	int i;
	int n;

	printf("정수 2개를 입력하세요: ");
	scanf_s("%d %d", &num1, &num2);

	if (num1 == 0 || num2 == 0)
	{
		printf("0이 아닌 정수를 입력하세요: ");
	}

	n = num1 < num2 ? num1 : num2; // 더 작은 수를 n에 입력
	
	
	for (i = 1; i <= n; i++)
	{
		if (num1%i == 0 && num2%i== 0 && i != 0)
		{
			int a = 1;
			printf("%d 와 %d의 최대공약수: %d\n", num1, num2, a++, i);

		} else
		{
			return 0;
		}
	}
	*/


	// 문제 4
	// 5,000원에서 DVD를 빌려서 3,500원
	/*
	int cr = 0;
	int sh = 0;
	int co = 0;
	
	printf("현재 당신이 소유하고 있는 금액: 3500\n");
	printf("구매 가능한 조합: \n");

	for (cr = 1; cr <= 7; cr++)
	{
		for (sh = 1; sh <= 5; sh++)
		{
			for (co = 1; co < 9; co++)
			{
				if ((cr * 500) + (sh * 700) + (co * 400) == 3500)
				{
					printf("크림빵: %d, 새우깡: %d, 콜라: %d\n", cr, sh, co);
				}
			}
		}
	}
	printf("어떻게 구입하시겠습니까?");

	*/

	// 문제 5
	// Prime number


	// 문제 6
	/*
	int sec = 0;
	int h = 0, m = 0, s = 0;

	printf("초(second) 입력: ");
	scanf_s("%d", &sec);
	h = sec / 3600;
	s = sec % 60;
	m = sec / 60;
	m = m % 60;
	printf("[h: %d, m: %d, s: %d]", h, m, s);
	*/

	// 문제 7
	/*
	int k;
	int n;
	int num = 1;

	printf("2를 몇 제곱할까요? : ");
	scanf_s("%d", &n);

	for (k = 1; k <= n; k++)
	{
		num *= 2;
	}

	printf("2의 %d승: %d", n, num);
	*/

	// 문제 8
	/*
	static int i = 0;

	printf("2를 몇 제곱할까요? : ");
	scanf_s("%d", &i);

	printf("2의 %d승: %d", i, Recursive(2));
	*/
	
//}

/*
int Recursive(int num) {

	if (i <= 0)
	{
		return ;
	}

	Recursive(num*2);
	i--;
}
*/