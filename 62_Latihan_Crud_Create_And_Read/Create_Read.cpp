#include <iostream>
#include <string>
#include <fstream>
#include <limits>

using namespace std;

int getOption();
void checkDatabase(fstream &data);

struct Mahasiswa {
	int pk;
	string nama;
	string jurusan;
    string NIM;
};

int getDataSize(fstream &data){
    int start, end;
    data.seekg(0, ios::beg);
    start = data.tellg();
    data.seekg(0, ios::end);
    end = data.tellg();
    return (end - start) / sizeof(Mahasiswa);
}


void writeData(fstream &data, int posisi, Mahasiswa &inputMahasiswa){
    data.seekp((posisi - 1) * sizeof(Mahasiswa), ios::beg);
    data.write(reinterpret_cast<char*>(&inputMahasiswa),sizeof(Mahasiswa));
}

Mahasiswa readData(fstream &data, int posisi){
    Mahasiswa readMahasiswa;
    data.seekg((posisi - 1) * sizeof(Mahasiswa), ios::beg);
    data.read(reinterpret_cast<char*>(&readMahasiswa),sizeof(Mahasiswa));
    return readMahasiswa;
}

void addDataMahasiswa(fstream &data){

    Mahasiswa inputMahasiswa, lastMahasiswa;
    
    int size = getDataSize(data);

    cout << "ukuran data: " << size << endl;

    if(size == 0){
        inputMahasiswa.pk = 1;
    } else{
        lastMahasiswa = readData(data, size);
        cout << "pk = " << lastMahasiswa.pk << endl;
        inputMahasiswa.pk = lastMahasiswa.pk + 1;
    }

    //readData(data,size);

    
    cout << "Nama: ";
    getline(cin, inputMahasiswa.nama);
    cout << "Jurusan: ";
    getline(cin, inputMahasiswa.jurusan);
    cout << "NIM: ";
    getline(cin, inputMahasiswa.NIM);

    writeData(data, size+1, inputMahasiswa);

}

int main(){

    fstream data;
    checkDatabase(data);
    
    char is_continue;
    int pilihan = getOption();

    enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};

    while (pilihan != FINISH)
    {
        switch(pilihan){
		case CREATE:
			cout << "Tambah data mahasiswa" << endl;
            addDataMahasiswa(data);
            break;
		case READ:
			cout << "Tampilkan data mahasiswa" << endl;
            break;
		case UPDATE:
			cout << "Ubah data mahasiswa" << endl;
            break;
		case DELETE:
			cout << "Hapus data mahasiswa" << endl;
            break;
		default:
			cout << "Pilihan tidak di temukan" << endl;
            break;
	}
        label_continue:

        cout << "Lanjutkan?(y/n) : ";
        cin >> is_continue;
        if((is_continue == 'y') | (is_continue == 'Y')){
            pilihan = getOption();
        }
        else if((is_continue == 'n') | (is_continue == 'N')){
            break;
        }
        else{
            goto label_continue;
        }
        

    }

    cout << "Akhir dari program" << endl;
    


    return 0;
}

void checkDatabase(fstream &data){
    data.open("data.bin", ios::out | ios::in | ios::binary);

    // check file ada atau tidak
    if(data.is_open()){
        cout << "database ditemukan" << endl;
    } else{
        cout << "database tidak ditemukan, buat database baru" << endl;
        data.close();
        data.open("data.bin", ios::trunc | ios::out | ios::in | ios::binary);
    }
}

int getOption(){
    int input;
    system("cls");
    cout << "\n Program CRUD Data Mahasiswa" << endl;
    cout << "===============================" << endl;
    cout << "1. Tambah data mahasiswa" << endl;
    cout << "2. Tampilkan data mahasiswa" << endl;
    cout << "3. Ubah data mahasiswa" << endl;
    cout << "4. Hapus data mahasiswa" << endl;
    cout << "5. Selesai." << endl;
    cout << "===============================" << endl;
    cout << "Pilih 1 -5 : ";
    cin >> input;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    return input;
}