#include<stdio.h>
#include<strings.h>

int main() 
{
    char str1[101];
    char str2[101];

    scanf("%s",str1);
    scanf("%s",str2);

    int result = strcasecmp(str1,str2);
    printf("%d\n",result);

    return 0;
}