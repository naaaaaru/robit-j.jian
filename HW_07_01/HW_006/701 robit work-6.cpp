#include <stdio.h>

int main() 
{
    int num;
    printf("값을 입력하세요 . ");
    scanf_s("%d", &num);

    for (int i = 1; i < num; i++) //i는 삼각형의 높이보다 1낮음
    {
        for (int j = 0; j < num - i; j++) //맨 위 삼각형 꼭대기 구현
        {
            printf(" ");
        }
        printf("*");
        if (i > 1) 
        {
            for (int k = 0; k < 2 * i - 3; k++) 
            {
                printf(" ");//삼각형 주변의 빈부분
            }
            printf("*");//삼각형의 벽
        }
        printf("\n");
    }
    for (int l = 1; l < num * 2; l++)//맨 밑의 삼각형 바닥 구현
        printf("*");

    return 0;
}
