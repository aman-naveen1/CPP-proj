#include <iostream>
using namespace std;

void showAddress(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)
        cout << "Character: " << str[i] << " Address: " << (void*)&str[i] << endl;
}

void concatenate(char str1[], char str2[], char result[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') result[j++] = str1[i++];
    i = 0;
    while (str2[i] != '\0') result[j++] = str2[i++];
    result[j] = '\0';
}

void toUppercase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
}

void reverseString(char str[]) {
    int len = 0;
    while (str[len] != '\0') len++;
    for (int i = 0; i < len / 2; i++) swap(str[i], str[len - i - 1]);
}

int main() {
    char str1[100], str2[100], result[200];
    int choice;
    
    cout << "Enter a string: ";
    cin >> str1;
    
    do {
        cout << "\n1. Show address\n2. Concatenate\n3. Convert to Uppercase\n4. Reverse String\n5. Exit\nChoice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: showAddress(str1); break;
            case 2: 
                cout << "Enter another string: ";
                cin >> str2;
                concatenate(str1, str2, result);
                cout << "Concatenated String: " << result << endl;
                break;
            case 3: toUppercase(str1); cout << "Uppercase: " << str1 << endl; break;
            case 4: reverseString(str1); cout << "Reversed: " << str1 << endl; break;
        }
    } while (choice != 5);
    
    return 0;
}