#include <stdio.h>

int main() {
    int temps_C[5];
    
    for (int i = 0; i < 5; i++) {
        printf("temperature %d: ", i + 1);
        scanf("%d", &temps_C[i]);
    }

    int index = 0;
    while (index < 5) {
        float temp_F = temps_C[index] * 9.0 / 5.0 + 32.0;
        
        printf("temps_C[%d] = %d deg C -> %.1f deg F\n", index, temps_C[index], temp_F);
        
        index++;
    }

    return 0;
}
