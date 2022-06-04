#include <iostream>

using namespace std;

void fungsi(int &);
void kuadrat(int &);

int main(){
        int a =5;
        cout << "address a " << &a << endl;
        cout << "  nilai a " << a << endl;

        int &b = a;
        cout << "address b " << &b << endl;
        cout << "  nilai b " << b << endl;

        fungsi(a);

        a = 20;
        kuadrat(a);
        cout << "  nilai a " << a << endl;



    return 0;
}

void fungsi(int &c){
    cout << "address c " << &c << endl;
    cout << "  nilai c " << c << endl;
}
void kuadrat(int &nilaikuadrat){
    nilaikuadrat = nilaikuadrat * nilaikuadrat;
}