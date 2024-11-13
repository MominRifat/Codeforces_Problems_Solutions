#include<stdio.h>
int main() 
{
    int x;
    scanf("%d", &x);

    int steps = 0;
    while(x > 0) 
    {
        if(x >= 5) 
        {
            x -= 5;
        } 
        else if(x >= 4) 
        {
            x -= 4;
        } 
        else if(x >= 3) 
        {
            x -= 3;
        } 
        else if(x >= 2) 
        {
            x -= 2;
        } 
        else 
        {
            x -= 1;
        }
        steps++;
    }

    printf("%d\n",steps);
    return 0;
}