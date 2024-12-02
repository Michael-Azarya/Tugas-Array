#include <iostream>
using namespace std;

int main() {
    
    int jumlah_array = 10;
    int angka[9];
    
    for (int i = 0; i < jumlah_array; i++) {
        cout << "Masukkan Bilangan Ke "<<i+1<<" :";
        cin >> angka[i];    
    }
    int sum = 0;
    for (int i = 0; i < jumlah_array; i++){
        sum += angka[i];
    }
    
     cout << "Hasil penjumlahan nilai pada Array Adalah: " << sum << endl;
     
    return 0;
}