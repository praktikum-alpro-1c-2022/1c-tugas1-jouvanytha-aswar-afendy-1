#include <iostream>

using namespace std;

int main(){

//Tugas 4.1 Menghitung Luas Trapesium
float luas;
int a,b,tinggi;

cout << "Masukkan a : ";
cin >> a;
cout << "Masukkan b : ";
cin >> b;
cout << "Masukkan Tinggi : ";
cin >> tinggi;

luas = 0.5 * (a + b) * tinggi;
cout << "Luas Trapesium = " << luas;

return 0;

}
