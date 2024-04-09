#include <stdio.h>

int main(void)
{
    //신상 정보 리스트 만들기
    char name[10];
    int height,weight;
    printf("신상 정보를 입력하세요.\n이름:");
    scanf("%s",&name);
    printf("키:");
    scanf("%d",&height);
    printf("몸무게:");
    scanf("%d",&weight);
    printf("---%s님의 신상정보---\n이름:%s\n키:%dcm\n몸무게:%dkg",name,name,height,weight);
    return 0;
}
//신상 정보를 입력하세요.
//이름: 홍길동
//키:175
//몸무게:75
//---홍길동님의 신상정보---
//이름: 홍길동
//키:175cm
//몸무게:75kg