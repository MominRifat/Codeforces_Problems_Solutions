#include<stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);

    int years = 0;

    while (a <= b) {
        a *= 3;
        b *= 2;
        years++;
    }

    printf("%d\n",years);

    return 0;
}