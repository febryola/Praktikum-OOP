#include <iostream>
using namespace std;

#include "Kendaraan.hpp"

Kendaraan::Kendaraan(){
    this->merk="XXX";
    this->tahun=0;
    this->nomor=0;
    this->kategori="Mobil";
}

Kendaraan::Kendaraan(int nomor,int tahun, string merk, string kategori){
    this->merk=merk;
    this->tahun=tahun;
    this->nomor=nomor;
    this->kategori=kategori;
}

Kendaraan::Kendaraan(const Kendaraan&kendaraan){
    this->merk=kendaraan.merk;
    this->tahun=kendaraan.tahun;
    this->nomor=kendaraan.nomor;
    this->kategori=kendaraan.kategori;
}

Kendaraan::~Kendaraan(){}

void Kendaraan:: PrintInfo(){
    cout << "Nomor Kendaraan: " << this->nomor <<endl;
    cout << "Tahun Keluaran: " << this->tahun <<endl;
    cout << "Merk Kendaraan: " << this->merk <<endl;
    cout << "Kategori: " <<this->kategori <<endl;
 }

int Kendaraan::BiayaSewa(int lamaSewa) const{
    if (this->kategori=="Bus"){
        return 1000000*lamaSewa;
    }
    else if(this->kategori=="Mobil"){
        return 500000*lamaSewa;
    }
    else{
        if (lamaSewa<=5){
            return 5000000;
        }
        else{
            return 5000000+500000*(lamaSewa-5);
        }
    }
}

