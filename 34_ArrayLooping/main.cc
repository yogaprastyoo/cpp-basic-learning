#include <iostream>
using namespace std;
// #include <array>

int main() {
    // Deklarasi array dengan 10 elemen bertipe int
    int myArr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Alternatif deklarasi dengan include array (standard library)
    // array<int, 10> myArr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Looping pertama: Mengubah nilai array secara langsung dengan menambah 5
    for (int i = 0; i < 10; i++) {
        myArr[i] += 5;  // Menambahkan 5 ke setiap elemen array
        cout << "Address i: " << &myArr[i] << " nilainya: " << myArr[i] << endl;
    }

    cout << endl;

    // Looping kedua: Menggunakan for-each dengan variabel nilai (tanpa reference)
    for (int nilai : myArr) {
        nilai += 2;  // Nilai bertambah 2, tetapi hanya berlaku di dalam loop
        cout << "Address nilai: " << &nilai << " nilainya: " << nilai << endl;
    }
    // Setelah loop ini selesai, perubahan pada `nilai` tidak mempengaruhi `myArr` karena `nilai` hanya salinan dari elemen array.

    cout << endl;

    // Looping ketiga: Menggunakan for-each dengan reference (&) untuk mengubah nilai asli array
    for (int &nilaiRef : myArr) {
        nilaiRef -= 3;  // Mengurangi setiap elemen array dengan 3
        cout << "Address nilai: " << &nilaiRef << " nilainya: " << nilaiRef << endl;
    }
    // Perubahan pada `nilaiRef` akan langsung diterapkan ke `myArr` karena menggunakan reference.

    cout << endl;

    // Looping keempat: Menampilkan nilai setelah perubahan dari looping ketiga
    for (int &nilaiRef : myArr) {
        cout << "Address nilai: " << &nilaiRef << " nilainya: " << nilaiRef << endl;
    }
    // Nilai yang ditampilkan adalah hasil akhir setelah dikurangi 3 pada looping sebelumnya.

    return 0;
}
