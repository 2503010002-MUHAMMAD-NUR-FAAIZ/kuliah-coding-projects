/* ==================================================================================
💡 PROYEK 2: KALKULATOR MODULAR DENGAN FUNGSI
📚 Belajar: Fungsi dengan Parameter dan Modularitas Kode

    Mempelajari: Memecah logika perhitungan matematika (+, -, *, /) menjadi 
                 fungsi-fungsi kecil terpisah agar fungsi 'main' menjadi 
                 sangat bersih dan mudah dibaca.
=====================================================================================
*/

#include <iostream>
using namespace std;

// DEKLARASI FUNGSI MATEMATIKA
float tambah(float a, float b) {
    return a + b;
}

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    if (b == 0) {
        cout << "Error: Tidak bisa membagi dengan nol! ";
        return 0;
    }
    return a / b;
}

int main() {
    float angka1, angka2;
    char operasi;

    cout << "=== KALKULATOR MODULAR ===" << endl;
    
    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Pilih operator (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    cout << "----------------------------------------------" << endl;
    cout << "Hasil: ";

    switch (operasi) {
    case '+':
        cout << tambah(angka1, angka2);
        break;
    case '-':
        cout << kurang(angka1, angka2);
        break;
    case '*':
        cout << kali(angka1, angka2);
        break;
    case '/':
        cout << bagi(angka1, angka2);
        break;
    default:
        cout << "Operator tidak valid!";
    }

    cout << "\n==============================================" << endl;

    return 0;
}