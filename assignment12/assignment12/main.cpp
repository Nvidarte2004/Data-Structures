//
//  main.cpp
//  assignment12
//
//  Created by natalie vidarte on 5/19/25.
//

#include <iostream>
using namespace std;

// Binary Search Function
int binarySearch(int arr[], int size, int target) {
    int first = 0;
    int last = size - 1;

    while (first <= last) {
        int mid = first + (last - first) / 2;

        // Check if the target is present at mid
        if (arr[mid] == target)
            return mid;

        // If target is greater, ignore left half
        else if (arr[mid] < target)
            first = mid + 1;

        // If target is smaller, ignore right half
        else
            last = mid - 1;
    }

    // Target is not present in array
    return -1;
}

// Main Function
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found in the array." << endl;

    return 0;
}
