#include <iostream>  // For input and output
using namespace std;

// **Matrix class for 3x3 matrices**
class Matrix {
    int mat[3][3];  // 3x3 matrix

public:
    // **Function to take matrix input**
    void input() {
        cout << "Enter matrix (3x3):\n";
        for (int i = 0; i < 3; i++)   // Loop through rows
            for (int j = 0; j < 3; j++)  // Loop through columns
                cin >> mat[i][j];  // Read input
    }

    // **Function to display matrix**
    void display() {
        for (int i = 0; i < 3; i++) {  // Loop through rows
            for (int j = 0; j < 3; j++)  // Loop through columns
                cout << mat[i][j] << " ";  // Print matrix element
            cout << endl;  // Move to next line after each row
        }
    }

    // **Operator overloading for matrix addition**
    Matrix operator+(Matrix m) {
        Matrix res;  // Result matrix
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                res.mat[i][j] = mat[i][j] + m.mat[i][j];  // Add corresponding elements
        return res;  // Return result matrix
    }

    // **Operator overloading for matrix multiplication**
    Matrix operator*(Matrix m) {
        Matrix res;  // Result matrix
        for (int i = 0; i < 3; i++)   // Initialize result matrix with 0s
            for (int j = 0; j < 3; j++)
                res.mat[i][j] = 0;

        for (int i = 0; i < 3; i++)    // Loop through rows of first matrix
            for (int j = 0; j < 3; j++)  // Loop through columns of second matrix
                for (int k = 0; k < 3; k++)  // Loop for multiplication
                    res.mat[i][j] += mat[i][k] * m.mat[k][j];  // Multiply and add
        return res;  // Return result matrix
    }

    // **Function to find transpose of matrix**
    Matrix transpose() {
        Matrix res;  // Result matrix
        for (int i = 0; i < 3; i++)  // Loop through rows
            for (int j = 0; j < 3; j++)  // Loop through columns
                res.mat[i][j] = mat[j][i];  // Swap rows and columns
        return res;  // Return transposed matrix
    }
};

int main() {
    Matrix A, B, C;  // Create three matrices
    int choice;  // Variable for menu choice

    A.input();  // Get first matrix
    B.input();  // Get second matrix

    // **Menu-driven program for matrix operations**
    do {
        cout << "\nMenu:\n1. Sum\n2. Product\n3. Transpose\n4. Exit\nEnter choice: ";
        cin >> choice;  // Take user choice

        switch (choice) {
            case 1:  // Matrix Addition
                C = A + B;  // Add matrices
                C.display();  // Display result
                break;
            case 2:  // Matrix Multiplication
                C = A * B;  // Multiply matrices
                C.display();  // Display result
                break;
            case 3:  // Transpose of Matrix A
                C = A.transpose();  // Get transpose of A
                C.display();  // Display result
                break;
            case 4:  // Exit case
                cout << "Exiting...\n";
                break;
            default:  // Handle invalid choice
                cout << "Invalid choice!\n";
        }
    } while (choice != 4);  // Keep looping until user chooses to exit

    return 0;  // End program successfully
}
