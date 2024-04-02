#include <stdio.h>

int main()
{
    int a;
    int i=0;
    printf("단을 입력하세요.");
    scanf("%d",&a);
    while(i<9)
    {
        i++;
        printf("%d * %d = %d\n",a,i,a*i);
    }
    printf("세 번째 프로그램 입니다.\n");
    printf("줄을 바꾸어 출력합니다.\n");
    printf("여기까지 출력합니다.\n");
    printf("줄을 바꿉니다.");
    return 0;
}