#include <iostream>

using namespace std;

int kuadrat(int x){ // fungsi kembalian
    int y;
    y = x * x;
    return y;
}
int tambah(int a, int b){
    int c;
    c = a + b;
    return c;
}
int main (){

    int input, hasil, a, b, hasil2;
    cout << "masukan nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    cout << hasil << endl;

    cout << "masukan nilai pertama: ";
    cin >> a;
    cout << "masukan nilai kedua: ";
    cin >> b;

    hasil2 = tambah(a, b);
    cout << hasil2 << endl;

    return 0;
}