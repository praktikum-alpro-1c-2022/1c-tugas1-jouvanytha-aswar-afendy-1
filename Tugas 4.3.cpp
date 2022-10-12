#include <iostream>

using namespace std;

int main(){

//Tugas 4.1 Menghitung Luas Segitiga
float luas;
int alas,tinggi;

cout << "Masukkan Alas : ";
cin >> alas;
cout << "Masukkan Tinggi : ";
cin >> tinggi;

luas = 0.5 * alas *tinggi;
cout << "Luas segitiga = " << luas;

return 0;

}
