#include <iostream>

using namespace std;

// Function with return value
int kuadrat(int x) {
    return x * x;
}

int tambah(int a, int b) {
    return a + b;
}

// Main function
int main() {
    int number, numberA, numberB, result;

    cout << "Masukkan angka: ";
    cin >> number;

    result = kuadrat(number);
    cout << "Kuadrat dari " << number << " adalah " << result << endl << endl;

    cout << "Masukkan angka pertama: ";
    cin >> numberA;
    cout << "Masukkan angka kedua: ";
    cin >> numberB;

    result = tambah(numberA, numberB);
    cout << "Hasil penjumlahan " << numberA << " dan " << numberB << " adalah "
         << result << endl;

    return 0;
}