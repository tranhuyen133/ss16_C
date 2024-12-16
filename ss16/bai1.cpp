#include <stdio.h>

int main() {
    int x = 10;       
    int *ptr = &x;    

    printf("Gia tri cua x (truc tiep): %d\n", x);
    printf("Dia chi cua x (truc tiep): %p\n", (void*)&x);

    printf("Gia tri cua x (qua con tro): %d\n", *ptr);
    printf("Dia chi cua x (qua con tro): %p\n", (void*)ptr);

    return 0;
}

