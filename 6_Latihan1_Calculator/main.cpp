#include <iostream>

using namespace std;

int main() {
    float a, b, result = 0;
    char aritmatika;

    // Input
    cout << "Masukkan angka A: ";
    cin >> a;

    cout << "Masukkan angka B: ";
    cin >> b;

    cout << "Masukkan operator +, -, *, /: ";
    cin >> aritmatika;

    // Perform operation based on input operator
    bool validOperation = true;  // Flag to track if the operation is valid

    switch (aritmatika) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            if (b == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                validOperation = false;
            } else {
                result = a / b;
            }
            break;
        default:
            cout << "Error: Invalid operator entered." << endl;
            validOperation = false;
            break;
    }

    // Output result if the operation was valid
    if (validOperation) {
        cout << a << " " << aritmatika << " " << b << " = " << result << endl;
    } else {
        cout << "Invalid operation!" << endl;
    }

    return 0;
}
