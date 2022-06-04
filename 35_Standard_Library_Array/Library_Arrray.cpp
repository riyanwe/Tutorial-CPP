#include <iostream>
#include <array>

using namespace std;

int main(){
    // membuat array dengan standard library
    // array < int, jumlah array > nama array
    array < int, 7 > kelas;
    for(int i = 0; i <= 6; i++){
        kelas[i] = i;
        cout << "kelas [" << kelas[i] << "] ";
        cout << "alamat " << &kelas[i] << endl;
    }
    cout << endl;

    // melihat ukuran array
    cout << "ukuran " << kelas.size() << endl;

    // melihat alamat awal array
    cout << "alamat awal " << std::begin(kelas) << endl;

    // melihat alamat akhir array
    cout << "alamat akhir " << std::end(kelas) << endl;

    // melihat nilai dengan index
    cout << "kelas ke 2 : " << kelas.at(2) << endl;

    return 0;
}