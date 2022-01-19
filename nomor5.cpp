#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int total(int, int);

int number[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main(){
    int x, y, z;
    cout << "Masukkan angka 1-10: " << endl;
    cin >> z;
    cout << "Masukkan nilainya: " << endl;
    cin >> y;
    x = total(y, z);
    cout << x << endl;
    return 0;
}

int total(int a, int b){
    return number[a] + b;
}