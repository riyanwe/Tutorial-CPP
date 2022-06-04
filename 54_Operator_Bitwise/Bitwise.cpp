#include <iostream>
#include <bitset>
#include <string>

using namespace std;

void set(int b){
    cout << bitset<8>(b) << endl;
}

int main(){
    int a = 3;
    int b = 5;

    // not
    // and
    // or
    // xor
    // shift left
    // shift right

    // not ~
    // aku sebut ini kebalikan
    cout << "NOT (~)" << endl;
    cout << "des a \t: " << a << endl;
    cout << "a \t: "; set(a);
    cout << "~a \t: "; set(~a);

    cout << endl;

    // and &
    // akan benilai 1 apabila kedua nya bernilai 1
    cout << "AND (&)" << endl;
    cout << "des a \t: " << a << endl;
    cout << "des b \t: " << b << endl;
    cout << "a \t: "; set(a);
    cout << "b \t: "; set(b);
    cout << "a & b \t: "; set(a & b);

    cout << endl;

    // or |
    // akan bernilai 1 apabila salah satu benilai 1
    cout << "OR (|)" << endl;
    cout << "des a \t: " << a << endl;
    cout << "des b \t: " << b << endl;
    cout << "a \t: "; set(a);
    cout << "b \t: "; set(b);
    cout << "a | b \t: "; set(a | b);

    cout << endl;

    // xor ^
    // akan bernilai 0 apabila bernilai sama
    cout << "XOR (^)" << endl;
    cout << "des a \t: " << a << endl;
    cout << "des b \t: " << b << endl;
    cout << "a \t: "; set(a);
    cout << "b \t: "; set(b);
    cout << "a ^ b \t: "; set(a ^ b);

    cout << endl;

    // shift left <<
    // bergeser ke kiri
    cout << "SHIFT LEFT (var << x)" << endl;
    cout << "des a \t: " << a << endl;
    cout << "a \t: "; set(a);
    cout << "a << 2 \t: "; set(a << 2);

    cout << endl;

    // shift right >>
    // bergeser ke kanan
    cout << "SHIFT LEFT (var >> x)" << endl;
    cout << "des a \t: " << a << endl;
    cout << "a \t: "; set(a);
    cout << "a >> 1 \t: "; set(a >> 1);

    cout << endl;


    return 0;
}