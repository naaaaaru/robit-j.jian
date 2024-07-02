#include<stdio.h>

int main()
{
	//피보나치 수열이 a,b,c 세변수의 서로의 합으로 구현 가능하다는것에서 착안하여 n을 3으로 나누었을때 0,1,2 가 나오는
	// 3가지 경우의 수를 생각했다.
	int n;
	int a = 1, b = 1, c;
	printf("n 입력:");
	scanf_s("%d", &n);
	if (n < 1)
		printf("양수를 입력해주세요");
	else if (n == 1)
		printf("0");
	else
	switch (n % 3)
	{
	case 0:
		for (int i = 2; i <= n / 3; i++)
		{
			c = a + b;
			a = b + c;
			b = a + c;
		}
		printf("%d번째 피보나치 수열의 값 : %d",n, b);
		break;
	case 1:
		for (int i = 1; i <= n / 3; i++)
		{
			c = a + b;
			a = b + c;
			b = a + c;
		}
		printf("%d번째 피보나치 수열의 값 : %d",n, c);
		break;
	case 2:
		for (int i = 1; i <= n / 3; i++)
		{
			c = a + b;
			a = b + c;
			b = a + c;
		}
		printf("%d번째 피보나치 수열의 값 : %d",n, a);
		break;
	default :
			printf("잘못된 숫자를 입력하였습니다.");
			break;
	}
	return 0;
}