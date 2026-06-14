/*Belajar Variabel, Input User, dan Percabangan If-Else*/

#include <iostream>
using namespace std;

int main() {
    int angka;

    cout << "Masukan sebuah angka bilangan bulat: ";
    cin >> angka;

    if (angka % 2 == 0) {
        cout << "Angka " << angka << " adalah bilangan GENAP." << endl; 
    } else {
        cout << "Angka " << angka << " adalah bilangan GANJIL." << endl;
    }

    return 0;
}