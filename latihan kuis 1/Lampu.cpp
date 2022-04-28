// Nama     : Jundan Haris
// NIM      : 13520155
// Kelas    : K02
// Topik    : Latihan Kuis 1 Case Lampu

#include "Lampu.h"
#include <iostream>
using namespace std;

Lampu::Lampu() {
    this->no_lamp = 0;
    this->nyala_lampu = false;
}

Lampu::Lampu(int Int, bool Bool){
    this->no_lamp= Int;
    this->nyala_lampu = Bool;
}

Lampu::Lampu(const Lampu& Lamp) {
    this->no_lamp = Lamp.no_lamp;
    this->nyala_lampu = Lamp.nyala_lampu;
}

void Lampu::set_nyala(){
    this->nyala_lampu = true;
}

void Lampu::set_mati(){
    this->nyala_lampu = false;
}

bool Lampu::get_info(){
    return nyala_lampu;
}

void Lampu::PrintInfo() const {

    if (this->nyala_lampu == true){
        cout << "O " ;
    } else {
        cout << "X ";
    }
}