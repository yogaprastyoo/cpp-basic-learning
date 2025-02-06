#include <iostream>
#include <array>
#include <algorithm>  // Untuk fungsi reverse()
using namespace std;

int main() {
    // Membuat array dengan standard library berisi 4 elemen bertipe int
    array<int, 4> nilai;

    // Mengisi dan menampilkan nilai array, serta alamat memori tiap elemen
    for (int i = 0; i < 4; i++) {
        nilai[i] = i;  // Mengisi nilai array dengan indeks
        cout << "nilai [" << i << "] = " << nilai[i] << " address : " << &nilai[i] << endl;
    }
    cout << endl;

    // Menampilkan ukuran array menggunakan metode size()
    cout << "Ukuran array: " << nilai.size() << endl;

    // Menampilkan alamat awal array menggunakan metode begin()
    cout << "Address awal: " << nilai.begin() << endl;

    // Menampilkan alamat akhir array menggunakan metode end()
    cout << "Address akhir: " << nilai.end() << endl;

    // Menampilkan nilai pada indeks ke-2 menggunakan metode at()
    cout << "Nilai ke 2: " << nilai.at(2) << endl;

    // Menampilkan elemen pertama array menggunakan metode front()
    cout << "Elemen pertama (front): " << nilai.front() << endl;

    // Menampilkan elemen terakhir array menggunakan metode back()
    cout << "Elemen terakhir (back): " << nilai.back() << endl;

    // Menampilkan array dalam bentuk pointer ke data menggunakan metode data()
    cout << "Pointer ke data array: " << nilai.data() << endl;

    // Membalikkan seluruh elemen array menggunakan metode reverse()
    reverse(nilai.begin(), nilai.end());
    cout << "Array setelah dibalik: ";
    for (int i = 0; i < 4; i++) {
        cout << nilai[i] << " ";
    }
    cout << endl;

    return 0;
}
