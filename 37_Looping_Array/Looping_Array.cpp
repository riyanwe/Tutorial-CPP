#include <iostream>
using namespace std;

int main(){
    // looping yang khusus untuk array
    /*
        for(deklarasi variabel : array){
            statement
        }
    */

   int arrayNilai[10] = {0,1,2,3,4,5,6,7,8,9};

   for(int nilai : arrayNilai){
       cout << "alamat " << &nilai << " nilainya " << nilai << endl;
       nilai = 2; // tidak merubah apapun
   }

    cout << endl;

    // manipulasi array dengan menggunakan reference
    for(int &nilaiRef : arrayNilai){
        nilaiRef *= 2;

   }

   cout << endl;

    for(int &nilaiRef : arrayNilai){
        cout << "alamat " << &nilaiRef << " nilainya " << nilaiRef << endl;
   }
return 0;
}