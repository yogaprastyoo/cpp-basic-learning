#include <iostream>
using namespace std;

/**
 * Pointer adalah variabel yang menyimpan alamat dari variabel lain. Pointer dapat diubah untuk menunjuk ke variabel lain setelah inisialisasi.
 * Untuk mengakses atau mengubah nilai variabel yang ditunjuk oleh pointer, diperlukan dereferencing menggunakan operator '*'.
 * Pointer dapat bernilai nullptr, sehingga perlu dilakukan pengecekan sebelum digunakan untuk menghindari segmentation fault.
 * Selain itu, pointer dapat digunakan untuk alokasi memori dinamis dengan 'new' dan harus dibebaskan dengan 'delete' untuk menghindari memory leak.
 * Pointer dapat diubah untuk menunjuk ke alamat variabel lain setelah dideklarasikan.
 */

int main() {
    int a = 5;

    // Pointer
    int *aPtr = &a;
    int *nPtr = nullptr;

    cout << "Nilai dari a: " << a << endl;
    cout << "Alamat dari a: " << &a << endl;
    cout << "Nilai aPtr: " << aPtr << endl;
    cout << "Alamat aPtr: " << &aPtr << endl;
    cout << "Nilai dari nPtr: " << nPtr << endl;

    // Deferencing | Mengambil data (nilai/value) dari sebuah pointer

    cout << "Mengambil nilai dari pointer aPtr: " << *aPtr << endl;
    cout << "Mengambil nilai dari pointer nPtr: " << *nPtr << endl;

    return 0;
}