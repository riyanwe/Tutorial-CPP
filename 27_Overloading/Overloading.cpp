#include <iostream>

using namespace std;

// overloading + menimpa

// basic function
int luas_kotak(int panjang, int lebar){
    int luas = panjang * lebar;
    return luas;
}
int luas_kotak(int sisi){
    int luas = sisi * sisi;
    return luas;
}
double luas_kotak(double sisi){
    return sisi * sisi;
}

int main(){

 cout << "luas kotak 2 x 3 = " << luas_kotak(2,3) << endl;
 cout << "luas kotak 2 x 2 = " << luas_kotak(2) << endl;
 cout << "luas kotak 2.5 x 2.5 = " << luas_kotak(2.5) << endl;

    return 0;
}