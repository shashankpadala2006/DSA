#include <stdio.h>

// Recursive function for binary search
int binarySearch(int arr[], int low, int high, int target) {
    // Base case: If the search space is invalid (target not found)
    if (low > high) {
        return -1; // Element not found
    }

    // Calculate the middle index
    int mid = low + (high - low) / 2;

    // Base case: If the middle element is the target
    if (arr[mid] == target) {
        return mid; // Element found at this index
    }
    // If target is smaller than the middle element, search in the left half
    else if (arr[mid] > target) {
        return binarySearch(arr, low, mid - 1, target);
    }
    // If target is larger than the middle element, search in the right half
    else {
        return binarySearch(arr, mid + 1, high, target);
    }
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    int target = 23;

    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    target = 100; // Search for an element not present
    result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }

    return 0;
}