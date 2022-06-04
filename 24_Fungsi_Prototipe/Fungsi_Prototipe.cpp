#include <iostream>

using namespace std;


double hitung_luas(double p, double l);
void tampilkan(double x);

int main(){
    //bisa di casting menjadi double 
    //dan nama variabel nya tidak harus sama dengan yang ada di parameter fungsi / void
    double panjang, lebar, luas;
    cout << "masukan panjang: ";
    cin >> panjang;
    cout << "masukan lebar: ";
    cin >> lebar;

    luas = hitung_luas(panjang, lebar);
    tampilkan(luas);
    

    return 0;
}
double hitung_luas(double p, double l){
    return p * l;
}
void tampilkan(double x){
    cout << "hasil dengan void: " << x << endl;
}