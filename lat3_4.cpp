#include <iostream>

using namespace std;

int main(){
	
	int nilai;
	
	cout << "Masukkan nilai: ";
	cin >> nilai;
	
	if(nilai >= 81 && nilai <= 100){
		cout << " Maka " << nilai << " adalah huruf = A" << endl;
	}else if(nilai >= 71 && nilai < 81){
		cout << " Maka " << nilai << " adalah huruf = B" << endl;
	}else if(nilai >= 61 && nilai < 71){
		cout << " Maka " << nilai << " Adalah huruf = C" << endl;
	}else if(nilai >= 51 && nilai < 61){
		cout << " Maka " << nilai << " Adalah huruf = D" << endl;
	}else if(nilai < 51 ){
		cout << " Maka " << nilai << " Adalah huruf = E" << endl;
	}else{
		cout << "Nilai tidak valid" << endl;
	}
	
	return 0;
}
