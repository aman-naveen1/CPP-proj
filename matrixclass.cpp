#include <iostream>
using namespace std;

class Matrix {
public:
    int mat[10][10], rows, cols;

    void inputMatrix() {
        cout << "Enter rows and columns: ";
        cin >> rows >> cols;
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                cin >> mat[i][j];
    }

    void displayMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << mat[i][j] << " ";
            cout << endl;
        }
    }

    Matrix add(Matrix b) {
        Matrix res;
        if (rows != b.rows || cols != b.cols) {
            cout << "Addition not possible\n";
            return res;
        }
        res.rows = rows; res.cols = cols;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                res.mat[i][j] = mat[i][j] + b.mat[i][j];
        return res;
    }

    Matrix multiply(Matrix b) {
        Matrix res;
        if (cols != b.rows) {
            cout << "Multiplication not possible\n";
            return res;
        }
        res.rows = rows; res.cols = b.cols;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < b.cols; j++) {
                res.mat[i][j] = 0;
                for (int k = 0; k < cols; k++)
                    res.mat[i][j] += mat[i][k] * b.mat[k][j];
            }
        return res;
    }

    Matrix transpose() {
        Matrix res;
        res.rows = cols; res.cols = rows;
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                res.mat[j][i] = mat[i][j];
        return res;
    }
};

int main() {
    Matrix a, b, result;
    a.inputMatrix();
    b.inputMatrix();

    result = a.add(b);
    cout << "Sum:\n"; result.displayMatrix();

    result = a.multiply(b);
    cout << "Product:\n"; result.displayMatrix();

    result = a.transpose();
    cout << "Transpose:\n"; result.displayMatrix();

    return 0;
}