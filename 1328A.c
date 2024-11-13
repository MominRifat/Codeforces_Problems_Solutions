//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int n;
    int a,b;

    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d",&a,&b);

        {
            if(a % b == 0)
            {
                printf("0\n");
            }
            if(a % b != 0)
            {
                int need = b - (a % b);
                printf("%d\n",need);
            }
        }
    }

    return 0;
}