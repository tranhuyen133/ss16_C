#include <stdio.h>

void updateElement(int *arr, int size, int newValue, int position) {
    if (position >= 0 && position < size) {
        *(arr + position) = newValue;  
    } else {
        printf("Vi tri %d nam ngoai pham vi cua mang.\n", position);
    }
}

// Hàm in m?ng d? ki?m tra
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}

int main() {
    int arr[] = {2, 4, 6, 8, 10};  
    int size = sizeof(arr) / sizeof(arr[0]);  

    printf("Mang ban dau:\n");
    printArray(arr, size);

    int newValue = 42;  
    int position = 2; 
    updateElement(arr, size, newValue, position);

    printf("\nMang sau khi cap nhat:\n");
    printArray(arr, size);  

    return 0;
}

