#include <iostream>

using namespace std;
int main() {
    /**
     * Increment & Decrement
     * preincrement & postincrement
     */
    int a = 5, b = 5;

    // Postincrement: a++ (print dulu, baru tambah)
    cout << "Postincrement: " << a << " -> " << a++ << " -> " << a << endl;

    // Preincrement: ++b (tambah dulu, baru print)
    cout << "Preincrement: " << b << " -> " << ++b << " -> " << b << endl
         << endl;

    // Postdecrement: a-- (print dulu, baru kurang)
    cout << "Postdecrement: " << a << " -> " << a-- << " -> " << a << endl;

    // Predecrement: --b (kurang dulu, baru print)
    cout << "Predecrement: " << b << " -> " << --b << " -> " << b << endl
         << endl;

    return 0;
}