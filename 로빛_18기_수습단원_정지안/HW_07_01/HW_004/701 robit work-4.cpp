#include <stdio.h>

int main()
{
    double num1, num2, result;
    char operation;//char 로 기호를 입력

    printf("Input Arithmetic Operation\nex) 3.4 * 8.5\n    2.9 - 5.4\n    3.9 * 8.0\n    3.9 ^ 8\n\ninput : ");
    scanf_s("%f %c %f", &num1, &operation, &num2);

    switch (operation)//+,-,*,^ 네가지의 계산을 스위치를 사용해 구현
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '/':
        if (num2 != 0)
            result = num1 / num2;
        else
        {
            printf("0으로 나눌수는 없습니다.\n");//예외 제거 0으로는 나눌수 없음
        }
        break;
    case '*':
        result = num1 * num2;
        break;
    case '^':
        result = 1;
        for (int i = 0; i < num2; i++)//for문을 사용해 제곱을 구현 num2의 숫자만큼 num1을 곱하는것을 반복
            result *= num1;
        break;
    }

    printf("%f %c %f = %f\n", num1, operation, num2, result);
    return 0;
}
