#include <iostream>

template <typename T>
T findMinimum(const T array[], int size) {
    T min = array[0];
    for (int i = 1; i < size; ++i) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int main() {
    int intArray[] = {6, 8, 3, 1, 9};
    double doubleArray[] = {1.3, 1.5, 0.5, 0.200, 2.5};
    int intArraySize = sizeof(intArray) / sizeof(intArray[0]);
    int doubleArraySize = sizeof(doubleArray) / sizeof(doubleArray[0]);

    int minInt = findMinimum(intArray, intArraySize);
    double minDouble = findMinimum(doubleArray, doubleArraySize);

    std::cout << "The minimum value of integer array is = " << minInt << std::endl;
    std::cout << "The minimum value of double array is = " << minDouble << std::endl;

    return 0;
}
