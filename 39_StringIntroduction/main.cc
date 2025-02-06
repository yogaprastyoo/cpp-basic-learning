#include <iostream>
#include <string>
using namespace std;

int main(){

    // Array char memiliki ukuran tetap (fixed-size array), jadi kita tidak bisa menambah elemen setelah deklarasi.
    // Contoh: char kata[5] = {'m', 'o', 'b', 'i', 'l'}; 
    // Ukuran array ini tetap 5, sehingga kita tidak bisa menambah atau mengurangi jumlah karakter di dalamnya.

    // Menggunakan string, yang lebih fleksibel karena ukurannya dapat berubah.
    string kata("mobil");
    cout << kata << endl;

    // Jika kita memasukkan lebih dari satu kata (misalnya "makan ayam"), hanya kata pertama yang akan dibaca.
    // Hal ini karena cin >> hanya membaca input hingga spasi pertama.
    string data;
    cout << "Masukkan kata : ";
    cin >> data;
    cout << "Data : " << data << endl;

    return 0;
}
