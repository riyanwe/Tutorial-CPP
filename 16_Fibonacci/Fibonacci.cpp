#include <iostream>

using namespace std;
int main()
{

    // f_n = fn_1 - fn_2
    int n;
    int fn;
    int fn1;
    int fn2;

    cout << "Program Deret Fibonacci\n";
    cout << "Masukkan Nilai ke_n: ";
    cin >> n;

    fn1 = 1;
    fn2 = 0;

    for(int a = 1; a <= n; a++)
    {
        fn2 = fn1;
        fn1 = fn;
        fn = fn1 + fn2;
        
       
        
        
        cout << fn << endl;
        //cout << a << endl;
    }

return 0;
}