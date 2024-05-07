#include <stdio.h>

/*int Fact(int n);   //팩토리얼 구하기

int main(void)
{
    int input;
    int result; 
    printf("전달> 팩토리얼 구할 정수 입력 :");
    scanf("%d",&input);
    printf("호출> Ract()함수 호출하여 팩토리얼 계산\n");
    result = Fact(input);
    printf("회신> %d! : %d\n", input, result);
    return 0;
}
int Fact(int n)
{
    if(n<=1){
        return 1;
    }
    else
    {
        printf("수행> %d! : %d * (%d - 1)\n", n, n, n);
        return(n * Fact(n-1));
    }
}

int sum = 0;     //1부터 N까지의 합 구하기

int Sum(int n); 

int main(void)
{
    int input;
    printf("전달> 1부터 정수 N까지의 합을 구할 정수 N 입력: ");
    scanf("%d", &input);
    printf("호출> 1부터 %d까지의 합 계산:\n", input);
    Sum(input);
    printf("회신> %d\n", sum); 

    return 0;
}

int Sum(int n)
{
    if(n >= 1)
    {
        sum += n; 
        return Sum(n - 1); 
    }
    else
    {
        return 0; 
    }
}*/



int Fact(int n);        //정수 입력

int main(void)
{
    int input;
    int result; 
    printf("전달> 정수 입력 :");
    scanf("%d",&input);
    printf("호출> n-1 계산:\n");
    result = Fact(input);
    printf("회신> %d\n",result);
    return 0;
}
int Fact(int n)
{
    if(n<=1){
        return 1;
    }
    else
    {
        printf("수행> %d\n",n);
        return(Fact(n-1));
    }
}