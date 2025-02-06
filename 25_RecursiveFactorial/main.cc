#include <iostream>
using namespace std;

int faktorial(int n);

int main() {
    int number, result;

    cout << "Masukkan angka: ";
    cin >> number;

    result = faktorial(number);

    cout << "\nNilai faktorial dari " << number << " adalah: " << result
         << endl;

    return 0;
}

int faktorial(int n) {
    if (n <= 1) {
        cout << n;
        return n;
    } else {
        cout << n << "*";
        return n * faktorial(n - 1);
    }
}