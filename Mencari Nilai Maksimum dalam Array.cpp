#include <iostream>

using namespace std;

int main() {
    const int jumlahangka = 7;
    int angka[jumlahangka];
    int max;

    cout << "Masukkan 7 nilai integer:\n";
    for (int i = 0; i < jumlahangka; ++i) {
        cout << "Angka " << i+1 << ": ";
        cin >> angka[i];
    }

    max = angka[0];

    for (int i = 1; i < jumlahangka; ++i) {
        if (angka[i] > max) {
            max = angka[i];
        }
    }

    cout << "\nNilai maksimum adalah: " << max << endl;

    return 0;
}