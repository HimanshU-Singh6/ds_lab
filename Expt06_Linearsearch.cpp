#include <iostream>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        switch (arr[i]) {
            case 10:
            case 20:
            case 30:
            case 40:
            case 50:
                if (arr[i] == target) {
                    return i; // Element found, return its index
                }
                break;
            default:
                break;
        }
    }
    return -1; // Element not found
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int target = 30;
    int size = sizeof(array) / sizeof(array[0]);

    int result = linearSearch(array, size, target);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array" << std::endl;
    }

    return 0;
}
