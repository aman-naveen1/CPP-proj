#include <iostream>    // Includes the input-output stream library for using cout
#include <vector>      // Includes the vector library for using the vector container
#include <set>         // Includes the set library for using the set container
using namespace std;   // This allows us to avoid using 'std::' before standard library functions and objects

// Function to remove duplicates from the vector
void removeDuplicates(vector<int>& arr) {
    // Create a set with elements from the vector, automatically removing duplicates (since sets do not allow duplicates)
    set<int> uniqueElements(arr.begin(), arr.end());
    
    // Assign the unique elements from the set back into the vector (set guarantees uniqueness)
    arr.assign(uniqueElements.begin(), uniqueElements.end());
}

int main() {
    // Initialize a vector with some duplicate elements
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5, 6, 6, 7, 7, 7, 8};

    // Print the original array (before duplicates are removed)
    cout << "Original array: ";
    for (int num : arr) 
        cout << num << " ";  // Loop through the array and print each number separated by a space

    // Call the removeDuplicates function to eliminate duplicates from the array
    removeDuplicates(arr);

    // Print the modified array (after duplicates are removed)
    cout << "\nArray after removing duplicates: ";
    for (int num : arr) 
        cout << num << " ";  // Loop through the updated array and print each number separated by a space

    return 0;  // Return 0 to indicate successful execution of the program
}
