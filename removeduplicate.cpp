#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int &n) {
    int temp[n], j = 0;
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int k = 0; k < j; k++) {
            if (arr[i] == temp[k]) {
                found = true;
                break;
            }
        }
        if (!found) temp[j++] = arr[i];
    }
    n = j;
    for (int i = 0; i < n; i++) arr[i] = temp[i];
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
