#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string kalimat_1("Dayat suka olahraga biar sehat");
    string kalimat_2("Ucup suka makan pisang di pagi hari");

    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    // substring, mengambil string di tengah-tengsh
    // substring(index, panjang)
    cout << kalimat_1.substr(11,8) <<" ";
    cout << kalimat_2.substr(16,6) << endl;

    // mencari posisi substring
    cout << "posisi olahraga: ";
    cout << kalimat_1.find("olahraga") << endl;

    cout << "posisi pisang: ";
    cout << kalimat_2.find("pisang") << endl;

    int a = kalimat_1.find("a");
    cout << a << endl;
    cout << kalimat_1.find("a", a + 1) << endl;

    // mencari posisi dari belakang -> rfind
     cout << kalimat_1.rfind("t") << endl;

    return 0;
}