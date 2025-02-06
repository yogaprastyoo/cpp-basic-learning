#include <iostream>
using namespace std;

void functionRef(int &valRef) {
    cout << "Value valRef : " << valRef << endl;
    cout << "Address valRef : " << &valRef << endl << endl;
}

void squareRef(int &valRef) {
    valRef *= valRef;
}

int main() {
    int a = 5;

    cout << "Value a: " << a << endl;
    cout << "Address a: " << &a << endl << endl;

    functionRef(a);
    squareRef(a);

    cout << "Squared value of a: " << a << endl;
    cout << "Address of a after square: " << &a << endl << endl;

    return 0;
}