#include <iostream>

using namespace std;

int faktorial(int n);

int main(){
        int n, hasil;
        cout << "faktorial dari: "; cin >> n;
        
        hasil = faktorial(n);
        cout << " = " << hasil << endl;


    return 0;
}

int faktorial(int n){
    if(n == 1){
        cout << n << endl;
        return n;
    }
    else{
        cout << n << " x ";
        return n * faktorial(n - 1);
    }
}