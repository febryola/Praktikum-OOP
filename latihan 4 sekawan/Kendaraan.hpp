#ifndef _KENDARAAN_HPP_
#define _KENDARAAN_HPP_
#include <iostream>
using namespace std;
class Kendaraan{
    public:
        Kendaraan();
        Kendaraan(int nomor, int tahun,string merk,string kategori);
        Kendaraan(const Kendaraan&);
        ~Kendaraan();
        void PrintInfo();
        int BiayaSewa(int lamaSewa) const;
    private:
        int tahun;
        string merk;
        string kategori;
        int nomor;
};

#endif