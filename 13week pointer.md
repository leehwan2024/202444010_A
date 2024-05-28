*/#include <stdio.h>          //예제 11-2 포인터 선언 및 초기화

int main(void){

    int a = 8;
    int *pa = NULL;

    pa = &a;

    float b = 3.75;
    float *pb = &b;
    printf("일반 변수 a의 값 : %u\n",a);
    printf("일반 변수 a의 주소값 : %u\n",&a);
    printf("포인터 pa의 주소값 : %u\n\n",pa);
    printf("일반 변수 b의 값 : %.2f\n",b);
    printf("일반 변수 b의 주소값: %u\n",&b);
    printf("포인터 pb의 주소값 : %u\n\n",pb);

    printf("NULL의 주소값 : %u\n",NULL);
    return 0;

}*/
/*
#include <stdio.h>              

int main(void)            //포인터로 주소값 표현
{
    int a =30;
    int *p = NULL;

    printf("a= 30, p = &a일 때\n");

    p=&a;
    printf("1.포인터 p(가 가리키는 a)의 주소값 : %u\n",p);
    printf("2.포인터가 가리키는 *p의 데이터값 :%u\n", *p);
    
    printf("\n*p = 50일 때\n");
    *p = 50;
    printf("1.포인터 p(가 가리키는 a)의 주소값 : %u\n",p);
    printf("2.포인터가 가리키는 *p의 데이터값 : %u\n",a);
    return 0;
}*/

#include <stdio.h>

int main(void)        //포인터를 이용해 변수 pi로 배열 a 핸들링하기
{
    int a[10]={10,20,30,40,50,60,70,80,90,};
    int *pi;
    pi=a;
    printf("pi의 주소 = %d\n",pi);
    printf("*pi++ = %d\n",*pi++);
    printf("*pi++ after p의 주소 = %d\n",pi);
    printf("(*pi) = %d\n",(*pi)++);
    printf("(*pi) = %d\n",*pi);

    printf("*++pi = %d\n",*++pi);
    printf("++*pi = %d\n",++*pi);

    return 0;
}
