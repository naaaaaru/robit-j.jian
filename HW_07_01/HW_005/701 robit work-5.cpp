#include <stdio.h>

int main()
{
    int num;
    printf("값을 입력하시요 : ");
    scanf_s("%d", &num);

    // 상단 부분
    for (int i = 1; i <= num; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        for (int j = 1; j <= 2 * (num - i); j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    // 하단 부분
    for (int i = num - 1; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j) 
        {
            printf("*");
        }
        for (int j = 1; j <= 2 * (num - i); ++j) 
        {
            printf(" ");
        }
        for (int j = 1; j <= i; ++j) 
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
