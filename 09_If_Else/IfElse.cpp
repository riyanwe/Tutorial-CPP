#include <iostream>

using namespace std;

int main(){

	int a;


	cout << "======== MEMASUKKAN ANGKA ===========" << endl;
	cout << "masukan angka 5, 3, atau 1 = ";
	cin >> a;

	if (a == 5){
		cout << "\nnilai ini adalah 5" << endl;
	} 
	
	else if (a == 3){
		cout << "\nnilai ini adalah 3" << endl;
	} 
	
	else if (a == 1){
		cout << "\nnilai ini adalah 1" << endl;
	} 
	
	else {
		cout << "\nangka yang anda masukkan bukanlah 5, 3, atau 1" << endl;
	}

	cout << "\nselesai" << endl;
	
	return 0;
}