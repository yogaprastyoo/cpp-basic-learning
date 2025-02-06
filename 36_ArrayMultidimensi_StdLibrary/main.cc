#include <iostream>
#include <array>
using namespace std;

const int baris = 2;
const int kolom = 3;
void printArrayMD(array<array<int, kolom>, baris> &valueArray) {
    for (array<int, kolom> vectorBaris : valueArray) {
        for (int nilaiKolom : vectorBaris) {
            cout << nilaiKolom << " ";
        }
        cout << endl;
    }
}


int main() {
    // array<array <int, kolom>, baris> myArrMD = {0, 1, 2,
    //                                             3, 4, 5,
    //                                             6, 7, 8};

    // cout << myArrMD[0][0] << " " << myArrMD[0][1] << " " << myArrMD[0][2] << endl;
    // cout << myArrMD[1][0] << " " << myArrMD[1][1] << " " << myArrMD[1][2] << endl;
    // cout << myArrMD[2][0] << " " << myArrMD[2][1] << " " << myArrMD[2][2] << endl;

    // array<array<int, kolom>, baris> myArrMD = {0, 1, 2,
    //                                            3, 4, 5};

    array<array<int, kolom>, baris> nilaiMD = {0, 1, 2, 3, 4, 5};

    // cout << myArrMD[0][0] << " " << myArrMD[0][1] << " " << myArrMD[0][2] << endl;
    // cout << myArrMD[1][0] << " " << myArrMD[1][1] << " " << myArrMD[1][2] << endl;

    printArrayMD(nilaiMD);

    return 0;
}