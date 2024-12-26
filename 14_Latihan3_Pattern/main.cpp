#include <iostream>

using namespace std;
int main() {
    int n;

    cout << "Masukkan angka: ";
    cin >> n;

    cout << "Pola ke 1: " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl << "Pola ke 2: " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= i; j--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << "Pola ke 3: " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = n; k >= i; k--) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << "Pola ke 4: " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl << "Pola ke 5: " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl << "Pola ke 6: " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = n; k >= (2 * i - n); k--) {
            cout << "*";
        }

        cout << endl;
    }

    cout << endl << "Pola ke 7: " << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }

        cout << endl;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            cout << " ";
        }
        for (int k = n; k >= (2 * i - n); k--) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}