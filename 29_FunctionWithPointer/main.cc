#include <iostream>
using namespace std;

void functionPtr(int *valPtr) {
    cout << "Value valPtr: " << valPtr << endl;
    cout << "Address valPtr: " << &valPtr << endl;
    cout << "Dereferencing valPtr: " << *valPtr << endl << endl;
}

void squarePtr(int *valPtr) {
    *valPtr *= *valPtr;
}

int main() {
    int a = 5;

    cout << "Value a: " << a << endl;
    cout << "Address a: " << &a << endl << endl;

    functionPtr(&a);
    squarePtr(&a);

    cout << "Squared value of a: " << a << endl;
    cout << "Address of a after square: " << &a << endl << endl;

    return 0;
}