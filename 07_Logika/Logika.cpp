#include <iostream>

using namespace std;

int main()
{

    // operator logika: not, and, or

    int a = 3;
	int b = 2;

	bool hasil; 


	// not
	hasil = !(a == 3);

	// and : kedua nilai benar untuk menghasilkan true

	cout << "========== AND ======= \n";
	hasil = (a == 3) and (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 4) and (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) && (b == 3); // true and false
	cout << hasil << endl;
	hasil = (a == 4) && (b == 3); // false and false
	cout << hasil << endl;

	// or : salah satu nilai true maka hasil true
	cout << "======== OR ========= \n";
	hasil = (a == 3) or (b == 2); // true and true
	cout << hasil << endl;
	hasil = (a == 4) or (b == 2); // false and true
	cout << hasil << endl;
	hasil = (a == 3) || (b == 3); // true and false
	cout << hasil << endl;
	hasil = (a == 4) || (b == 3); // false and false
	cout << hasil << endl;


    cout << "========= NOT =========" << endl;
    
    hasil = !(a == 3); 
	cout << hasil << endl;
	hasil = !(a == 4); 
	cout << hasil << endl;
	hasil = !(a == 3); 
	cout << hasil << endl;
	hasil = !(a == 4); 
	cout << hasil << endl;


    cout << "========== NOT AND ======= \n";
	hasil = !((a == 3) and (b == 2)); // true and true
	cout << hasil << endl;
	hasil = !((a == 4) and (b == 2)); // false and true
	cout << hasil << endl;
	hasil = !((a == 3) && (b == 3)); // true and false
	cout << hasil << endl;
	hasil = !((a == 4) && (b == 3)); // false and false
	cout << hasil << endl;



return 0;
}