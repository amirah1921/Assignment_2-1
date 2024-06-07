#include <stdio.h>
#include <math.h>  

int main() {
    double dnums[5];
    
    for (int i = 0; i < 5; i++) {
        printf("double number %d: ", i + 1);
        scanf("%lf", &dnums[i]);
    }

    int index = 0;
    while (index < 5) {
        double cube = pow(dnums[index], 3);
        
        printf("dnums[%d] = %.2lf -> cube value = %.12lf\n", index, dnums[index], cube);
        
        index++;
    }

    return 0;
}
