#include <iostream>

using namespace std;

// reppoter
int kuadrat(int x){ // fungsi kembalian
    int y;
    y = x * x;
    return y;
}

// worker
void tampilkan(int input){
    cout << "menampilkan dengan void\n: ";
    cout << input << endl;
}

int main()
{

int input, hasil, a, b, hasil2;
    cout << "masukan nilai kuadrat dari: ";
    cin >> input;

    hasil = kuadrat(input);
    tampilkan(hasil);




    return 0;
}