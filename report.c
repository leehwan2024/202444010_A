#include <stdio.h>

int main(void)
{
    //�Ż� ���� ����Ʈ �����
    char name[10];
    int height,weight;
    printf("�Ż� ������ �Է��ϼ���.\n�̸�:");
    scanf("%s",&name);
    printf("Ű:");
    scanf("%d",&height);
    printf("������:");
    scanf("%d",&weight);
    printf("---%s���� �Ż�����---\n�̸�:%s\nŰ:%dcm\n������:%dkg",name,name,height,weight);
    return 0;
}
//�Ż� ������ �Է��ϼ���.
//�̸�: ȫ�浿
//Ű:175
//������:75
//---ȫ�浿���� �Ż�����---
//�̸�: ȫ�浿
//Ű:175cm
//������:75kg