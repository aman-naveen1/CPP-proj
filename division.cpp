#include <iostream>  // For input and output (cin, cout)
using namespace std;

int main() {
    int p, q; // Variables to store two numbers

    // Ask the user to enter two numbers
    cout << "Enter two numbers: ";
    cin >> p >> q; // Read input

    try {
        if (q == 0) throw "Division by zero error!"; // If q is 0, throw an error

        cout << "Result: " << (double)p / q << endl; // Perform division and display result
    } 
    catch (const char* msg) { // Catch and handle the error
        cout << msg << endl; // Print the error message
    }

    return 0; // End the program successfully
}
