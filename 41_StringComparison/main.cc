#include <iostream>
#include <string>
using namespace std;

int main(){
    // Membandingkan string
    string input;  // Variabel untuk menyimpan input pengguna
    string nama_rahasia("ucup");  // Nama yang harus ditebak

    // Loop untuk meminta tebakan hingga benar
    while (true)
    {
        cout << "Tebak nama: ";  // Menampilkan pesan untuk meminta input
        cin >> input;  // Menerima input dari pengguna

        // Memeriksa apakah input pengguna sama dengan nama rahasia
        if (input == nama_rahasia)
        {
            cout << "Tebakan anda benar!!!!!!" << endl << endl;  // Jika tebakan benar
            break;  // Keluar dari loop jika tebakan benar
        }

        // Jika tebakan salah
        cout << "Tebakan anda Salah!" << endl;
    }

    cout << "Program Selesai" << endl;  // Menampilkan pesan ketika program selesai

    return 0;
}
