#include <stdio.h>

int main() {
    int intnums[4];
    
    for (int i = 0; i < 4; i++) {
        printf("integer number %d: ", i + 1);
        scanf("%d", &intnums[i]);
    }

    int index = 0;
    while (index < 4) {
        int remainder = intnums[index] % 3;
        
        printf("intnums[%d] = %d -> remainder when divided by 3 = %d\n", index, intnums[index], remainder);
        
        index++;
    }

    return 0;
}
