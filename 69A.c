//MADE BY MOMIN_RIFAT
#include <stdio.h>
int main() 
{
    int n;
    int num[101][101];
    int sumx = 0;
    int sumy = 0;
    int sumz = 0;

    scanf("%d",&n);

    for(int i=0;i<n;i++) 
    {
        for(int j=0;j<3;j++) 
        {
            scanf("%d",&num[i][j]);
        }
    }

    for(int i=0;i<n;i++) 
    {
        sumx = sumx + num[i][0];
        sumy = sumy + num[i][1];
        sumz = sumz + num[i][2];
    }

    if(sumx == 0 && sumy == 0 && sumz == 0) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }

    return 0;
}