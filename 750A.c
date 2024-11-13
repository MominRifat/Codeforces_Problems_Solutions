//Created By Momin_Rifat
#include<stdio.h>
int main()
{
    int questions,time;
    scanf("%d %d",&questions,&time);

    int solving_time = 240 - time;
    int total_solve_questions = 0;

    for(int i = 1; i <= questions; i++)
    {
        int every_question_time = 5 * i;

        if(every_question_time <= solving_time)
        {
            total_solve_questions++;
            solving_time = solving_time - every_question_time;
            every_question_time = 0;
        }
    }

    printf("%d",total_solve_questions);

    return 0;
}