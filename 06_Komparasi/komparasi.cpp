#include <iostream>

using namespace std;

int main()
{
    

    // komparasi/perbandingan, ==, !=, <, >, <=, >=
    // sama dengan, tidak sama dengan, kurang dari, lebih dari, kurang dari sama dengan, lebih dari sama dengan


    int a = 2;
    int b = 3;

    bool hasil1, hasil2;

    

   // sebanding ==

    hasil1 = (a == b);
    cout << hasil1 << endl;

    // tidak sebanding !=

    hasil2 = (a != b);
    cout << hasil2 << endl;

    // lebih besar dari >
    //lebih kecil dari <

    hasil1 = (a < b);
    hasil2 = (a > b);

    cout << "maka hasilnya adalah: " << hasil1 << endl;
    cout << "maka hasilnya adalah: " << hasil2 << endl;
    

    // kurang dari sama dengan
	hasil1 = (a <= b); 
	// lebih dari sama dengan
	hasil2 = (a >= b); 

	cout <<  hasil1 << endl;
	cout <<  hasil2 << endl;


    return 0;
}
