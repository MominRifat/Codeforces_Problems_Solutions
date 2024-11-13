#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int matrix[5][5];
    int row,col;
    int rowmoves,colmoves,moves;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(matrix[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    rowmoves = abs(row-2);
    colmoves = abs(col-2);
    moves = rowmoves + colmoves;
    printf("%d",moves);
    return 0;
}