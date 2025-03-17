#include <iostream>  // Import input-output library
using namespace std;

// Matrix class to perform operations on matrices
class Matrix {
public:
    int mat[10][10], rows, cols;  // 2D array to store matrix elements and variables for dimensions

    // Constructor to initialize rows & cols to zero (prevents garbage values)
    Matrix() { rows = cols = 0; }

    // Function to take user input for the matrix
    void inputMatrix() {
        cout << "Enter rows and columns: ";
        cin >> rows >> cols;  // User enters number of rows and columns
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; i++)  // Loop through rows
            for (int j = 0; j < cols; j++)  // Loop through columns
                cin >> mat[i][j];  // Store values in matrix
    }

    // Function to display the matrix
    void displayMatrix() {
        if (rows == 0 || cols == 0) {  // If matrix is empty
            cout << "Operation not possible.\n";  
            return;
        }
        for (int i = 0; i < rows; i++) {  // Loop through rows
            for (int j = 0; j < cols; j++)  // Loop through columns
                cout << mat[i][j] << " ";  // Print each element
            cout << endl;  // New line after each row
        }
    }

    // Function to add two matrices
    Matrix add(Matrix b) {
        Matrix res;  // Result matrix
        if (rows != b.rows || cols != b.cols) {  // Check if dimensions are the same
            cout << "❌ Addition not possible (Matrix dimensions must match).\n";
            return res;
        }
        res.rows = rows; res.cols = cols;  // Copy dimensions to result
        for (int i = 0; i < rows; i++)  // Loop through rows
            for (int j = 0; j < cols; j++)  // Loop through columns
                res.mat[i][j] = mat[i][j] + b.mat[i][j];  // Add corresponding elements
        return res;
    }

    // Function to multiply two matrices
    Matrix multiply(Matrix b) {
        Matrix res;  // Result matrix
        if (cols != b.rows) {  // Check if multiplication is possible
            cout << "❌ Multiplication not possible (A.cols must match B.rows).\n";
            return res;
        }
        res.rows = rows; res.cols = b.cols;  // Set result matrix dimensions
        for (int i = 0; i < rows; i++) {  // Loop through rows of first matrix
            for (int j = 0; j < b.cols; j++) {  // Loop through columns of second matrix
                res.mat[i][j] = 0;  // Initialize element to 0
                for (int k = 0; k < cols; k++)  // Multiply and add elements
                    res.mat[i][j] += mat[i][k] * b.mat[k][j];
            }
        }
        return res;
    }

    // Function to transpose a matrix (swap rows & columns)
    Matrix transpose() {
        Matrix res;  // Result matrix
        res.rows = cols; res.cols = rows;  // Swap rows and columns
        for (int i = 0; i < rows; i++)  // Loop through original matrix
            for (int j = 0; j < cols; j++)
                res.mat[j][i] = mat[i][j];  // Swap elements
        return res;
    }
};

// Main function to execute the program
int main() {
    Matrix A, B, result;  // Create three matrix objects
    int choice;  // Variable to store user’s choice

    cout << "⚡ **MATRIX OPERATIONS** ⚡\n";
    cout << "Enter first matrix:\n";
    A.inputMatrix();  // Take input for first matrix
    cout << "Enter second matrix:\n";
    B.inputMatrix();  // Take input for second matrix

    // Menu loop for user to choose operations
    do {
        cout << "\n📌 **MENU:**\n";
        cout << "1️⃣ Add Matrices\n2️⃣ Multiply Matrices\n3️⃣ Transpose First Matrix\n4️⃣ Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;  // Take user's choice

        switch (choice) {  
            case 1:  // If user chooses addition
                result = A.add(B);  // Perform addition
                cout << "✅ Sum:\n";
                result.displayMatrix();  // Display result
                break;
            case 2:  // If user chooses multiplication
                result = A.multiply(B);  // Perform multiplication
                cout << "✅ Product:\n";
                result.displayMatrix();
                break;
            case 3:  // If user chooses transpose
                result = A.transpose();  // Perform transpose
                cout << "✅ Transpose of First Matrix:\n";
                result.displayMatrix();
                break;
            case 4:  // If user chooses to exit
                cout << "🔚 Exiting... Goodbye!\n";
                break;
            default:
                cout << "❌ Invalid choice! Please try again.\n";  // Handle invalid input
        }
    } while (choice != 4);  // Repeat until user chooses to exit

    return 0;  // End program
}
