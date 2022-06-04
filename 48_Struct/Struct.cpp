#include <iostream>
#include <string>

using namespace std;

// Struct -> data yang di bentuk oleh beberapa data

/*
contoh:
    jeruk = buah;
    jeruk.warna
    jeruk.berat
    jeruk.harga
    jeruk.rasa

    jeruk.warna = "orange";
    jeruk.berat = 250;
    jeruk. harga = 2000;
    jeruk.rasa = "manis";
    */

struct buah{
    string warna;
    float berat;
    int harga;
    string rasa;
};

int main(){
    buah apel;
    buah jeruk;

    apel.warna = "merah";
    apel.berat = 250.50;
    apel.harga = 5000;
    apel.rasa = "manis";
    
    jeruk.warna = "kuning";
    jeruk.berat = 150.50;
    jeruk.harga = 3000;
    jeruk.rasa = "asam";

    cout << "APEL:" << endl;
    cout << "- " << apel.warna << endl;
    cout << "- " << apel.berat << endl;
    cout << "- " << apel.harga << endl;
    cout << "- " << apel.rasa << endl;

    cout << endl;

    cout << "JERUK: " << endl;
    cout << "- " << jeruk.warna << endl;
    cout << "- " << jeruk.berat << endl;
    cout << "- " << jeruk.harga << endl;
    cout << "- " << jeruk.rasa << endl;

    return 0;
}