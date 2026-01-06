#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    map<string, int> pemilih;
    int totalpemilih;

    cout << "=== SISTEM VOTING MOBIL ===" << endl;
    cout << "Masukan jumlah pemilih: ";
    cin >> totalpemilih;
    cin.ignore();

    for (int i = 1; i <= totalpemilih; i++) {
        string merek;
        cout << "\nPemilih ke-" << i << ", pilih merek mobil: ";
        getline(cin, merek);
        pemilih[merek]++;
    }
    cout << "=== HASIL VOTING ===" << endl;
    for (auto& pemilih : pemilih) {
        cout << pemilih.first << ": " << pemilih.second << " suara" << endl;
    }
    return 0;
}