#include <iostream>
#include <string>
using namespace std;

int main(){

	// char kata[5] = {'m','o','b','i','l'};
	// array char tidak bisa kita tambah, fiks karena array

	string kata("cat");
	cout << kata << endl;

	string kata;
	cout << "masukan kata" << endl;
	cin >> kata ;
	cout << "kata yang dimasukan adalah: " << endl;
	cout << kata << endl;

	
	cin.get();
	return 0;
}