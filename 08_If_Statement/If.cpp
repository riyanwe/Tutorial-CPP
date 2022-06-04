#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "masukan angka = ";
	cin >> a;

	// if statement
	// kondisi dalam bentuk boolean/komparasi/perbandingan
	if (a == 5)
	{
		cout << "selamat anda benar" << endl;
	}


    if (a != 5)
	{
		cout << "anda salah, coba lagi" << endl;
	}


	cout << "selesai" << endl;
	
	return 0;
}