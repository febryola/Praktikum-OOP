// Nama     : Jundan Haris
// NIM      : 13520155
// Kelas    : K02
// Topik    : Latihan Kuis 1 Case Lampu

#include "Lampu.h"
#include "sepuluhLampu.h"
#include "Lampu.cpp"
#include "sepuluhLampu.cpp"
#include <iostream>
using namespace std;

int main() {
    bool exit = false;
    int x;
    Sepuluh_Lampu s;
    
    for (int i=0; i<10; i++) {
        Lampu l1(i, false);
        s.operator+(l1);
    }
    cout << endl << "============AWAL================" << endl << endl;
    s.PrintAll();

    while(!exit){
        cout << endl << "masukkan angka: (0 untuk keluar) ";
        cin >> x;
        if (x == 0) {
            exit = true;
        } else {
            
            s.atur_nyala(x);
            cout << endl << "============HASIL================" << endl << endl;
            s.PrintAll();
            cout << endl;
        }
    }

    return 0;
}
