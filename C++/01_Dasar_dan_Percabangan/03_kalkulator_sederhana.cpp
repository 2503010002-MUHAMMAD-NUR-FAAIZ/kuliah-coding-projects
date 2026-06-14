/* ===================================================================================
💡 PROYEK 3: KALKULATOR MATEMATIKA SEDERHANA
📚 Belajar: Tipe Data Float/Char, Percabangan Switch-Case, dan Kondisi Error Handling
======================================================================================
*/

#include <iostream>
using namespace std;

int main () {
    char operasi;
    float angka1, angka2;

    cout << "=== KALKULATOR SEDERHANA ===" << endl;
    
    cout << "Masukkan angka pertama: ";
    cin >> angka1;

    cout << "Pilih operator (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch(operasi) {
        case '+':
            cout << "Hasil: " << angka1 + angka2;
            break;
        case '-':
            cout << "Hasil: " << angka1 - angka2;
            break;
        case '*':
            cout << "Hasil: " << angka1 * angka2;
            break;
        case '/':
            if(angka2 != 0)
                cout << "Hasil: " << angka1 / angka2;
            else
                cout << "Error! Tidak bisa membagi dengan nol.";
            break;
        default:
            cout << "Operator tidak valid!";
            break; 
    }
    cout << endl;

    return 0;
}