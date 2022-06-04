#include <iostream>
using namespace std;

int main(){
    int nilai[3] = {45, 38, 98}; // cara menulis 1
    cout << nilai[0] << endl;
    cout << nilai[2] << endl;

    cout << endl;
    // cara penulisan ke 2
    int nilaidua[3];
    nilaidua[0] = 34;
    nilaidua[1] = 47;
    nilaidua[2] = 19;

    cout << nilaidua[0] << endl;
    cout << nilaidua[2] << endl;
    cout << nilaidua[1] << endl;

    cout << endl;
    // menggunakan string
    string nama[3] = {"john", "alex", "budi"};
    cout << nama[0] << endl;
    cout << nama[2] << endl;
    cout << nama[1] << endl;

    return 0;
}