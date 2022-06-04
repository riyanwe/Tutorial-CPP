#include <iostream>
using namespace std;

union data{ 
    int a;
    char b[3];
};

int main(){
    data data_union;

    data_union.a = 12345678;

    cout << "data a: " << data_union.a << endl;
    cout << "data b: " << data_union.b << endl << endl;

    data_union.b[0] = 'A';
    data_union.b[1] = 'B';
    data_union.b[2] = 'C';

    cout << "data a: " << data_union.a << endl;
    cout << "data b: " << data_union.b << endl << endl;

     data_union.a = 12345678;

    cout << "data a: " << data_union.a << endl;
    cout << "data b: " << data_union.b << endl;

    return 0;
}