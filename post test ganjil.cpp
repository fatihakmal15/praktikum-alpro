#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    string nama_pelanggan;
    int jenis_bensin;
    float liter, total_harga;
    const float harga_pertalite = 7000.0;
    const float harga_pertamax = 9000.0;

    
    cout << "Masukkan nama pelanggan: ";
    getline(cin, nama_pelanggan);

    
    cout << "\nJenis Bensin:\n";
    cout << "1. Pertalite (Rp7.000/Liter)\n";
    cout << "2. Pertamax (Rp9.000/Liter)\n";
    cout << "Pilih jenis bensin (1/2): ";
    cin >> jenis_bensin;

    cout << "Masukkan jumlah liter: ";
    cin >> liter;

    
    if (jenis_bensin == 1) {
        total_harga = liter * harga_pertalite;
    } else if (jenis_bensin == 2) {
        total_harga = liter * harga_pertamax;
    } else {
        cout << "Pilihan tidak valid!\n";
        return 1;
    }

    cout << "\n===== STRUK PEMBELIAN =====\n";
    cout << "Nama Pelanggan : " << nama_pelanggan << endl;
    cout << "Jenis Bensin   : " << (jenis_bensin == 1 ? "Pertalite" : "Pertamax") << endl;
    cout << "Jumlah Liter   : " << liter << " L" << endl;
    cout << "Total Harga    : Rp" << fixed << setprecision(2) << total_harga << endl;
    cout << "===========================\n";

    return 0;
}