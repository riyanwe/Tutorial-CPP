#include <iostream>

using namespace std;

int x = 10; // variabel global

int ambil_global(){
    return x; // mengambil variabel global
}

int x_local(){
    //variabel local scope nya x_local
    int x = 5;
    return x;
}
int x_local2(){
    //variabel local scope nya x_local
    int x = 7;
    return x;
}

int main(){
    cout << "1. variabel global: " << x << endl;

    int x = 8; // variabel local untuk main
    cout << "2. variabel local untuk main: " << x << endl;
    cout << "3. variabel local ambil_global: " << ambil_global() << endl;
    cout << "4. variabel local main: " << x << endl;
    cout << "5. variabel x_local: " << x_local() << endl;
    cout << "6. variabel local main: " << x << endl;

    cout << "7. variabel local main: " << x << endl;
    {
        cout << "8. variabel local main: " << x << endl;

        int x = 3; // variabel block scope
        cout << "9. variabel local block: " << x << endl;
        // untuk mengambil variabel global bisa juga menggunakan ::
        cout << "10. variabel global: " << ::x << endl;
        cout << "11. variabel x_local2: " << x_local2() << endl;
    }

    return 0;
}