#include<iostream>
using namespace std;

int main(){

    int nilai;

    cout << "Masukkan sebuah nilai : ";
    cin >> nilai;

    if(nilai > 70){
        cout << "Kamu lulus\n" << endl;
    }else{
        cout << "Kamu tidak lulus" << endl;
    }

    return 0;
}

