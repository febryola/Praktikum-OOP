#include "KoleksiKendaraan.hpp"
#include <iostream>
using namespace std;

KoleksiKendaraan :: KoleksiKendaraan(){
    this->neff=0;
    this->capacity=100;
    this->storage = new Kendaraan[this->capacity];
}

KoleksiKendaraan :: KoleksiKendaraan(int size){
    this->neff=0;
    this->capacity=size;
    this->storage = new Kendaraan[this->capacity];
}

KoleksiKendaraan :: KoleksiKendaraan(const KoleksiKendaraan&koleksi){
    this->neff=koleksi.neff;
    this->capacity=koleksi.capacity;
    this->storage = new Kendaraan[this->capacity];
    for(int i=0;i<this->capacity;i++){
        this->storage[i] = koleksi.storage[i];
    }
}

KoleksiKendaraan :: ~KoleksiKendaraan(){
    delete [] this->storage;
}

void KoleksiKendaraan::PrintAll(){
    if(this->neff>=1){
        for(int i=0;i<this->neff;i++){
            this->storage[i].PrintInfo();
        }
    }
}

void KoleksiKendaraan::operator<<(Kendaraan &k ){
    if(this->neff < this->capacity){
        this->storage[this->neff] = k;
        this->neff++;
    }
}

void KoleksiKendaraan::operator<<(KoleksiKendaraan &k2){
    if (k2.neff>=1){
        for(int i=0;i<k2.neff;i++){
            this->operator<<(k2.storage[i]);
            this->neff++;
        }
    }
}