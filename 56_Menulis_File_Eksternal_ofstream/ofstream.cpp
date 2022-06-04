#include <iostream>
#include <fstream> // ofstream , ifstream , fstream

using namespace std;

int main(){

    ofstream myFile;

    // ios::out = default, operasi output;
    // ios::app = menuliskan pada akhir baris;
    // ios::trunc = default, membuat file jika tidak ada, dan kalo ada akan di hapus;

    int a = 152724;
    myFile.open("data1.txt", ios::out);
    myFile << "\nmenuliskan baris baru pada data 1 \n";
    myFile << a;
    myFile.close();

    myFile.open("data2.txt", ios::trunc);
    myFile << "\nmenuliskan baris baru pada data 2";
    myFile.close();

    myFile.open("data3.txt", ios::app); // append
    myFile << "\nmenuliskan baris baru pada data 3";
    myFile.close();

    return 0;
}