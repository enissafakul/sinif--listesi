/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Ogrenci {
public:
    string ad;
    string soyad;
    int yas;
    string sinif;

    void bilgiGir(int i) {
        cout << "\n" << i + 1 << ". öğrencinin bilgilerini gir:\n";
        cout << "Ad: ";
        cin >> ad;
        cout << "Soyad: ";
        cin >> soyad;
        cout << "sinif: ";
        cin >> sinif;
        cout << "yas: ";
        cin >> yas;
    }

    void bilgiYaz() {
        cout << ad << " " << soyad << " | sinif: " << sinif << " | yas: " << yas << endl;
    }
};

int main() {
    int l;
    cout << "Kac ogrenci kayit edilecek? ";
    cin >> l;

    if (l <= 0) {
        cout << "yanlis sayi girdin ." << endl;
        return 0;
    } else {
        cout << l << " kayit basliyor.\n";
    }
    Ogrenci ogrenciler[100];
    for (int i= 0; i<l; i++) {
        ogrenciler[i].bilgiGir(i);
    }
    cout << "\n Kayitli Ogrenciler \n";
    for (int i= 0; i<i; i++) {
        ogrenciler[i].bilgiYaz();
    }

    return 0;
}