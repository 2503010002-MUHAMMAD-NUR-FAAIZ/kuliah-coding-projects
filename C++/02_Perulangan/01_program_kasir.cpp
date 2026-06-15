/* ==================================================================================
💡 PROYEK 1: PROGRAM KASIR TOKO SEDERHANA
📚 Belajar: Perulangan/Looping (do-while), Akumulasi Total Nilai, dan Logika Belanja
=====================================================================================
*/

#include <iostream>
using namespace std;

int main() {
    int harga, jumlah, totalHarga = 0;
    char pilihan;

    cout << "=== SISTEM KASIR MINIMARKET ===" << endl;

    // Perulangan akan terus berjalan selama user menekan 'y' atau 'Y'
    do {
        cout << "\nMasukkan harga barang : Rp. ";
        cin >> harga;

        cout << "Masukkan jumlah barang: ";
        cin >> jumlah;

        // Menghitung total belanjaan (harga x jumlah) dan ditambahkan ke total sebelumnya
        totalHarga = totalHarga + (harga * jumlah);

        cout << "Apakah ada barang lain yang ingin diinput? (y/t): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');

    // Menampilkan hasil akhir belanjaan
    cout << "\n=====================================" << endl;
    cout << "TOTAL YANG HARUS DIBAYAR: Rp. " << totalHarga << endl;
    cout << "=====================================" << endl;
    cout << "Terima kasih telah berbelanja!" << endl;

    return 0;
}