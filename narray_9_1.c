#include <stdio.h>

int main() {
    int forces[5];

    for (int i = 0; i < 5; i++) {
        printf("force %d (N): ", i + 1);
        scanf("%d", &forces[i]);
    }

    const float area = 0.25;

    int index = 0;
    while (index < 5) {
        float stress = (float)forces[index] / area;

        printf("forces[%d] = %d N -> stress = %.2f N/m²\n", index, forces[index], stress);

        index++;
    }

    return 0;
}
