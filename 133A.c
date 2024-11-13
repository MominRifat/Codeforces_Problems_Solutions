#include<stdio.h>
#include<string.h>
int main() {
    char s[101];
    scanf("%s", s);

    if (strchr(s, 'H') || strchr(s, 'Q') || strchr(s, '9')) 
    {
        printf("YES\n");
    } else 
    {
        printf("NO\n");
    }

    return 0;
}