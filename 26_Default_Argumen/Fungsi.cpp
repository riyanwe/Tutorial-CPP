#include <iostream>

using namespace std;

// fungsi prototipe
double volume_kubus(double p = 2, double l = 2, double t = 2);

int main(){

    cout << "volume kubus: " << volume_kubus(3,4,5) << endl;
    cout << "volume kubus: " << volume_kubus(3,4) << endl;
    cout << "volume kubus: " << volume_kubus(3) << endl;
    cout << "volume kubus: " << volume_kubus() << endl;

    return 0;
}

// default argument atau nilai standar nya
double volume_kubus(double p, double l, double t){
    return p * l * t;
}