#include <iostream>
#include <cstdlib>  // untuk fungsi rand()
#include <ctime>    // untuk fungsi time()

using namespace std;

int main() {
    char again;

    cout << "Program Dadu Acak" << endl;
    cout << "==================" << endl;

    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));

    while (true) {
        cout << "Ingin melempar dadu? (y/n): ";
        cin >> again;

        if (again == 'y' || again == 'Y') {
            cout << "Anda mendapat " << rand() % 6 + 1 << endl;
        } else if (again == 'n' || again == 'N') {
            cout << "Terima kasih!" << endl;
            break;
        } else {
            cout << "Warning: Masukkan y atau n saja!" << endl;
        }
    }

    return 0;
}