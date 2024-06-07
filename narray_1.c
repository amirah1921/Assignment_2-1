#include <stdio.h>

int main() {
    int scores[5];

    for (int i = 0; i < 5; i++) {
        printf("scores %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    int index = 0;
    while (index < 5) {
        printf("scores[%d] = %d\n", index, scores[index]);
        index++;
    }

    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += scores[i];
    }
    float average = (float)sum / 5;

    printf("Average = %.3f\n", average);

    return 0;
}
