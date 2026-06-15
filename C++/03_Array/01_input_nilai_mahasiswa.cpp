/* ===============================================================================
💡 PROYEK 1: PROGRAM REKAP DAN HITUNG RATA-RATA NILAI KULIAH
📚 Belajar: Array 1 Dimensi dan Penggabungannya dengan Perulangan 'for'
        
    Mempelajari: Cara Mendeklarasikan Array, memasukkan data ke dalam laci Array
                 satu per satu menggunakan index, dan membaca datanya untuk
                 dihitung total serta rata-ratanya.
===================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    int jumlahTugas;
    float totalNilai = 0, rataRata;

    cout << "=== PROGRAM HITUNG RATA-RATA NILAI ===" << endl;
    cout << "Masukkan jumlah tugas semester ini: ";
    cin >> jumlahTugas;

    // Membuat array untuk menampung nilai tugas sesuai jumlah yang diinput user
    float nilaiTugas[jumlahTugas];

    // Perulangan 'for' untuk mengambil input nilai satu per satu ke dalam array
    for (int i = 0; i < jumlahTugas; i++) {
        cout << "Masukkan nilai Tugas ke-" << i + 1 << ": ";
        cin >> nilaiTugas[i];

        // Menjumlahkan seluruh nilai tugas
        totalNilai += nilaiTugas[i];
    }

    // Menghitung rata-rata nilai
    rataRata = totalNilai / jumlahTugas;

    cout << "\n=====================================" << endl;
    cout << "Totak Nilai Keseluruhan: " << totalNilai << endl;
    cout << "Nilai Rata-Rata Tugas  : " << rataRata << endl;
    cout << "=====================================" << endl;

    if (rataRata >= 70) {
        cout << "Status: SELAMAT ANDA LULUS DI MATA KULIAH INI!" << endl;
    } else {
        cout << "Status: ANDA HARUS REMEDIAL!" << endl;
    }

    return 0;
}