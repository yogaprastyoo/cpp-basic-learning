#include <iostream>
using namespace std;

int main() {
    // Deklarasi array dengan ukuran 5 elemen
    int nilai[5];
    // Alternatif deklarasi dengan inisialisasi langsung
    // int nilai[5] = {0, 1, 2, 3, 4};

    // Menampilkan alamat dasar array (alamat elemen pertama)
    cout << "Alamat dasar array: " << nilai << endl << endl;

    // Mengisi nilai array secara manual
    nilai[0] = 0;
    nilai[1] = 1;
    nilai[2] = 2;
    nilai[3] = 3;
    nilai[4] = 4;

    // Menampilkan alamat dan nilai dari setiap elemen array
    cout << "Alamat dan nilai dari setiap elemen array sebelum diubah:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << &nilai[i] << " nilainya adalah: " << nilai[i] << endl;
    }
    cout << endl;

    // Mengakses dan mengubah nilai array menggunakan pointer
    int *arrPtr = nilai;  // Pointer menunjuk ke elemen pertama array
    *(arrPtr + 2) = 10;   // Mengubah nilai elemen indeks ke-2 menjadi 10

    // Mengubah nilai array secara langsung
    nilai[3] = 21;

    /**
     * Array di C++ tidak memiliki fungsi bawaan untuk mengetahui jumlah elemen atau ukuran array secara otomatis.
     * Untuk menghitung jumlah elemen, kita perlu membaginya dengan ukuran
     * elemen menggunakan sizeof, atau lebih baik menggunakan std::array atau
     * std::vector yang menyediakan fungsi size() untuk kebutuhan tersebut.
     */
    cout << "Alamat dan nilai dari setiap elemen array setelah diubah:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << &nilai[i] << " nilainya adalah: " << nilai[i] << endl;
    }
    cout << endl;

    // Menampilkan ukuran total array dalam byte
    cout << "Ukuran total array dalam byte: " << sizeof(nilai) << " byte"
         << endl;

    // Menghitung jumlah elemen dalam array
    cout << "Jumlah elemen dalam array: " << sizeof(nilai) / sizeof(int)
         << endl;

    return 0;
}
