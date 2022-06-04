#include <iostream>
#include <string>

using namespace std;

struct aktor{
	string nama;
	int tahun_lahir;
};

struct film{
	string judul;
	string genre;
	int tahun;
	// struct aktor
	aktor pemeran_1;
	aktor pemeran_2;
};

int main(){

	aktor aktor1, aktor2;
	film film1, film2;

	// buat aktor 1
	aktor1.nama = "Michael Otong";
	aktor1.tahun_lahir = 1992;

	// buat aktor 2
	aktor2.nama = "Sandra Bulog";
	aktor2.tahun_lahir = 1995;

	// buat film
	film1.judul = "Pengabdi Wakanda";
	film1.genre = "Documenter";
	film1.tahun = 2018;
	film1.pemeran_1 = aktor1;
	film1.pemeran_2 = aktor2;

	film2.judul = "Dilan 2000";
	film2.genre = "action";
	film2.tahun = 2040;
	film2.pemeran_1 = aktor1;

    cout << "FILM 1" << endl;
	cout << "judul: " << film1.judul << endl;
	cout << "pemeran 1: " << film1.pemeran_1.nama << endl; // struct aktor
	cout << "pemeran 2: " <<film1.pemeran_2.nama << endl; // struct aktor
	cout << "tahun: " <<film1.tahun << endl;

    cout << endl;

    cout << "FILM 1" << endl;
	cout << "judul: " << film2.judul << endl;
	cout << "pemeran 1: " << film2.pemeran_1.nama << endl;
	cout << "tahun: " << film2.tahun << endl;

    cout << endl;
    
	return 0;
}
