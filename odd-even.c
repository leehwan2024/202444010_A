#include <stdio.h>

int main(void)
{
    int v,odd=0,even=0; //odd=홀수 even=짝수
    while(1)
    {
        scanf("%d",&v);
        if(v==0){
            break;
        }
        if(v%2==0){
            even+=1;
        }
        if(v%2==1){
            odd+=1;
        }
    }
    printf("odd = %d\neven = %d",odd,even);
    return 0;
}