#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    const int MAX_MOBIL = 3;
    string merek[MAX_MOBIL], model[MAX_MOBIL];
    int tahun[MAX_MOBIL];
    double harga[MAX_MOBIL];
    int jumlah = 0;
    int pilihan;

    do {
        cout << "\n=== Showroom Mobil ===\n";
        cout << "1. Tambahkan mobil\n";
        cout << "2. Tampilkan semua data mobil\n";
        cout << "3. Keluar dari showroom\n";
        cout << "Pilih Opsi (1-3): ";
        cin >> pilihan;

        switch (pilihan){
            case 1:
            if (jumlah >= MAX_MOBIL) {
                cout << "Showroom mobil sudah penuh\n";
            }else {
                cout << "\n=== Tambahkan data mobil ===\n";
                cout << "Merek Mobil: ";
                cin >> merek[jumlah];
                cout << "Model Mobil: ";
                cin >> model[jumlah];
                cout << "Tahun Mobil: ";
                cin >> tahun[jumlah];
                cout << "Harga Mobil: ";
                cin >> harga[jumlah];

                jumlah++;
                cout << "Data mobil berhasil ditambahkan\n";
            }
            break;

            case 2:
            if (jumlah == 0){
                cout << "Tidak ada data mobil di showroom.\n";
            }else {
                cout << "\n=== Data Mobil di showroom ===\n";
                cout << fixed << setprecision(0);

                cout << "\nNO | Merek        | Model        |Tahun      |Harga\n";
                cout << "------------------------------------------------------------\n";

                for (int i = 0; i < jumlah; i++){
                    cout << left
                    << setw(5) << i + 1
                    << setw(15) << merek[i]
                    << setw(15) << model[i]
                    << setw(10) << tahun[i]
                    << setw(15) << harga[i] << endl;
                }
            }
            break;

            case 3:
            cout << "Keluar dari showroom\n";
            break;

            default:
            cout << "Pilihan tidak valid\n";
        }
    }while (pilihan !=3);
    return 0;
}