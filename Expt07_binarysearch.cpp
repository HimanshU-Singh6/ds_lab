#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int middle = (left + right) / 2;
        int middleValue = arr[middle];

        switch (target - middleValue) {
            case 0:
                return middle; 
            case 1 ... INT_MAX: 
                left = middle + 1;
                break;
            case INT_MIN ... -1: 
                right = middle - 1;
                break;
            default:
                return -1; 
        }
    }

    return -1; 
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int target = 30;
    int size = sizeof(array) / sizeof(array[0]);

    int result = binarySearch(array, size, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
