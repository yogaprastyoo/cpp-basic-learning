#include <iostream>

using namespace std;

// Function with return value (int)
int kuadrat(int x) {
    return x * x;
}

// Function without return value (void)
void printResult(int number, int result) {
    cout << "Kuadrat dari " << number << " adalah " << result << endl << endl;
}

// Main function
int main() {
    int number, result;

    cout << "Masukkan angka: ";
    cin >> number;

    result = kuadrat(number);
    printResult(number, result);

    return 0;
}