#include <iostream>

// macro
#define A 3.14159265359

using namespace std;

double a = 3.14159265359; 
int main()
{
	cout <<"nilai a double = " << a << endl;
	cout << "alamat a "<< &a << endl;
	cout << "nilai A = " << A << endl; // PI sama aja ngetik biasa 
                                            //tidak ada hubungan dengan memory
	
	return 0;
}