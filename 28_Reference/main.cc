#include <iostream>
using namespace std;

/**
 * Reference adalah nama lain (alias) untuk variabel yang sudah ada. Reference harus diinisialisasi saat deklarasi dan tidak bisa diubah untuk menunjuk ke variabel lain.
 * Reference tidak membutuhkan dereferencing karena dapat digunakan langsung seperti variabel aslinya.
 * Reference selalu valid selama variabel yang dirujuk masih ada, sehingga lebih aman dibandingkan pointer yang bisa bernilai nullptr.
 * Reference hanya bisa berada di stack dan tidak mendukung alokasi memori dinamis seperti pointer.
 * Setelah reference dibuat, reference tidak bisa diubah untuk menunjuk ke variabel lain.
 */

int main() {
    int a = 5;

    // Reference
    int &b = a;

    cout << "Nilai variable a: " << a << endl;
    cout << "Alamat variable a: " << &a << endl << endl;

    cout << "Nilai variable b reference a: " << b << endl;
    cout << "Alamat variable b reference a: " << &b << endl << endl;
    
    
    // Ubah value varible b maka value dari variable a akan berubah juga
    b = 11;
    
    cout << "Nilai variable a: " << a << endl;
    cout << "Alamat variable a: " << &a << endl << endl;

    cout << "Nilai variable b reference a: " << b << endl;
    cout << "Alamat variable b reference a: " << &b << endl << endl;
    return 0;
}