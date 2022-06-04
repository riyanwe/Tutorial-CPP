#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){

     // ios::in -> default
     // ios::ate -> mulai dari akhir
     // ios::ninary -> membaca file binary

    ifstream myFile;
    string output, output2;
    bool isData = false;
    int no;
    string nama;

    myFile.open("data.txt");
    /*
    myFile >> output; // membaca satu kata
    myFile >> output;
    */
   /*
    getline(myFile, output); // membaca 1 baris
    cout << output << endl;
    */
   /*
    getline(myFile, output2);
    output.append(output2);
    getline(myFile, output2);
    output.append("\n" + output2); // append : membaca baris berikutnya

    cout << output << endl;
    */

   while(!isData){
        getline(myFile, output2);
        output.append("\n" + output2);
        if(output2 == "data")
        break;
   }
   cout << output << endl;

     
   getline(myFile,output2);
   cout << output2 << endl;


   int jumlah = 0;

   while(!myFile.eof()){
        myFile >> no;
        myFile >> nama;
        cout << no << "\t" << nama << endl;
        jumlah++;
   }
   cout << "jumlah\t" << jumlah << endl;

    return 0;
}