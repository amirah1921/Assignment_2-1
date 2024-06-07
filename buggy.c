#include <stdio.h>

int main(void)
{
    int vertical_block = 2;
    int brick_size = 2;
    for (int i = 0; i < vertical_block; i++)  
    {
        for (int j = 0; j < brick_size; j++) 
        {
            printf("#\n");
        }
        printf("\n");  
    }
}
