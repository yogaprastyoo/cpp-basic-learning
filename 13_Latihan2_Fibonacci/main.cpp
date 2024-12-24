#include <iostream>

using namespace std;
int main() {
    /**
     * Angka Fibonacci
     * Angka Fibonacci adalah sebuah deret angka yang dimulai dengan dua angka
     * pertama yang biasanya adalah 0 dan 1, atau 1 dan 1 (tergantung definisi).
     * Setiap angka berikutnya dalam deret Fibonacci adalah hasil penjumlahan
     * dari dua angka sebelumnya.
     * 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
     */

    double n, angkaSelanjutnya, angka1 = 1, angka2 = 1;

    cout << "Masukkan jumlah angka Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Menampilkan angka Fibonacci saat ini
        cout << angka1 << " ";

        // Menghitung angka Fibonacci berikutnya
        angkaSelanjutnya = angka1 + angka2;

        // Update angka1 ke angka2
        angka1 = angka2;

        // Update angka2 ke angka selanjutnya
        angka2 = angkaSelanjutnya;
    }
}