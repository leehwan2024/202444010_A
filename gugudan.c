#include <stdio.h>

int main()
{
    int a;
    int i=0;
    printf("���� �Է��ϼ���.");
    scanf("%d",&a);
    while(i<9)
    {
        i++;
        printf("%d * %d = %d\n",a,i,a*i);
    }
    printf("�� ��° ���α׷� �Դϴ�.\n");
    printf("���� �ٲپ� ����մϴ�.\n");
    printf("������� ����մϴ�.\n");
    printf("���� �ٲߴϴ�.");
    return 0;
}