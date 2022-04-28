// Nama     : Jundan Haris
// NIM      : 13520155
// Kelas    : K02
// Topik    : Latihan Kuis 1 Case Lampu

#include "Lampu.h"
#include "sepuluhLampu.h"

Sepuluh_Lampu::Sepuluh_Lampu(){
    this->size = 10;
    this->Neff = 0;
    this->array_Lampu = new Lampu[this->size];
}

Sepuluh_Lampu::Sepuluh_Lampu(int Int){
    this->size = 10;
    this->Neff = 0;
    this->array_Lampu = new Lampu[this->size];
}

Sepuluh_Lampu::Sepuluh_Lampu(const Sepuluh_Lampu& SepLamp){
    this->size = SepLamp.size;
    this->Neff = SepLamp.Neff;
    this->array_Lampu = new Lampu[this->size];
    for (int i=0; i< this->size; i++) {
        this->array_Lampu[i] = SepLamp.array_Lampu[i];
    }
}

Sepuluh_Lampu::~Sepuluh_Lampu(){
    delete[] this->array_Lampu;
}

Sepuluh_Lampu& Sepuluh_Lampu::operator+(const Lampu& Lamp){
    if (this->Neff < this->size){
        this->array_Lampu[Neff] = Lamp;
        this->Neff++;
    }
}

Sepuluh_Lampu& Sepuluh_Lampu::operator*=(const Sepuluh_Lampu& SepLamp){
    for (int i=0; i<10; i++) {
        this->operator+(SepLamp.array_Lampu[i]);
    }
}

void Sepuluh_Lampu::atur_nyala(int Int){ //asumsi Int pasti valid
    int i = Int-1;
    while (i < 10) {
        if (this->array_Lampu[i].get_info() == true) {
            this->array_Lampu[i].set_mati();
        } else {
            this->array_Lampu[i].set_nyala();
        }
         i = i + Int;
    }
    
}

void Sepuluh_Lampu::PrintAll(){
    for (int i=0; i < this->Neff; i++) {
        this->array_Lampu[i].PrintInfo();
    }
}