#include <iostream>
#include <array>

using namespace std;

void printRangeLabel(int i) {
    if (i == 0) {
        cout << "0-9      : ";
    } else if (i == 9) {
        cout << "100      : ";
    } else {
        cout << i * 10 << "-" << (i * 10 + 9) << "    : ";
    }
}

int main() {
    array<int, 10> nilai = {};

    cout << "===== PROGRAM MENAMPILKAN GRAFIK NILAI =====" << endl << endl;

    for (int i = 0; i < nilai.size(); i++) {
        cout << "Masukkan nilai ";
        printRangeLabel(i);
        cin >> nilai[i];
    }

    cout << "\nGRAFIK NILAI\n" << endl;
    for (int i = 0; i < nilai.size(); i++) {
        printRangeLabel(i);
        cout << string(nilai[i], '*') << endl; // Menggunakan string untuk mencetak bintang
    }

    return 0;
}
