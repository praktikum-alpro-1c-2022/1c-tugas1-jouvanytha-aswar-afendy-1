#include <iostream>

using namespace std;

int main(){

//Tugas 4.1 Menghitung Luas Belah Ketupat
float luas;
int diagonal1,diagonal2;

cout << "Masukkan Diagonal 1 : ";
cin >> diagonal1;
cout << "Masukkan Diagonal 2 : ";
cin >> diagonal2;

luas = 0.5 * diagonal1 * diagonal2;
cout << "Luas Belah Ketupat = " << luas;

return 0;

}
