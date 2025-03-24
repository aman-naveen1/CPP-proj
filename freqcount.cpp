#include <iostream>  // For input and output (cin, cout)
#include <string>    // For using string datatype
#include <map>      // For storing frequency of characters
using namespace std;

// Function to count occurrences of each letter
void countOccurrences(string str) {
    map<char, int> freq; // Map to store character frequencies

    // Loop through each character in the string
    for (char c : str) {
        if (isalpha(c)) {  // Consider only alphabets (ignore numbers & symbols)
            freq[tolower(c)]++; // Convert to lowercase and count it
        }
    }

    // Display the character frequency table
    cout << "Character Frequency Table:\n";
    for (auto pair : freq) { // Loop through the map
        cout << pair.first << " -> " << pair.second << endl; // Print character & count
    }
}

int main() {
    string input; // String to store user input

    // Ask user for input
    cout << "Enter a string: ";
    getline(cin, input); // Read entire line (supports spaces)

    countOccurrences(input); // Call function to count letters

    return 0; // End program successfully
}
