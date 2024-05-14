#include <stdio.h>
/*void line()                    //정올 함수1 연습문제 1-1
{
    printf("================================================\n");
}
int main()
{
    line();
    printf("line함수를 호출하였습니다.\n");
    printf("line함수를 다시 호출합니다.\n");
    line();
    return 0;
}
void munja()                    //정올 함수1 자가진단1
{
    printf("~!#$^&*()_+|\n");
}

int main()
{
    int a;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        munja();
    }
    return 0;
}

float d(int r)                  //r 입력받아 r^2*3.14 값 출력하기
{
    return r*r*3.14;
}
int main(){
    int r;
    float result;
    scanf("%d", &r);
    result=d(r);
    printf("%.2f",result);
}

int more_big(int x, int y)         //두 정수를 입력받아 더 큰 값 출력하기
{
    return (x>y)? x:y;
}
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",more_big(x,y));
}



int main(void)                 //배열 안의 리스트값들을 출력
{
    int score[5]= {87,92,89,98,78};
    for(int cnt =0; cnt<5;cnt++)
    {
        printf("score[%d] = %d\n", cnt, score[cnt]);
    }
    return 0;
}

#define DT 3

int main(void)                    //과목 총점수, 평균 구하기.
{
    int score[3];
    int cnt, sum=0;
    float avg;

    for(cnt =0; cnt < DT; cnt++)
    {
        printf("과목%d 점수 : ___\b\b\b", cnt + 1);
        scanf("%d",&score[cnt]);
    }
    for(cnt=0;cnt<DT; cnt++)
    {
        sum += score[cnt];
    }
    avg= (float)sum/DT;

    printf("총점 : %d\n",sum);
    printf("평균 : %.2f\n",avg);
    return 0;
}
#define CNT 9


void array_1(int a[], int cnt)
{
    for(int i=0; i<cnt;i++)
    {
        a[i]+=1;
    }
}

int main() {
    int a[10] = {1,2,3,4,5,6,7,8,9};           //배열의 주소값 반환하기.
    printf("before\n");
    for(int i=0; i<CNT; i++)
    {
        printf("%d ", a[i]);
    }
    array_1(a, CNT);
    printf("\nafter\n");
    for(int i=0; i<CNT;i++)
    {
        printf("%d ",a[i]);
    }

}*/
#define MAX_NUMBERS 100                            //0~9 중 숫자를 N번 입력받고 각 숫자마다 몇 개를 입력받았는지 출력하기.
#define RANGE 10
void readNumbers(int numbers[],int n);
void calculateFrequency(int numbers[], int n, int frequency[]);
void printFrequency(int frequency[], int range);

int main() {
    int N;
    printf("Enter the number of elements (upto %d):",MAX_NUMBERS);
    scanf("%d",&N);

    if (N < 1 || N > MAX_NUMBERS){
        printf("valid number of elements between 1 and %d\n",MAX_NUMBERS);
        return 1;
    }
    int numbers[N];
    readNumbers(numbers, N);

    int frequency[RANGE] = {0};
    calculateFrequency(numbers, N, frequency);
    
    printFrequency(frequency, RANGE);

    return 0;
}
void readNumbers(int numbers[], int n) {
    printf("Enter %d numbers (0-9):",n);
    for(int i=0; i < n; i++){
        scanf("%d", &numbers[i]);
        if(numbers[i] < 0 || numbers[i] > 9){
            printf("invalid number: %d. Please enter 0 and 9.\n", numbers[i]);
            i--;//adjust the index to re-enter the corret number
        }
    }
}

void calculateFrequency(int numbers[], int n, int frequency[]){
    for(int i=0; i < n; i++){
        frequency[numbers[i]]++;
    }
} 

void printFrequency(int frequency[], int range){
    for(int i=0;i<range;i++){
        printf("Number %d: %d times\n",i,frequency[i]);
    }
}
