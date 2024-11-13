#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 

    int numbers[n];
    int even_count = 0;
    int odd_count = 0;
    int even_index = -1;
    int odd_index = -1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            even_count++;
            even_index = i + 1;
        } else {
            odd_count++;
            odd_index = i + 1;
        }
    }

    if (even_count == 1) {
        printf("%d\n", even_index);
    } else {
        printf("%d\n", odd_index);
    }

    return 0;
}