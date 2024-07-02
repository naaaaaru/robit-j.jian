#include<stdio.h>

int main()
{
	//입력
	int n, r;
	int facN = 1, facNR = 1;
	int result1, result2, result3, result4;
	int facR = 1;
	int facNR1 = 1;
	int facN1 = 1;
	printf("n : \nr : ");
	scanf_s("%d %d", &n, &r);
	//순열
	for (int i = 1; i <= n; i++)//팩토리얼은 큰수부터 곱해가는것이 아닌 for문의 i가 작은 숫자부터 곱하감
		facN *= i;
	for (int j = 1; j <= (n - r); j++)
		facNR *= j;
	result1 = facN / facNR;
	//중복순열
	result2 = n;
	for (int i = 1; i < r; i++)
		result2 = result2 * n;
	//조합
	for (int k = 1; k <= r; k++)
		facR *= k;
	result3 = facN / (facNR * facR);
	//중복조합
	for (int e = 1; e <= (n + r - 1); e++)
		facNR1 *= e;
	for (int h = 1; h <= (n - 1); h++)
		facN1 *= h;
	result4 = facNR1 / (facN1 * facR);
	printf("순열은 %d\n", result1);
	printf("중복순열은 %d\n", result2);
	printf("조합은 %d\n", result3);
	printf("중복조합은 %d\n", result4);
}