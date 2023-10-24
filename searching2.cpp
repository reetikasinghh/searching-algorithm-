#include <iostream>
using namespace std;
/*Name-Purvansha Gehlod
PRN-22070123088
Exp-21
Take input from user 
*/
// Linear Search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index where the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

// Binary Search
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            return mid; // Return the index where the target is found
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; // Return -1 if the target is not found
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target element you want to search for: ";
    cin >> target;

    // Linear Search
    int linearResult = linearSearch(arr, size, target);
    if (linearResult != -1) {
        cout << "Linear Search: Element found at index " << linearResult << endl;
    } else {
        cout << "Linear Search: Element not found in the array" << endl;
    }

    // Binary Search
    int binaryResult = binarySearch(arr, size, target);
    if (binaryResult != -1) {
        cout << "Binary Search: Element found at index " << binaryResult << endl;
    } else {
        cout << "Binary Search: Element not found in the array" << endl;
    }

    return 0;
}
/*OUTPUT
Enter the size of the array: 6
Enter the elements of the array: 2 3 5 6 8 9   
Enter the target element you want to search for: 5 
Linear Search: Element found at index 2
Binary Search: Element found at index 2
*/