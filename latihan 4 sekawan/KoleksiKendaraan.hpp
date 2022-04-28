#ifndef __KOLEKSIKENDARAAN__HPP__
#define __KOLEKSIKENDARAAN__HPP__
#include <iostream>
using namespace std;
#include "Kendaraan.hpp"
class KoleksiKendaraan{
    public:
        KoleksiKendaraan();
        KoleksiKendaraan(int size);
        KoleksiKendaraan(const KoleksiKendaraan&);
        ~KoleksiKendaraan();
        void PrintAll();
        void operator<<(Kendaraan &k);
        void operator<<(KoleksiKendaraan &k2);
    private:
        int capacity;
        int neff;
        Kendaraan* storage;

};
#endif