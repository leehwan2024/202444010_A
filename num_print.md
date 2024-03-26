#include <stdio.h>
int main(void)
{
    int num1,num2,num3,num4,num5;
    printf("5개의 수를 입력하시오.");
    scanf("%d %d %d %d %d",&num1,&num2,&num3,&num4,&num5);
    printf("%d %d %d %d %d",num1+3,num2-3,num3*3,num4/3,num5%2);
    return 0;
}
