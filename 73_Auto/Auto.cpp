#include <iostream>
#include <string>

using namespace std;


template <typename T, typename U>
auto max(T a, U b){
    return (a > b) ? a : b;
}

int main(){

    int a = 20;
    string b = "tes";
    double c = 11.435;
    float d = 15.534f;
    auto e = max(a, c);

    cout << a << "\ttipe: " << typeid(a).name() << endl;
    cout << b << "\ttipe: " << typeid(b).name() << endl;
    cout << c << "\ttipe: " << typeid(c).name() << endl;
    cout << d << "\ttipe: " << typeid(d).name() << endl;
    cout << e << "\ttipe: " << typeid(e).name() << endl;

    return 0;
}