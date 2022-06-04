#include <iostream>
#include <string>

using namespace std;

int main(){
    int a;
    int b;
    int c;

    a = ( b=2 , cout << b << endl , c=5 , cout << c << endl , (b+c) );
    cout << a << endl;
    
    return 0;
}