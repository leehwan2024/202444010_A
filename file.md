#include <stdio.h>

int main()
{
    short num_1;
    int num_2;
    long long num_3;

    printf("자료형의 크기를 구하는 함수 : sizeof()함수 \n");
    printf("1.short형 변수 : %d바이트\n", sizeof(num_1));
    printf("2.int형 변수 : %d바이트\n", sizeof(num_2));
    printf("3. long long형 변수 : %d바이트\n", sizeof(num_3));
    printf("1바이트는 8비트입니다.\n");
    printf("4.short형 변수 : %d바이트\n", sizeof(num_1)*8);
    printf("5. int형 변수 : %d바이트\n", sizeof(num_2)*8);
    printf("6. long long형 변수 : %d바이트\n", sizeof(num_3)*8);
    return 0;
}
