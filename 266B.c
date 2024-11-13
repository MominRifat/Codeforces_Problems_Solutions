#include<stdio.h>
#include<string.h>
int main()
{
    int n,t;
    scanf("%d %d",&n,&t);
    char name[101];
    scanf("%s",name);

    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(name[j] == 'B' && name[j+1] == 'G')
            {
                name[j] = 'G';
                name[j+1] = 'B';
                j++;
            }
        }
    }

    printf("%s",name);
    return 0;
}