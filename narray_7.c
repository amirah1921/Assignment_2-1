#include <stdio.h>

int main() {
    float masses[5];
    
    for (int i = 0; i < 5; i++) {
        printf("mass %d (kg): ", i + 1);
        scanf("%f", &masses[i]);
    }

    const float gravity = 9.81;

    int index = 0;
    while (index < 5) {
        float weight = masses[index] * gravity;
        
        printf("masses[%d] = %.2f kg -> weight = %.5f N\n", index, masses[index], weight);
        
        index++;
    }

    return 0;
}