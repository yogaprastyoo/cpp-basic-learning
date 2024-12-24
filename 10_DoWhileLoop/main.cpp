#include <iostream>

using namespace std;
int main() {
    /**
     * do-while
     * salah satu jenis perulangan yang memiliki perbedaan mendasar dengan while
     * loop. Pada do-while loop, blok kode akan dieksekusi terlebih dahulu satu
     * kali, kemudian kondisi baru diperiksa setelah eksekusi pertama. Ini
     * berarti bahwa meskipun kondisi perulangan **salah** sejak awal, blok kode
     * tetap dijalankan setidaknya satu kali.
     */

    int a = 10;

    do {
        cout << "Angka: " << a << endl;
        a++;
    } while (a <= 5);

    cout << endl << "Selesai." << endl;

    return 0;
}