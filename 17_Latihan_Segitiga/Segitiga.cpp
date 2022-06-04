#include <iostream>

using namespace std;

int main()
{

int x;

cout << "masukkan panjang pola: ";
cin >> x;

cout << "\n\n====== POLA 1 =======\n\n";

for(int a = 0; a < x; a++)
{
    for(int b = 0; b <= a; b++){
    cout << a ;
    }
    cout << endl;
}

cout << "\n\n====== POLA 2 ======\n\n";

for(int a = 0; a <= x; a++)
{
    for(int b = x; b >= a; b--){
    cout << a ;
    }
    cout << endl;
}


return 0;
}