#include <iostream>

using namespace std;
int main() {
    /**
     * Break
     * Digunakan untuk keluar dari perulangan lebih awal, meskipun kondisi
     * perulangan belum false.
     */
    cout << endl << "Break" << endl;
    for (int i = 0; i <= 10; i++) {
        if (i == 7) {
            break;
        }

        cout << "Angka: " << i << endl;
    }

    /**
     * Continue
     * Digunakan untuk melewati sisa iterasi saat ini dan melanjutkan ke iterasi
     * berikutnya.
     */
    cout << endl << "Continue" << endl;
    for (int i = 0; i <= 10; i++) {
        if (i == 7) {
            continue;
        }

        cout << "Angka: " << i << endl;
    }

    return 0;
}