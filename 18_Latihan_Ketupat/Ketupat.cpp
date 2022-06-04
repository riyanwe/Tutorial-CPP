#include <iostream>

using namespace std;

int main(){

    int z;
    int a;
    int b;

    cout << "masukkan besar ketupat: ";
    cin >> z;

    for (a = 1; a <= z; a++)
    {
    for(b = z; b >= a; b--){
            cout << " " ;
        }
        for(b = 1; b <= a * 2 - 1; b++){
            cout << "#" ;
        }
        cout << endl;
    }
    for (a = 2; a <= z; a++)
    {
    for(b = 1; b <= a; b++){
            cout << " " ;
        }
        for(b = z; b >= a * 2 - z; b--){
            cout << "#" ;
        }
        cout << endl;
    }

return 0;
}