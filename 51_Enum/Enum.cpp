#include <iostream>

using namespace std;

enum warna {merah, putih, hitam, coklat = 5, kuning, biru};

int main(){
    warna kain;
    kain = hitam;

    if(kain == hitam){
        cout << "warna yang anda pilih adalah hitam" << endl;
    }
    cout << hitam << endl;

    return 0;
}