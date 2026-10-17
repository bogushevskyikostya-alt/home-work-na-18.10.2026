/* Завданя 1
#include <iostream>

int main() {
    const int size = 5;
    int sourceArr[size] = { 10, 20, 30, 40, 50 };
    int destArr[size]; 

    int* srcPtr = sourceArr;

    int* destPtr = destArr;

    int* endPtr = sourceArr + size;

    while (srcPtr < endPtr) {
        *destPtr = *srcPtr; 
        srcPtr++;           
        destPtr++;        
    }

    std::cout << "Скопійований масив (destArr): ";
    for (int i = 0; i < size; ++i) {
        std::cout << destArr[i] << " ";
    }
    std::cout << '\n';

    return 0;
}*/
/* Завдання 2
#include <iostream>

int main() {
    const int size = 6;
    int arr[size] = { 1, 2, 3, 4, 5, 6 };

    std::cout << "Початковий масив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';
    int* startPtr = arr;
    int* endPtr = arr + size - 1;

    while (startPtr < endPtr) {
        int temp = *startPtr;

        *startPtr = *endPtr;
        *endPtr = temp;

        startPtr++;
        endPtr--;
    }

    std::cout << "Реверснутий масив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << '\n';

    return 0;
}
*/