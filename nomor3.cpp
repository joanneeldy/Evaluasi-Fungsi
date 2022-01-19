#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int cetak(char *);

int main(){
    char abc[111];
    cout << "Masukkan nama Anda: ";
    cin.get(abc, 111);
    return 0;
}

int cetak(char x[]){
    cout << "Welcome, " << x << "!" << endl;
}