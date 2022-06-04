#include <iostream>

using namespace std;

void fungsi(int *);
void kuadrat(int *);

int main(){

    int a = 5;
    cout << "\n\naddress a: " << &a << endl;
    cout << "nilai a: " << a << endl << endl;

    fungsi(&a); // fungsi dengan pointer

    kuadrat(&a);
    cout << "nilai a: " << a << endl << endl;
    
    return 0;
}

void fungsi(int *b){
    cout << "address fungsi: " << b << endl;
    cout << "nilai fungsi: " << *b << endl << endl; // deferencing
}

void kuadrat(int *Nkuadrat){
    *Nkuadrat = *Nkuadrat * *Nkuadrat;
    //cout << "nilai a: " << *Nkuadrat << endl << endl;
}