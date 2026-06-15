/* ==================================================================================
💡 PROYEK 3: GENERATOR POLA SEGITIGA BINTANG
📚 Belajar: Nested Loop (Perulangan Bersarang menggunakan 'for')

    Mempelajari: Perulangan bersarang (nested loop atau for di dalam for).
                 Ini pondasi penting untuk melatih logika berpikir matriks/
                 koordinat.
=====================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    int tinggi;

    cout << "=== GENERATOR SEGITIGA BINTANG ===" << endl;
    cout << "Masukkan tinggi segitiga: ";
    cin >> tinggi;
    cout << endl;

    // Loop pertama (Outer Loop) untuk mengatur baris (turun ke bawah)
    for (int baris = 1; baris <= tinggi; baris++) {

        // Loop kedua (Inner Loop) untuk mencetak bintang ke samping pada baris tersebut
        for (int bintang = 1; bintang <= baris; bintang++) {
            cout << "*";
        }

        // Setelah bintang di satu baris selesai di cetak, pindah ke baris baru
        cout << endl;
    }

    cout << "\n===================================" << endl;

    return 0;
}