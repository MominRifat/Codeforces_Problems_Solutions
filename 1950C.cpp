//Created By Momin_Rifat
#include <stdio.h>
void convert_to_12_hour_format(int hour, int minute) 
{
    if (hour >= 12) 
    {
        if (hour > 12)
            hour -= 12;
        printf("%02d:%02d PM\n", hour, minute);
    } 
    else if (hour == 0) 
    {
        printf("12:%02d AM\n", minute);
    } else 
    {
        printf("%02d:%02d AM\n", hour, minute);
    }
}

int main() {
    int t, i, hour, minute;
    scanf("%d", &t);

    for (i = 0; i < t; i++) 
    {
        scanf("%d:%d", &hour, &minute);
        convert_to_12_hour_format(hour, minute);
    }

    return 0;
}