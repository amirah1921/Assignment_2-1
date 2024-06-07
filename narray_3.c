#include <stdio.h>

int main() {
    int temps_F[4];
    
    for (int i = 0; i < 4; i++) {
        printf("temperature %d: ", i + 1);
        scanf("%d", &temps_F[i]);
    }

    int index = 0;
    while (index < 4) {
        float temp_C = (temps_F[index] - 32) * 5.0 / 9.0;
        
        printf("temps_F[%d] = %d deg F -> %.1f deg C\n", index, temps_F[index], temp_C);
        
        index++;
    }

    return 0;
}
