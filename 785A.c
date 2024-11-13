//Created By Momin_Rifat
#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int count = 0;
    char polyhedrons[20];
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        scanf("%s",polyhedrons);

        for(int i = 0; polyhedrons[i] != '\0'; i++)
        {
            if(polyhedrons[i] == 'T')
            {
                count = count + 4;
                continue;
            }
            if(polyhedrons[i] == 'C')
            {
                count = count + 6;
                continue;
            }
            if(polyhedrons[i] == 'O')
            {
                count = count + 8;
                continue;
            }
            if(polyhedrons[i] == 'D')
            {
                count = count + 12;
                continue;
            }
            if(polyhedrons[i] == 'I')
            {
                count = count + 20;
                continue;
            }
        }
    }
    printf("%d",count);
    return 0;
}