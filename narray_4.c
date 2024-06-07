#include <stdio.h>

int main() {
    int intnums[5];
    
    for (int i = 0; i < 5; i++) {
        printf("integer number %d: ", i + 1);
        scanf("%d", &intnums[i]);
    }

    int index = 0;
    while (index < 5) {
        float squared_value = intnums[index] * intnums[index];
        
        printf("intnums[%d] = %d -> squared value = %.1f\n", index, intnums[index], squared_value);
        
        index++;
    }

    return 0;
}
