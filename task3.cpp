#include <iostream>

using namespace std;

int main(){
    int angka, satuan, puluhan, ratusan, ribuan;

    cout << "masukkan 4 digit angka: ";
    cin >> angka;

    satuan   = angka % 10;
    puluhan = (angka / 10) % 10;
    ratusan  = (angka / 100) % 10;
    ribuan    = (angka / 1000) % 10;
    
    cout << "jumlah digit dari " << angka << " adalah " << satuan + puluhan + ratusan + ribuan << endl;

    return 0;
}