#include <stdio.h>


void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));  
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};  
    int size = sizeof(arr) / sizeof(arr[0]);  

    printf("Cac phan tu trong mang la:\n");
    printArray(arr, size);  

    return 0;
}

