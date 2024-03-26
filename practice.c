#include <stdio.h>

int main()
{
    int a=1;
    int b=0;
    while(a<=10)
    {
        b+=a;
        a++;
    }
    printf("%d",b);
    return 0;
}