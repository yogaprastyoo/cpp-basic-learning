#include <iostream>

using namespace std;
int main() {
    /**
     * For
     * salah satu jenis perulangan yang paling umum digunakan dalam
     * pemrograman. for loop memungkinkan Anda untuk mengulang blok kode dengan
     * jumlah iterasi yang diketahui sebelumnya, atau berdasarkan suatu kondisi
     * yang dievaluasi setiap kali perulangan.
     */

    // Ascending Loop
    cout << endl << "Ascending Loop V 1" << endl;
    for (int i = 0; i <= 3; i++) {
        cout << "Loop: " << i << endl;
    }

    cout << endl << "Ascending Loop V 2" << endl;
    cout << endl << "Tes1 Loop" << endl;
    for (int i = 0; i <= 10; i += 2) {
        cout << "Loop: " << i << endl;
    }

    // Descending Loop
    cout << endl << "Descending Loop" << endl;
    for (int i = 3; i >= 0; i--) {
        cout << "Loop: " << i << endl;
    }

    // Accumulating Loop
    cout << endl << "Accumulating Loop" << endl;
    int total = 0;
    for (int i = 0; i <= 5; i++, total += i) {
        cout << "Loop: " << i << " || " << "Total: " << total << endl;
    }

    return 0;
}