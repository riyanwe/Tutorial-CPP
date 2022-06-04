#include <iostream>

using namespace std;

// Ternary operator = ?
// kondisi ? hasil1 : hasil2
// fungsinya hampir sama dengan if-else

int main(){
    int a, b;
    string hasil1, hasil2, output;

    hasil1 = "otong";
    hasil2 = "ucup";

    a = 3;
    cout << "masukan angka: " << endl;
    cin >> b;

    output = (a < b) ? hasil1 : hasil2;

    // sama
    /*
    if(a < b){                                                                                                                                                                                                                                                                                                                                                                             
        cout << hasil1 << endl;
    }else{
        cout << hasil2 << endl;
    }
    */
    cout << output << endl;
    

    return 0;
}