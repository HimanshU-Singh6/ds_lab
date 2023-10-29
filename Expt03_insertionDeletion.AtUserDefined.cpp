#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

int main() {
    int arr[MAX_SIZE];
    int n, choice, element, position, size = 0;

    cout << "Enter the number of elements (n): ";
    cin >> n;

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        size++;
    }

    cout << "Enter your choice (1 for insertion, 2 for deletion): ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the position and element to insert: ";
        cin >> position >> element;
        if (size < MAX_SIZE && position >= 0 && position <= size) {
            for (int i = size; i > position; i--) {
                arr[i] = arr[i - 1];
            }
            arr[position] = element;
            size++;
        } else {
            cout << "Overflow condition or invalid position: Array is full or position is invalid, cannot insert." << endl;
        }
    } else if (choice == 2) {
        cout << "Enter the position to delete: ";
        cin >> position;
        if (position >= 0 && position < size) {
            for (int i = position - 1; i < size ; i++) {
                arr[i] = arr[i + 1];
            }
            size--;
        } else {
            cout << "Invalid position: Position is out of bounds, cannot delete." << endl;
        }
    }

    // Output formatting
    cout << "Array after operation: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
