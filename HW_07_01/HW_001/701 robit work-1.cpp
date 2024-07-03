#include<stdio.h>

int main()
{
	float a, b, c, d, e;
	double avr;
	double max;
	double min;
	//숫자 입력
	printf("1 번째 실수를 입력하시오.");
	scanf_s("%f", &a);
	printf("2 번째 실수를 입력하시오.");
	scanf_s("%f", &b);
	printf("3 번째 실수를 입력하시오.");
	scanf_s("%f", &c);
	printf("4 번째 실수를 입력하시오.");
	scanf_s("%f", &d);
	printf("5 번째 실수를 입력하시오.");
	scanf_s("%f", &e);
	//평균 구하기
	avr = (a + b + c + d + e) / 5;
	//가장큰수 구하기
	max = (a > b) ? a : b;
	max = (max > c) ? max : c;
	max = (max > d) ? max : d;
	max = (max > e) ? max : e;
	//가장 작은수 구하기
	min = (a > b) ? b : a;
	min = (min > c) ? c : min;
	min = (min > d) ? d : min;
	min = (min > e) ? e : min;
	printf("평균은 %f입니다", avr);
	printf("최댓값은 %f입니다", max);
	printf("최솟값은 %f입니다", min);
}