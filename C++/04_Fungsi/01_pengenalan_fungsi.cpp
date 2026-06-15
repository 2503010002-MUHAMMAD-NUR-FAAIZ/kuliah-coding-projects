/* ==================================================================================
💡 PROYEK 1: PENGENALAN DASAR FUNGSI (VOID & RETURN)
📚 Belajar: Mendeklarasikan dan Memanggil Fungsi

    Mempelajari: 
    1. Fungsi 'void' -> Hanya menjalankan blok kode tanpa mengembalikan nilai.
    2. Fungsi 'return' -> Menghasilkan sebuah nilai yang bisa disimpan di variabel.
=====================================================================================
*/

#include <iostream>
using namespace std;

// 1. Contoh Fungsi VOID (Tidak mengembalikan sebuah nilai)
void sapaPengguna(string nama) {
    cout << "Halo, " << nama << "! Selamat datang di materi Fungsi C++." << endl;
    cout << "Semoga belajarnya menyenangkan!\n" << endl;
}

// 2. Contoh Fungsi RETURN (Mengembalikan sebuah nilai)
int hitungLuasPersegi(int sisi) {
    int luas = sisi * sisi;
    return luas; // Mengembalikan hasil perhitungan ke tempat fungsi dipanggil
}

int main() {
    cout << "=== PROGRAM PENGENALAN FUNGSI ===\n" << endl;

    // Memanggil fungsi void
    sapaPengguna("Muhammad Nur Faaiz");
    sapaPengguna("Calon Programmer Hebat");

    // Memanggil fungsi return dan menyimpan hasilnya di variabel
    int sisiPersegi = 5;
    int hasilLuas = hitungLuasPersegi(sisiPersegi);

    cout << "Menghitung Luas Persegi..." << endl;
    cout << "Panjang sisi : " << sisiPersegi << " cm" << endl;
    cout << "Luas persegi : " << hasilLuas << " cm persegi" << endl;

    cout << "\n=====================================" << endl;
    
    return 0;
}