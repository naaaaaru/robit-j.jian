#include<stdio.h>

int main()
{
	int year;
	printf("년도를 입력하세요 : ");
	scanf_s("%d", &year);
	if (year % 4 == 0)//4로 나뉘어지는 년이라면 윤년
	{
		if (year % 100 == 0)//그중 100으로 나뉘어지는 년은 윤년이 아님
			if (year % 400 == 0)//그러나 400으로 나뉘어진다면 윤년
				printf("윤년");
			else
				printf("윤년이 아니다");
		else
			printf("윤년");
	}
	else
	{
		printf("윤년이 아니다");//그 외는 전부 윤년이 아님
	}
}