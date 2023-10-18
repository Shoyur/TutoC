#include <stdio.h>
#include <string.h>

void sortArray(int array[], int size);
void printArray(int array[], int size);

int main() {

    int array[] = { 3, 5, 1, 4, 2 };
    int size = sizeof(array) / sizeof(array[0]);

    sortArray(array, size);
    printArray(array, size);

    return 0;

}

void sortArray(int array[], int size) {
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void printArray(int array[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}