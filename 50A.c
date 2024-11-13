#include<stdio.h>
int main()
{
    int m,n;
    int area;
    int need;

    scanf("%d %d",&m,&n);

    area = m*n;
    need = area/2;

    printf("%d",need);
    
    return 0;
}