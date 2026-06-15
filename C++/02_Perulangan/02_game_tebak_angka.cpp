/* ==================================================================================
💡 PROYEK 2: GAME TEBAK ANGKA (REKURSIVITAS DAN LOGIKA)
📚 Belajar: Perulangan 'while' tanpa Batas (Infinite Loop dengan Break),
            Kondisi di Dalam Perulangan, dan Angka Acak (Random Number).

    Mempelajari: Kombinasi while loop, pengondisian if-else di dalam perulangan,
                 dan penggunaan generator angka acak/random dari sistem.
=====================================================================================
*/

#include <iostream>
#include <cstdlib> // Diperlukan untuk fungsi rand() dan srand()
#include <ctime> //Diperlukan untuk fungsi time()

using namespace std;

int main() {
    // Mengatur "seed" angka acak berdasarkan waktu komputer saat ini
    srand(time(0));

    // Menghasilkan angka acak antara 1 sampai 10
    int angkaRahasia = rand() % 10 + 1;
    int tebakan;
    int jumlahTebakan = 0;

    cout << "=== GAME TEBAK ANGKA (1 - 10) ===" << endl;
    cout << "Komputer sudah memilih satu angka. Coba tebak!\n" << endl;

    // Perulangan akan terus berjalan sampai tebakan user benar
    while (true) {
        cout << "Masukkan tebakanmu: ";
        cin >> tebakan;
        jumlahTebakan++; // Menambah hitungan berapa kali user menebak

        if (tebakan == angkaRahasia) {
            cout << "\nSELAMAT! Tebakanmu BENAR!" << endl;
            cout << "Angka rahasianya adalah: " << angkaRahasia << endl;
            cout << "Kamu berhasil menebak dalam " << jumlahTebakan << " kali percobaan." << endl;
            break; // Menghentikan perulangan secara paksa karena game selesai
        }
        else if (tebakan < angkaRahasia) {
            cout << "Terlalu KECIL! Coba angka yang lebih besar.\n" << endl;
        }
        else {
            cout << "Terlalu BESAR! Coba angka yang lebih kecil.\n" << endl;
        }
    }
    
    cout << "===================================================" << endl;

    return 0;
}