#include<iostream>
using namespace std;

int main(){

    long kode, jumlah, sks, semester;
    char nama;

    cout << "Masukkan kode[1-3]: "; cin >> kode;
    cout << "Jumlah sks per semester[20-25]: "; cin >> sks;

    if(kode == 1){
        jumlah = 30000 * sks;
        semester = jumlah * 2;

        cout << "Prodi Teknik informatika" << endl;
       	cout << "=========================================================" << endl;
	    cout << "Pembayaran dalam satu semester yaitu: " << jumlah << endl;
        cout << "Pembayaran dalam satu tahun yaitu : " << semester << endl;

        
    }else if(kode == 2){
        jumlah = 20000 * sks;
        semester = jumlah * 2;

        cout << "Prodi Akutansi" << endl;
        cout << "=========================================================" << endl;
		cout << "Pembayaran dalam satu semester yaitu: " << jumlah << endl;
        cout << "Pembayaran dalam satu tahun yaitu : " << semester << endl;
   
    }else if (kode == 3){
    	jumlah = 15000 * sks;
    	semester = jumlah * 2;
    	
    	cout << "Prodi Manajemen" << endl;
    	cout << "=========================================================" << endl;
		cout << "Pembayaran dalam satu semester yaitu : " << jumlah << endl;
    	cout << "Pembayaran dalam satu tahun yaitu : " << semester << endl;
	
	}else{
		cout << " Pilihan anda tidak Valid " << endl;
	}
    
	return 0;
}
