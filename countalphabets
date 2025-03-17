#include <iostream>  // For input and output (cin, cout)
#include <cstring>   // For handling C-style strings
using namespace std;

int main(int argc, char* argv[]) {
    int freq[26] = {0}; // Array to store the frequency of each alphabet (initialized to 0)

    // Check if the user provided input (arguments)
    if (argc < 2) {  
        cout << "No input provided.\n"; // If no input, show a message
        return 1; // Exit the program with an error code
    }

    // Loop through all command-line arguments (excluding the program name)
    for (int i = 1; i < argc; i++) {
        // Loop through each character of the argument
        for (int j = 0; argv[i][j] != '\0'; j++) {
            char ch = tolower(argv[i][j]); // Convert character to lowercase
            if (ch >= 'a' && ch <= 'z') freq[ch - 'a']++; // Count only letters (ignore numbers & symbols)
        }
    }

    // Display the frequency of each letter
    cout << "Alphabet Frequency:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) cout << char(i + 'a') << " : " << freq[i] << endl; // Print letter and its count
    }

    return 0; // End the program successfully
}
