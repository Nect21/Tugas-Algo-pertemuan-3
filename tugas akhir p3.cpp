#include <iostream>

using namespace std;
	int main(){
		int kode;
		
	cout << "masukkan kode : "; 
	cin >> kode;
	
	if (kode == 1){
		cout << kode << " maka hari = senin ";	
	} else if (kode == 2){
		cout << kode << " maka hari = selasa ";
	} else if (kode == 3){
		cout << kode << " maka hari = rabu ";
	} else if (kode == 4){
		cout << kode << " maka hari = kamis ";
	} else if (kode == 5){
		cout << kode << " maka hari = jum'at ";
	} else if (kode == 6){
		cout << kode << " maka hari = sabtu ";
	} else if (kode == 7){
		cout << kode << " maka hari = minggu ";
	} else {
		cout << " pilihan tidak ada ";
	}
	
	return 0;
	
	}
