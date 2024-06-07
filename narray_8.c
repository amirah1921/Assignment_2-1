#include <stdio.h>

int main() {
    float lengths[4];
    
    for (int i = 0; i < 4; i++) {
        printf("length %d (m): ", i + 1);
        scanf("%f", &lengths[i]);
    }

    const float meters_to_feet = 3.28084;

    int index = 0;
    while (index < 4) {
        float length_in_feet = lengths[index] * meters_to_feet;
        
        printf("lengths[%d] = %.2f m -> US length = %.5f ft\n", index, lengths[index], length_in_feet);
        
        index++;
    }

    return 0;
}
