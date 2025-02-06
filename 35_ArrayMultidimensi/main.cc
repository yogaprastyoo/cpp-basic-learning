#include <iostream>
#include <array>
using namespace std;


void printArrayMD(int *arrPtr, int baris, int kolom){
    int index = 0;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
         cout << *(arrPtr + index) << " ";
         index++;
        }
        cout << endl;
    } 
}

int main(){

    // Array Multidimensi
    // int myArr[baris][kolom]

    const int baris = 2;
    const int kolom = 2;

    int myArrMD[baris][kolom] = {1, 2, 3, 4};
    // 1 2
    // 3 4

    // cout << myArrMD[0][0] << " " << myArrMD[0][1] << endl;
    // cout << myArrMD[1][0] << " " << myArrMD[1][1] << endl;

    printArrayMD(*myArrMD, baris, kolom);
    

    return 0;
}