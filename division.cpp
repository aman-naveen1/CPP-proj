#include <iostream>
using namespace std;

int main() {
    int p, q;
    cout << "Enter two numbers: ";
    cin >> p >> q;
    try {
        if (q == 0) throw "Division by zero error!";
        cout << "Result: " << (double)p / q << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}