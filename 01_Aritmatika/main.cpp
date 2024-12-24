#include <iostream>

using namespace std;
int main()
{
    int a = 6, b = 4, hasil;

    // Penjumlahan
    hasil = a + b;
    cout << a << " + " << b << " = " << hasil << endl;

    // Pengurangan
    hasil = a - b;
    cout << a << " - " << b << " = " << hasil << endl;

    // Perkalian
    hasil = a * b;
    cout << a << " * " << b << " = " << hasil << endl;

    // Pembagian
    hasil = a / b;
    cout << a << " / " << b << " = " << hasil << endl;

    // Modulus
    hasil = a % b;
    cout << a << " % " << b << " = " << hasil << endl;

    // Urutan Eksekusi
    hasil = (a + b) * a;
    cout << "(" << a << " + " << b << ")" << " * " << a << " = " << hasil << endl;

    return 0;
}
