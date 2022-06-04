#include <iostream>

using namespace std;

void rekursif(int n){
    if(n > 0){
        cout <<"ini adalah rekursif" << endl;
        n--;
        rekursif(n);
    }
}

int pangkatIterasi(int a = 2, int b = 4){
    int hasil = a;
    for(int i = 1; i < b; i++){
        hasil = hasil * a;
    }
    return hasil;
    
}
int pangkatRekursif(int a = 2, int b = 4){
    if(b <= 1){
        cout << "rekursif " << b << endl;
        return a;
    }
    else{
        cout << "rekusif " << b << endl;
        return a * pangkatRekursif(a, (b - 1));
    }
    
}

int main(){

    rekursif(10);
    //int a, b;
    //cout << "angka: "; cin >> a;
    //cout << "pangkat: "; cin >> b;
    cout << "\n\nhasil iterasi: \n\n" << pangkatIterasi() << endl;
    cout << "\n\nhasil rekursif: \n\n" << pangkatRekursif() << endl;

    return 0;
}