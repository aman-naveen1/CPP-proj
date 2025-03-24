#include <iostream>  // For input and output (cin, cout)
using namespace std;

// **Recursive function to find GCD (Greatest Common Divisor)**
int gcdRecursive(int a, int b) {
    return (b == 0) ? a : gcdRecursive(b, a % b); 
    // If b is 0, return a (base case)
    // Otherwise, call gcdRecursive with (b, a % b)
}

// **Iterative function to find GCD**
int gcdIterative(int a, int b) {
    while (b != 0) {  // Repeat until b becomes 0
        int temp = b;  // Store current value of b
        b = a % b;     // Update b to remainder of a divided by b
        a = temp;      // Update a to old value of b
    }
    return a; // Return GCD when b becomes 0
}

int main() {
    int a, b; // Variables to store user input

    // Ask the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> a >> b; // Read user
