#include <iostream>

using namespace std;
int main() {
    /**
     * While
     * struktur perulangan (loop) yang digunakan untuk mengeksekusi blok kode
     * berulang kali selama suatu kondisi tertentu bernilai true. Setelah
     * kondisi menjadi false, perulangan akan berhenti.
     */

    int a = 1;

    while (a <= 5) {
        cout << "Angka: " << a << endl;
        a++;
    }

    cout << endl << "Selesai." << endl;

    return 0;
}