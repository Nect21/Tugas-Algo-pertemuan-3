#include <iostream>

using namespace std;
int main () {
	int x;
	
	cout << " Masukan Nilai x : ";
	cin >> x;
	
	if (x > 0){ 
	    cout << " Maka " << x << " adalah bilangan positif " << endl;
	} else if (x < 0){
		cout << " Maka " << x << " adalah bilangan negatif " << endl;
	} else if (x == 0){
		cout << " Maka " << x << " adalah bilangan 0 " << endl;
	} else { 
		cout << " Nilai tidak valid " << endl;
	}

	return 0;
}
