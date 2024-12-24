#include <iostream>

using namespace std;
int main() {
    int a;

    cout << "Masukkan angka: ";
    cin >> a;

    switch (a) {
        case 1:
            cout << "a = 1";
            break;
        case 2:
            cout << "a = 2";
            break;
        case 3:
            cout << "a = 3";
            break;
        case 4:
            cout << "a = 4";
            break;
        case 5:
            cout << "a = 5";
            break;
        default:
            cout << "Error";
            break;
    }

    return 0;
}