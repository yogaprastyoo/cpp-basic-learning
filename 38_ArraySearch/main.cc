#include <iostream>
#include <array>
#include <algorithm>

const size_t arraySize = 11;

void PrintArray(std::array<int, arraySize> &arryInt){
    std::cout << "Array : ";
    for(int &angka : arryInt){
        std::cout << angka << " ";
    }
    std::cout << std::endl;
}

int main(){
    int searchNum;
    bool found = false;

    std::array <int, arraySize> arrInt = {9, 1, 3, 5, 3, 4, 2, 7, 6, 8, 0};
    std::sort(arrInt.begin(), arrInt.end());

    PrintArray(arrInt);

    std::cout << "Mencari angka dalam array diatas: ";
    std::cin >> searchNum;

    std::cout << std::endl;

    found = std::binary_search(arrInt.begin(), arrInt.end(), searchNum);

    if (found)
    {
        std::cout << "Angka yang anda cari ditemukan" << std::endl;
    }else{
        std::cout << "Angka yang anda cari TIDAK ditemukan" << std::endl;
    }
    

    return 0;
}