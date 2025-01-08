#include <iostream>
using namespace std;

// Function prototype
double luasPersegiPanjang(double panjang, double lebar);
double kelilingPersegiPanjang(double panjang, double lebar);
void tampilkanLuasPersegiPanjang(double panjang, double lebar);
void tampilkanKelilingPersegiPanjang(double panjang, double lebar);

// Main function
int main() {
    double panjang, lebar;

    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;

    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;

    tampilkanLuasPersegiPanjang(panjang, lebar);
    tampilkanKelilingPersegiPanjang(panjang, lebar);

    return 0;
}

// Fungsi menghitung luas persegi panjang
double luasPersegiPanjang(double panjang, double lebar) {
    return panjang * lebar;
}

// Fungsi menghitung keliling persegi panjang
double kelilingPersegiPanjang(double panjang, double lebar) {
    return 2 * (panjang + lebar);
}

// Fungsi menampilkan luas persegi panjang
void tampilkanLuasPersegiPanjang(double panjang, double lebar) {
    cout << "Luas persegi panjang: " << luasPersegiPanjang(panjang, lebar)
         << endl;
}

// Fungsi menampilkan keliling persegi panjang
void tampilkanKelilingPersegiPanjang(double panjang, double lebar) {
    cout << "Keliling persegi panjang: "
         << kelilingPersegiPanjang(panjang, lebar) << endl;
}