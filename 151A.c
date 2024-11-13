//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n,k,l,c,d,p,nl,np;

    scanf("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);

    int toast_1 = (k * l) / nl;
    int toast_2 = c * d;
    int toast_3 = p / np;

    int min_toast = toast_1;
    if(toast_1 < min_toast)
    {
        min_toast = toast_1;
    }
    if(toast_2 < min_toast)
    {
        min_toast = toast_2;
    }
    if(toast_3 < min_toast)
    {
        min_toast = toast_3;
    }

    int new_toast = min_toast / n;

    printf("%d",new_toast);

    return 0;
}