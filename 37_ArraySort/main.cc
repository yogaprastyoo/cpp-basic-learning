#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 11;

void printArr(std::array<int, arraySize> &arrInt) {
    std::cout << "Array angka :";
    for (int &angka : arrInt) {
        std::cout << angka << " ";
    }

    std::cout << std::endl;
}

void printArr(std::array<char, arraySize> &arrChar) {
    std::cout << "Array angka :";
    for (char &huruf : arrChar) {
        std::cout << huruf << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::array<int, arraySize> arrInt = {9, 1, 3, 5, 3, 4, 2, 7, 6, 8, 0};
    std::array<char, arraySize> arrChar = {'a', 'f', 'c', 'n', 'z', 'y', 'm', 'b', 'l', 'k', 's'};


    printArr(arrInt);
    printArr(arrChar);

    std::cout << std::endl;

    std::sort(arrInt.begin(), arrInt.end());
    std::sort(arrChar.begin(), arrChar.end());

    printArr(arrInt);
    printArr(arrChar);

    std::cout << std::endl;

}