//Created By Momin_Rifat
#include<stdio.h>
int main() 
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int result1 = a + b * c;
    int result2 = a * (b + c);
    int result3 = a * b * c;
    int result4 = (a + b) * c;
    int result5 = a + b + c;

    int max_result = result1;

    if (result2 > max_result) 
    {
        max_result = result2;
    }
    if (result3 > max_result) 
    {
        max_result = result3;
    }
    if (result4 > max_result) 
    {
        max_result = result4;
    }
    if(result5 > max_result)
    {
        max_result = result5;
    }

    printf("%d\n",max_result);

    return 0;
}