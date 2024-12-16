#include <stdio.h>

void calculateSum(int *a, int *b, int *result) {
    *result = *a + *b;  
}

int main() {
    int x = 10;  
    int y = 20;  
    int result;  

    calculateSum(&x, &y, &result);

    printf("Tong cua %d va %d la: %d\n", x, y, result);

    return 0;
}

