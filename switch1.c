#include <stdio.h>

int main(void)
{
    int x,y;
    char op;
    scanf("%d %c %d",&x,&op,&y);
    switch(op)
    {
        case '+':
            printf("%d %c %d = %d",x,op,y,x+y);
            break;
        case '-':
            printf("%d %c %d = %d",x,op,y,x-y);
            break;
        case '*':
            printf("%d %c %d = %d",x,op,y,x*y);
            break;
        case '/':
            printf("%d %c %d = %d",x,op,y,x/y);
            break;
    }
    return 0;
}