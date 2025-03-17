#include <iostream>  // Allows us to use input and output (cin, cout)
#include <string>    // Allows us to use strings
#include <map>       // Allows us to use maps (key-value pairs)

using namespace std;

// Function to count occurrences of each character in the string
void countOccurrences(string str) {
    map<char, int> freq; // Create a map to store character frequencies

    // Loop through each character in the string
    for (char c : str) {
        if (isalpha(c)) {  // Only count letters (ignore spaces, numbers, symbols)
            freq[tolower(c)]++; // Convert to lowercase and update count
        }
    }

    // Print the character frequency table
    cout << "Character Frequency Table:\n";
    for (auto pair : freq) { // Loop through the map
        cout << pair.first << " -> " << pair.second << endl; // Print each character and its count
    }
}

int main() {
    string input; // Variable to store the user's input

    // Ask the user to enter a string
    cout << "Enter a string: ";
    getline(cin, input); // Read the entire line as input

    countOccurrences(input); // Call the function to count character occurrences

    return 0; // End the program successfully
}
