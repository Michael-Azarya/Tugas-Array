#include <iostream>
using namespace std;

int main() {
    
    int jumlah_array = 5;
    int angka[4];
    
    for (int i = 0; i < jumlah_array; i++) {
        cout << "Masukkan Bilangan Ke "<<i+1<<" :";
        cin >> angka[i];    
    }
    for (int i =0;i<5;i++) {
        cout<<angka [i]<< " ";
    }
    return 0;
}