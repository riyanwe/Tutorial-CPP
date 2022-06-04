#include <iostream>
using namespace std;

int main(){

	/*int a = 5;

	// pointer
	int *aPtr = nullptr;
	aPtr = &a;

	// int a mempunyai nilai dan address ( alamat )

	cout << " nilai dari a: " << a << endl;
	cout << "alamat dari a: " << aPtr << endl;

	// dereferencing, mengambil data dari sebuah pointer
	a = 10;
	cout << "mengambil nilai dari pointer aPtr : " << *aPtr << endl;*/




	int x = 5;
	int *y = &x;

	cout << "nilai dari x  : " << x << endl;
	cout << "nilai dari x  : " << &x << endl;
	cout << "nilai dari y  : " << *y << endl;
	cout << "alamat dari x : " << y << endl;

	
	return 0;
}