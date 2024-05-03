#include <stdio.h>

int main(void)
{
    int v,sum=0,result=0;
    while(1){
        scanf("%d",&v);
        if(v%2==1){
            sum+=v;
            result+=1;
        }
        if(v==0){
            break;
        }
    }
    printf("홀수의 합 = %d\n입력받은 홀수의 평균= %d",sum,sum/result);
}