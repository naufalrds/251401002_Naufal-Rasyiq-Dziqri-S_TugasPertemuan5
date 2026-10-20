#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Jumlah data: ";
    cin >> n;

    int nilai[100];
    cout << "Masukkan " << n << " nilai (sudah terurut ascending):" << endl;
    for (int i = 0; i < n; i++) {
        cin >> nilai[i];
    }

    int cari;
    cout << "Nilai yang dicari: ";
    cin >> cari;

    int kiri = 0, kanan = n - 1, indeks = -1;

    while (kiri <= kanan) {
        int tengah = (kiri + kanan) / 2;
        if (nilai[tengah] == cari) {
            indeks = tengah;
            break;
        } else if (nilai[tengah] < cari) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
        }
    }

    if (indeks != -1)
        cout << "Data ditemukan pada indeks " << indeks << endl;
    else
        cout << "Data tidak ditemukan" << endl;

    return 0;
}
