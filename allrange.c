#include <stdio.h>

/*int Add();
int G_a;
int G_b;

int main(void)
{
    int sum =0;
    G_a = 10;
    G_b = 20;

    printf("문제> G_a = 10, G_B= 20일 때 덧셈 연산 결과\n");
    printf("\n[main()함수 영역]\n");
    printf("호출> 덧셈 연산 위해 Add( 함수 호출\n)");
    sum = Add();

    printf("\n[main()함수 영역]\n");
    printf("회신> Add() 함수로부터 덧셈 연산 결과 반환\n");
    printf("결과> 전역 변수 사용 : %d + %d = %d\n",G_a,G_b,sum);
    return 0;
}

int Add()
{
    int hap = 0;
    hap = G_a + G_b;

    printf("[Add{}함수 영역]\n");
    printf("수행> 정수 2개의 덧셈 연산 수행\n");
    return hap;
}
void Start();

int main(void)
{
    printf("Start() 함수 3회 호출 결과\n");
    Start();
    Start();
    Start();

    return 0;
}
void Start()
{
    static int s_cnt =0;
    int a_cnt = 0;

    printf("정적 변수 = %d\t 동적 변수 = %d\n",s_cnt,a_cnt);
  s_cnt++;
  a_cnt++;
}*/

int main(void)
{
    int n,l=0;
    char str[100];
    scanf("%d",&n);
    scanf("%s",str);
    for(int i=0;i<n;i++)
    {
        l+=str[i] - '0';
    }
    printf("%d\n",l);
}