/* ==================================================================================
💡 PROYEK 2: MESIN PENCARI ANGKA (LINEAR SEARCH)
📚 Belajar: Pencarian Data di dalam Array 1 Dimensi

    Mempelajari: Algoritma Linear Search, yaitu menelusuri isi array dari laci
                 pertama (index 0) sampai terakhir untuk mencocokkan data
                 dengan kata kunci yang dicari user.
=====================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    // Array berisi 10 angka yang suda ditentukan dari awal
    int dataAngka[10] = {12, 45, 7, 89, 23, 56, 90, 34, 67, 10};
    int angkaDicari;
    bool ketemu = false;

    cout << "=== MESIN PENCARO ANGKA ===" << endl;
    cout << "Data di dalam sistem: ";
    
    for (int i = 0; i < 10; i++) {
        cout << dataAngka[i] << " ";
    }

    cout << "\n\nMasukkan angka yang ingin dicari: ";
    cin >> angkaDicari;

    // Proses pencarian (Linear Search)
    for (int i = 0; i < 10; i++) {
        if (dataAngka[i] == angkaDicari) {
            cout << "\n BINGO! Angka " << angkaDicari << " ditemukan pada urutan ke-" << i + 1 <<  " (Index ke-" << i << ")." << endl;
            ketemu = true;
            break; // Hentikan pencarian jika angka sudah ketemu
        }
    }

    // Jika setelah array ditelusuri sampai habis tapi angka tidak ketemu
    if(!ketemu) {
        cout << "\nMAAF! Angka " << angkaDicari << " tidak ditemukan di dalam sistem." << endl;
    }

    cout << "======================================" << endl;

    return 0;
}