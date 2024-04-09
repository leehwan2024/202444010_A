#include <stdio.h>

int main(void)
{
        int N;
        scanf("%d",&N);
        N=(N*(N+1))/2;
        printf("%d",N);
    return 0;
}

//정수 N을 입력받아 1부터 N까지의 합 구하기
//(입력)10
//(출력)55
//단 어떤 식으로든 출력가능. 1~N까지의 합을 구하는 과정을 출력해도 상관없음. 결과값을 올바들게 출력하기만 하면됨