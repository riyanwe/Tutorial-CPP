#include <iostream>
using namespace std;

int main(){
    // arrray multidimensi
    /*
        int array[baris][kolom] = {index}
    */
   /*
   int angka[2];
    
    [0]
    [1]

    */
   /*
   int nomor[2][3]; // jumlah index -> 2 x 3 = 6
   1 4 6
   2 3 5

    [0][0] = 1
    [0][1] = 4
    [0][2] = 6

    [1][0] = 2
    [1][1] = 3
    [1][2] = 5
    */

    int nomor[2][3] = {1,4,6,2,3,5};
    cout << nomor[0][0] << " ";
    cout << nomor[0][1] << " ";
    cout << nomor[0][2] << " " << endl;

    cout << nomor[1][0] << " ";
    cout << nomor[1][1] << " ";
    cout << nomor[1][2] << " " << endl;

    return 0;
}