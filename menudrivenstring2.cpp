#include <iostream>  // Include input-output library
using namespace std;

// Function to display each character of a string along with its memory address
void showAddress(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)  // Loop through each character
        cout << "Character: " << str[i] << " Address: " << (void*)&str[i] << endl;
}

// Function to concatenate two strings and store in result
void concatenate(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0')  // Copy first string into result
        result[j++] = str1[i++];
    
    i = 0;
    while (str2[i] != '\0')  // Append second string into result
        result[j++] = str2[i++];
    
    result[j] = '\0';  // Add null terminator at the end
}

// Function to convert a string to uppercase
void toUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)  // Loop through each character
        if (str[i] >= 'a' && str[i] <= 'z')  // If lowercase, convert to uppercase
            str[i] -= 32;  // Subtract 32 to convert lowercase to uppercase (ASCII logic)
}

// Function to reverse a string
void reverseString(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;  // Find string length

    for (int i = 0; i < len / 2; i++)  // Swap characters from start & end
        swap(str[i], str[len - i - 1]);
}

// Main function
int main() {
    char str1[100], str2[100], result[200];  // Declare character arrays for input
    int choice;  // Variable to store user's choice
    
    cout << "Enter a string: ";
    cin >> str1;  // Take string input from user
    
    // Menu-driven program for string operations
    do {
        cout << "\n1️⃣ Show Address\n2️⃣ Concatenate\n3️⃣ Convert to Uppercase\n4️⃣ Reverse String\n5️⃣ Exit\nChoice: ";
        cin >> choice;  // User selects an operation
        
        switch (choice) {  
            case 1: 
                showAddress(str1);  // Show address of each character
                break;
            case 2: 
                cout << "Enter another string: ";
                cin >> str2;  // Take second string input
                concatenate(str1, str2, result);  // Concatenate both strings
                cout << "Concatenated String: " << result << endl;
                break;
            case 3: 
                toUppercase(str1);  // Convert to uppercase
                cout << "Uppercase: " << str1 << endl;
                break;
            case 4: 
                reverseString(str1);  // Reverse the string
                cout << "Reversed: " << str1 << endl;
                break;
        }
    } while (choice != 5);  // Keep looping until user chooses to exit
    
    return 0;  // End program
}
