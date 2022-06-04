#include <iostream>

using namespace std;

// void print(int data){
    //     cout << data << endl;
    // }

    template<typename T>
    void print(T data){
        cout << data << endl;
    }

    template<typename T>
    int keInt(T data){
        return int(data);
    }

    template<typename X, typename Y>
    X max(X a, Y b){
        return (a > b) ? a : b;
    }

int main(){

    print(10);
    print(10.5);
    print('C');

    cout << keInt(10.50) << endl;
    cout << max(1.55,5.12) << endl;

    print<int>(10.50);
    cout << max<double, int>(10.55, 20.55) << endl;


    return 0;
}