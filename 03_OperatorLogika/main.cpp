#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 2;

    bool hasil;

    /**
     * Operator Logika: not, and, or
     */

    /**
     * NOT !
     * Membalik nilai logika
     * Jika nilai True(1), menjadi False(2), dan sebaliknya.
     */
    cout << "***Operator Logika (NOT/!)***" << endl;

    hasil = !(a == b);
    cout << "!(" << a << " == " << b << ") : " << hasil << endl
         << endl;

    /**
     * AND &&
     * Menghasilkan True(1) hanya jika kedua operand bernilai True(1).
     * Jika salah satu bernilai False(0), hasilnya adalah False(0).
     */
    cout << "***Operator Logika (AND/&&)***" << endl;

    // Kode and 1
    hasil = (a == 2) && (b == 2); // true && true
    cout << "Kode and 1 : " << hasil << endl;

    // Kode and 2
    hasil = (a == 3) && (b == 2); // false && true
    cout << "Kode and 2 : " << hasil << endl;

    // Kode and 3
    hasil = (a == 2) and (b == 3); // true && false
    cout << "Kode and 3 : " << hasil << endl;

    // Kode and 1
    hasil = (a == 3) and (b == 4); // false && false
    cout << "Kode and 4 : " << hasil << endl
         << endl;

    /**
     * OR ||
     * Menghasilkan True(1) jika salah satu operand bernilai True(1).
     * Hanya menghasilkan False(0) jika keduanya bernilai False(0).
     */
    cout << "***Operator Logika (OR/||)***" << endl;

    // Kode or 1
    hasil = (a == 2) || (b == 2); // true && true
    cout << "Kode or 1 : " << hasil << endl;

    // Kode or 2
    hasil = (a == 3) || (b == 2); // false && true
    cout << "Kode or 2 : " << hasil << endl;

    // Kode or 3
    hasil = (a == 2) or (b == 3); // true && false
    cout << "Kode or 3 : " << hasil << endl;

    // Kode or 1
    hasil = (a == 3) or (b == 4); // false && false
    cout << "Kode or 4 : " << hasil << endl
         << endl;

    return 0;
}