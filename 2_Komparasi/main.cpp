#include <iostream>

using namespace std;

int main()
{
    int a = 2;
    int b = 2;

    bool hasil;

    /**
     * Komparasi / Relational Expression
     */

    // Sebanding ==
    hasil = (a == b);
    cout << a << " == " << b << " : " << hasil << endl;

    // Tidak Sebanding !=
    hasil = (a != b);
    cout << a << " != " << b << " : " << hasil << endl;

    // Kurang dari <
    hasil = (a < b);
    cout << a << " < " << b << " : " << hasil << endl;

    // Lebih dari >
    hasil = (a > b);
    cout << a << " > " << b << " : " << hasil << endl;

    // Kurang dari sama dengan <=
    hasil = (a <= b);
    cout << a << " <= " << b << " : " << hasil << endl;

    // Lebih dari sama dengan >=
    hasil = (a >= b);
    cout << a << " >= " << b << " : " << hasil << endl;

    return 0;
}