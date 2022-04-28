// Nama : Febryola Kurnia Putri
// NIM  : 13520140
// Kelas : K02
// Topik : Praktikum 2

#include <iostream>
#include "Pickaxe.hpp"
#include "ReinforcedAxe.hpp"
using namespace std;

int main(){
    Pickaxe *p1=new Pickaxe();

    p1->use();
    p1->enchant();

    Pickaxe *p2=new Pickaxe(*p1);
    Pickaxe *p3=new Pickaxe();

    p1->operator=(*p3);

    ReinforcedAxe *ra=new ReinforcedAxe();
    ra->use();

    ReinforcedAxe *ra1=new ReinforcedAxe(*ra);
    ra1->enchant();

    ReinforcedAxe *ra2=new ReinforcedAxe(ra->operator+(*ra));

    ra2->repair();

    delete ra;
    delete ra1;
    delete ra2;
    delete p1;
    delete p2;
    return 0;
}