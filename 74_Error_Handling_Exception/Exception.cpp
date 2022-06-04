#include <iostream>
#include  <exception>

using namespace std;

int pembagian(int &num, int &denum){
    if(denum == 0){
        // throw overflow_error("Error: Pembagi Nol");
        throw "Error: Pembagi Nol";
    }
    return  num/denum;
}

int main(){
    int a;
    int b;
    int c;

    while(true){
      lanjut:
        cout << "num: ";
        cin >> a;
        cout << "denum: ";
        cin >> b;
        

            try{
                c = pembagian(a,b);
                cout << c << endl;
            //}catch(exception &x){
            }catch(const char* x){
                // cout << e.what() << endl;
                cout << x << endl;
                }
                cout << "Lanjut ? (y/n) : ";
                char is_lanjut;
                cin >> is_lanjut;
                    if( (is_lanjut == 'y') || (is_lanjut == 'Y')){
                        goto lanjut;
                    }else if ((is_lanjut == 'n') || (is_lanjut == 'N')){
                        break;
                    }
            }
            cout << "Alhir dari program." << endl;

    return 0;
}