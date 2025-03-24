#include <iostream>  // For input and output (cin, cout)
#include <vector>    // For using vectors (dynamic arrays)

using namespace std;

// **Recursive Binary Search Function**
int binarySearchRecursive(vector<int>& arr, int left, int right, int key) {
    if (left > right) return -1; // Base case: if left crosses right, key is not found

    int mid = left + (right - left) / 2; // Find the middle index

    if (arr[mid] == key) return mid; // If the key is at mid, return the index
    if (arr[mid] > key) return binarySearchRecursive(arr, left, mid - 1, key); // Search in the left half
    return binarySearchRecursive(arr, mid + 1, right, key); // Search in the right half
}

// **Iterative Binary Search Function**
int binarySearchIterative(vector<int>& arr, int key) {
    int left = 0, right = arr.size() - 1; // Set left and right boundaries

    while (left <= right) { // Repeat while search space exists
        int mid = left + (right - left) / 2; // Find the middle index

        if (arr[mid] == key) return mid; // If found, return index
        if (arr[mid] > key) right = mid - 1; // Search in the left half
        else left = mid + 1; // Search in the right half
    }

    return -1; // If not found, return -1
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11}; // Sorted array (Binary search works on sorted arrays)
    int key = 7; // The number we want to search for

    // **Recursive Binary Search**
    int indexRec = binarySearchRecursive(arr, 0, arr.size() - 1, key);
    cout << "Recursive Binary Search: " << (indexRec != -1 ? "Found at index " + to_string(indexRec) : "Not found") << endl;

    // **Iterative Binary Search**
    int indexIter = binarySearchIterative(arr, key);
    cout << "Iterative Binary Search: " << (indexIter != -1 ? "Found at index " + to_string(indexIter) : "Not found") << endl;

    return 0; // End the program successfully
}
