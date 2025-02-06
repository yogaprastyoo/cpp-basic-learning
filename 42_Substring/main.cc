#include <iostream>
#include <string>
using namespace std;

int main(){
    string kalimat_1("I'll imagine we fell in love");
    string kalimat_2("I'll nap under moonlight skies with you");

    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    // Substring, untuk mengambil bagian dari string
    // substr(index, panjang); mengambil substring mulai dari index tertentu dengan panjang tertentu
    cout << kalimat_1.substr(24, 4) << endl;  // Mengambil substring mulai dari index 24 dengan panjang 4 karakter
    cout << kalimat_2.substr(36, 3) << endl;  // Mengambil substring mulai dari index 36 dengan panjang 3 karakter

    // Mencari posisi pertama dari substring dalam string
    // find(substring) mengembalikan index pertama dari substring yang ditemukan
    cout << "posisi love: ";
    cout << kalimat_1.find("love") << endl;  // Mencari posisi kata "love" dalam kalimat_1
    cout << "posisi you: ";
    cout << kalimat_2.find("you") << endl;  // Mencari posisi kata "you" dalam kalimat_2

    // Mencari posisi karakter "i" pertama kali dan kemudian mencari "i" berikutnya setelah posisi tersebut
    int i = kalimat_1.find("i");
    cout << i << endl;  // Posisi pertama dari karakter "i"
    cout << kalimat_1.find("i", i + 1) << endl;  // Posisi "i" berikutnya setelah index i

    // Mencari posisi substring dari belakang string
    // rfind(substring) mencari posisi terakhir dari substring dalam string
    cout << kalimat_2.rfind('u') << endl;  // Mencari posisi terakhir dari karakter 'u' dalam kalimat_2

    return 0;
}
