//MominRifat
#include <stdio.h>
#include <stdlib.h>

int main() {
    int x1, x2, x3;
    scanf("%d %d %d", &x1, &x2, &x3);

    int coordinates[] = {x1, x2, x3};
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (coordinates[i] > coordinates[j]) {
                int temp = coordinates[i];
                coordinates[i] = coordinates[j];
                coordinates[j] = temp;
            }
        }
    }
    int totalDistance = (coordinates[1] - coordinates[0]) + (coordinates[2] - coordinates[1]);
    printf("%d\n", totalDistance);

    return 0;
}