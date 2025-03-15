#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
    int n;
    if (argc > 1) {
        n = atoi(argv[1]);  // Convert command line argument to integer
    } else {
        cout << "Enter the value of n: ";
        cin >> n;
    }

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / pow(i, i);
    }

    cout << "Sum of the series: " << sum << endl;
    return 0;
}
