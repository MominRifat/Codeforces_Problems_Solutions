 //Created By Momin_Rifat
#include<stdio.h>
#include<string.h>

int main() 
{
    char guest_name[101],host_name[101],pile_of_letters[301];

    int count[26] = {0};

    scanf("%s %s %s",guest_name,host_name,pile_of_letters);

    for(int i = 0; i < strlen(guest_name); i++) 
    {
        count[guest_name[i] - 'A']++;
    }

    for(int i = 0; i < strlen(host_name); i++) 
    {
        count[host_name[i] - 'A']++;
    }

    for(int i = 0; i < strlen(pile_of_letters); i++) 
    {
        int index = pile_of_letters[i] - 'A';
        count[index]--;

        if(count[index] < 0) 
        {
            printf("NO\n");
            return 0;
        }
    }

    for(int i = 0; i < 26; i++) 
    {
        if (count[i] != 0) 
        {
            printf("NO\n");
            return 0;
        }
    }
    
    printf("YES\n");

    return 0;
}