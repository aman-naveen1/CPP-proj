#include <iostream>  // For input-output operations
#include <fstream>   // For file handling
using namespace std;

// Function to remove whitespace from a file and save the cleaned content to another file
void removeWhitespace(string inputFile, string outputFile) {
    ifstream inFile(inputFile);  // Open input file for reading
    ofstream outFile(outputFile); // Open output file for writing
    char ch;  // Variable to store each character

    // Check if input file is successfully opened
    if (!inFile) {
        cout << "Error opening input file.\n";
        return;  // Exit function if file can't be opened
    }

    // Check if output file is successfully opened
    if (!outFile) {
        cout << "Error opening output file.\n";
        return;  // Exit function if file can't be opened
    }

    // Read each character from the input file
    while (inFile.get(ch)) {
        // Only write characters to output file if they are NOT whitespace
        if (ch != ' ' && ch != '\t' && ch != '\n') {
            outFile.put(ch);  // Write character to output file
        }
    }

    // Close both files after processing
    inFile.close();
    outFile.close();

    cout << "Whitespace removed successfully!\n";  // Display success message
}

int main() {
    string inputFile = "input.txt";   // Name of the input file
    string outputFile = "output.txt"; // Name of the output file

    removeWhitespace(inputFile, outputFile);  // Call function to process files

    return 0;  // End of program
}
