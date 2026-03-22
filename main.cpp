#include <iostream>
#include "src/slide.hpp"

using namespace std;

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};

    arrayShift(arr1, 5, 1);
    printArray(arr1, 5);

    arrayShift(arr1, 5, 1);
    printArray(arr1, 5);

    int arr2[] = {1, 2, 3, 4, 5};
    arrayShift(arr2, 5, 3);
    printArray(arr2, 5);

    int arr3[] = {1, 2, 3};
    arrayShift(arr3, 3, 4);
    printArray(arr3, 3);

    return 0;
}