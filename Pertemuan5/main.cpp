#include <iostream>
// Nama : Zulita Lutfiana
// NIM : F12.2023.00089
using namespace std;

void caricetak(int X, int arr[], int n, bool &isFound) {
    isFound = false;
    for (int i = 0; i < n; i++) {
        if (X == arr[i] && X % 2 == 0) {
            cout << "X ditemukan" << endl;
            isFound = true;
            break;
        }
    }
    if (isFound == false) {
        cout << "X tidak ditemukan" << endl;
    }
}

int main() {

    int arr[6] = {2, 2, 3, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);


    int X;
    cout << "Masukkan X yang dicari: ";
    cin >> X;

    bool isFound = false;
    caricetak(X, arr, n, isFound);

    return 0;
}
