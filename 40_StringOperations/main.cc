#include <iostream>
#include <string>
using namespace std;

int main() {
    // Deklarasi string dengan inisialisasi
    string kata("cat");

    // Menampilkan data string
    cout << kata << endl;

    // Mengambil karakter berdasarkan index (dimulai dari index 0)
    cout << "index ke 0 : " << kata[0] << endl;
    cout << "index ke 1 : " << kata[1] << endl;
    cout << "index ke 2 : " << kata[2] << endl;

    // Mengubah karakter pada posisi tertentu
    // Karakter pada index ke-2 (y) diubah menjadi 'r'
    kata[2] = 'r';
    cout << kata << endl;

    // Menyambung dua string (concatenation)
    // Menggabungkan string 'kata' dengan "ry" untuk membuat kata2
    string kata2(kata + "ry");
    cout << kata2 << endl;

    // Menggunakan method append() untuk menggabungkan string
    // Menambahkan 'kata2' ke akhir 'kata3'
    string kata3("mobil ");
    kata3.append(kata2);
    cout << kata3 << endl;

    // Menggunakan operator '+=' untuk menggabungkan string
    // Menambahkan kata4 ke akhir 'kata3' dengan spasi
    string kata4("cepat");
    kata3 += " " + kata4;
    cout << kata3 << endl;

    return 0;
}
