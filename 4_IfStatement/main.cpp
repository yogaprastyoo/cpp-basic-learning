#include <iostream>

using namespace std;

int main()
{
    int a;

    cout << "Masukkan angka: ";

    // Cek apakah input valid
    if (!(cin >> a)) // Jika input gagal
    {
        cout << "Error: Input yang Anda masukkan bukan angka." << endl;
    }
    else
    {
        // Logika perbandingan angka
        if (a > 10)
        {
            cout << "Angka " << a << " lebih besar dari 10" << endl;
        }
        else if (a < 10)
        {
            cout << "Angka " << a << " lebih kecil dari 10" << endl;
        }
        else
        {
            cout << "Angka " << a << " sama dengan 10" << endl;
        }
    }

    return 0;
}
